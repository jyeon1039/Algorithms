#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int n;

    cin >> n;
    
    vector<int> coins(n);

    for (int i = 0; i < n; i++) 
        cin >> coins[i];
    

    sort(coins.begin(), coins.end());
  

    int target = 1;
    
    for (int i = 0; i < n; i++) {
        // ���� �� ���� �ݾ��� ã���� �� �ݺ� ����
        if (target < coins[i]) 
            break;
        target += coins[i];
    }

    // ���� �� ���� �ݾ� ���
    cout << target << '\n';
}