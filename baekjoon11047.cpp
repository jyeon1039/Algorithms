#include <iostream>
using namespace std;

int main()
{
    int N, K;
    
    cin >> N >> K;
    
    int coin[10];
    int result = 0;
    
    for(int i=0; i<N; i++){
        cin >> coin[i];
    }
    
    int index = N-1;
    
    while(N != 0){
        result += K / coin[index];
        K %= coin[index--];
    }
    
    cout << result << "\n";
    
    return 0;
}
