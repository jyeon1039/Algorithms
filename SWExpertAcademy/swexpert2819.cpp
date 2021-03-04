#include <iostream>
#include <set>
using namespace std;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
set<int> result_set;
int tmp[7] = {0, };
int visited[4][4] = {0, };

void dfs(int map[][4], int x, int y, int n){
    tmp[n] = map[x][y];
    visited[x][y] = 1;
    
    if(n >= 6){
        int num = 0;
        int factor = 1;
        for(int i=6; i>=0; i--){
            num += factor * tmp[i];
            factor *= 10;
        }
        
        result_set.insert(num);
    }
    else{
        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx >= 0 && nx < 4 && ny >= 0 && ny < 4)
               	dfs(map, nx, ny, n+1);
        }
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;
    
    int map[4][4] = {0, };
    
	for(test_case = 1; test_case <= T; ++test_case)
	{
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++)
                cin >> map[i][j];
        }
        
        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++)
                dfs(map, i, j, 0);
        }
        
        cout << "#" << test_case << " " << result_set.size() << "\n";
        result_set.clear(); // 모든 원소 삭제
	}
	return 0;
}