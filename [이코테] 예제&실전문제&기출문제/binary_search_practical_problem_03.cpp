#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, m;
    
    cin >> n >> m;
    
    vector<int> arr(n);
    
    int start = 0;
    int end = 0;
    int result = 0; 
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > end)
            end = arr[i];
    }
    
    while (start <= end) {
        long long int total = 0;
        int mid = (start + end) / 2;
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > mid) 
                total += arr[i] - mid; 
        }
        
        if (total < m) { 
            end = mid - 1;
        }
        else { 
            result = mid; 
            start = mid + 1;
        }
    }
    cout << result << '\n';
}