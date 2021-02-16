#include <iostream>
using namespace std;

int N, M;
int direction;
int x, y;

int map[50][50] = {0, }; 
int visited[50][50] = {0, }; //방문 여부

//북, 동, 남, 서 방향
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

//왼쪽으로 회전
void turn_left(){
    direction -= 1;
    if(direction < 0)
        direction = 3;
}

int main()
{
    cin >> N >> M;
    cin >> x >> y >> direction;
    
    visited[x][y] = 1;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> map[i][j];
        }
    }
    
    int result = 1;
    int turn_count = 0;
    
    while(true){
        // 왼쪽으로 회전
        turn_left();
        int nx = x + dx[direction];
        int ny = y + dy[direction];
        
        // 회전한 이후 정면에 가보지 않은 칸이 존재하는 경우 이동
        if(visited[nx][ny] == 0 && map[nx][ny] == 0){
            // 가보지 않은 칸으로 이동
            x = nx;
            y = ny;
            visited[nx][ny] = 1; // 방문처리
            result++;
            turn_count = 0;
            continue;
        }
        else{
            turn_count++;
        }
        
        // 4 방향 모두 갈 수 없는 경우
        if(turn_count == 4){
            nx = x - dx[direction];
            ny = y - dy[direction];
            
            // 뒤로 갈 수 있다면 이동
            if(map[nx][ny] == 0){
                x = nx;
                y = ny;
            }
            else{
                break;
            }
            turn_count = 0;
        }
    }
    
    cout << result << "\n";
    
    return 0;
}