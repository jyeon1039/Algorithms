#include <iostream>
using namespace std;

int N, M;
int visited[1001] = {0, };
int graph[1001][1001] = {0, };

void dfs(int cur){
    visited[cur] = 1; //¹æ¹®
    
    for(int next=1; next<=N; next++){
        if(graph[cur][next]){
            if(!visited[next])
                dfs(next);
        }
    }
}

int main(){
    cin >> N >> M;
    
    for(int i=0; i<M; i++){
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    
    int result = 0;
    
    for(int i=1; i<=N; i++){
        if(!visited[i]){
            dfs(i);
            result++;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}