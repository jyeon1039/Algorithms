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
        // 만들 수 없는 금액을 찾았을 때 반복 종료
        if (target < coins[i]) 
            break;
        target += coins[i];
    }

    // 만들 수 없는 금액 출력
    cout << target << '\n';
}