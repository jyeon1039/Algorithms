#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int N;
    
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0}; 
    char direct[4] = {'U', 'R', 'D', 'L'};
    
    string plans = "";
    
    int currentX = 1, currentY = 1;
    
    cin >> N;
    
    cin.ignore(); // 버퍼 비우기 
    getline(cin, plans);
    
    for (int i = 0; i < plans.size(); i++) {
        char plan = plans[i];
        for(int j=0; j<4; j++){
            if(direct[j] == plan){
                int nx = dx[j] + currentX;
                int ny = dy[j] + currentY;
                if(1 <= nx && nx <= N && 1 <= ny && ny <= N){
                    currentX = nx;
                    currentY = ny;
                }
            }
        }
    }
    
    cout << currentY << " " << currentX << "\n";
    
    return 0;
}
