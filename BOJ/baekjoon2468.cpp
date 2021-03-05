#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > region;
vector<vector<bool> > visited;
const int dx[4] = {0, 0, 1, -1};
const int dy[4] = {1, -1, 0, 0};
 
void dfs(int x, int y, int h) {
    for (int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (region[xx][yy] > h && !visited[xx][yy]) {
            visited[xx][yy] = true;
            dfs(xx, yy, h);
        }
    }
}
 
int main() { 
    int num;
    cin >> num;
    region = vector<vector<int> >(num + 2, vector<int>(num + 2));
    visited = vector<vector<bool> >(num + 2, vector<bool>(num + 2, false));
    for (int i = 1; i <= num; i++)
        for (int j = 1; j <= num; j++)
            cin >> region[i][j];
 
    int result = 1;
    for (int n = 1; n <= 100; n++) {
        for (int i = 1; i <= num; i++)
            for (int j = 1; j <= num; j++)
                visited[i][j] = false;
 
        int cnt = 0;
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num; j++) {
                if (region[i][j] > n && !visited[i][j]) {
                    visited[i][j] = true;
                    dfs(i, j, n);
                    cnt++;
                }
            }
        }
        result = max(result, cnt);
    }
 
    cout << result;
 
    return 0;
}`