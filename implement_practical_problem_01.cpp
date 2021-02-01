#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};
    
    int startCol = (s[0] - 'a') + 1;
    int startRow = s[1] - '0';
    
    int result = 0;
    
    for(int i=0; i<8; i++){
        int nextRow= startCol + dx[i];
        int nextCol = startRow + dy[i];
        
        if(1 <= nextRow&& nextRow <= 8 && 1 <= nextCol &&  nextCol <= 8)
            result++;
    }
    
    cout << result << "\n";
}