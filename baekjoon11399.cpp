#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> v(N);
    
    for(int i=0; i<N; i++)
        cin >> v[i];
        
    sort(v.begin(), v.end());
    
    int result = 0;
    int sum = 0;
    
    for(int i=0; i<N; i++){
        result += sum + v[i];
        sum += v[i];
    }
    
    cout << result << "\n";
    
    return 0;
}