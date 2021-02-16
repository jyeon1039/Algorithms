#include <iostream>
using namespace std;

int map[1000][1000];
int N, M;

void dfs(int x, int y){
    //������ ����� ��� ����
    if(x<0 || x>=N || y<0 || y>=M)
        return;
    
    //�ش� ��带 �湮���� �ʾҴٸ� �湮 ó���ϰ�, ��, ��, ��, ���� ��ġ�鵵 ��� �湮
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