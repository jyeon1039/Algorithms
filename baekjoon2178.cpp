#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int n, m;
int map[100][100];
int visited[100][100] = {0, };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void bfs(){
    queue<pair<int, int>> q;
    q.push(pair<int, int>(0, 0));
    
    visited[0][0] = 1;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        //상하좌우로 이동
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(0<=nx && nx<=n-1 && 0<=ny && ny<=m-1){
                if(map[nx][ny] == 1 && visited[nx][ny] == 0){
                    q.push(pair<int, int>(nx, ny));
                    visited[nx][ny] = visited[x][y]+1;
                }
            } 
        }
    }
}

int main(){
    cin >> n >> m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            scanf("%1d", &map[i][j]);
    }
    
    bfs();
    
    cout << visited[n-1][m-1] << "\n";
    
    return 0;
}