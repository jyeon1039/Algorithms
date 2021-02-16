#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n;
    
    cin >> n;
    
    vector<int> v(n);

    for (int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++) 
        cout << v[i] << ' ';
        
    return 0;
}