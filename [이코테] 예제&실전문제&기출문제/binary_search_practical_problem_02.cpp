#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string binary_search(vector<int> arr, int target, int start, int end){
    while(start <= end){
        int mid = (start+end)/2;
        if(target == arr[mid])
            return "yes";
        else if(target < arr[mid])
            end = mid-1;
        else if(target > arr[mid])
            start = mid+1;
    }
    
    return "no";
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
        
    sort(arr.begin(), arr.end());
    
    int m;
    cin >> m;
    vector<int> check_arr(m);
    for(int i=0; i<m; i++)
        cin >> check_arr[i];
        
    for(int i=0; i<m; i++)
        cout << binary_search(arr, check_arr[i], 0, n-1) << " ";
        
    return 0;
}