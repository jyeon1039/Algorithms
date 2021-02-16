#include <iostream>
using namespace std;

int N, M;
int direction;
int x, y;

int map[50][50] = {0, }; 
int visited[50][50] = {0, }; //�湮 ����

//��, ��, ��, �� ����
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

//�������� ȸ��
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
        // �������� ȸ��
        turn_left();
        int nx = x + dx[direction];
        int ny = y + dy[direction];
        
        // ȸ���� ���� ���鿡 ������ ���� ĭ�� �����ϴ� ��� �̵�
        if(visited[nx][ny] == 0 && map[nx][ny] == 0){
            // ������ ���� ĭ���� �̵�
            x = nx;
            y = ny;
            visited[nx][ny] = 1; // �湮ó��
            result++;
            turn_count = 0;
            continue;
        }
        else{
            turn_count++;
        }
        
        // 4 ���� ��� �� �� ���� ���
        if(turn_count == 4){
            nx = x - dx[direction];
            ny = y - dy[direction];
            
            // �ڷ� �� �� �ִٸ� �̵�
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