#include <iostream>
using namespace std;

int map[1000][1000];
int N, M;

void dfs(int x, int y){
    //범위를 벗어나는 경우 종료
    if(x<0 || x>=N || y<0 || y>=M)
        return;
    
    //해당 노드를 방문하지 않았다면 방문 처리하고, 상, 하, 좌, 우의 위치들도 모두 방문
    if(map[x][y] == 0){
        map[x][y] = 1;
        dfs(x-1, y);
        dfs(x+1, y);
        dfs(x, y-1);
        dfs(x, y+1);
    }
}

int main(){
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            scanf("%1d", &map[i][j]);
        }
    }
    
    
    int result = 0;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(map[i][j] == 0){
                dfs(i, j);
                result++;
            }
        }
    }
    
    cout << result << "\n";
}