#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    int count = 0;
    
    while(1){
        int target = (N / K) * K; //N보다 작은 K의 배수 최댓값 구하기
        count += (N - target); //몇 번 뺐을 때 K의 배수가 나오는지
        N = target;

        if(N < K)
            break;
            
        N /= K;
        count += 1; // K로 나누어 떨어질 때 K로 나누기 => count+1
    }
    
    count += (N - 1); //마지막으로 남은 수에 대하여 1씩 빼기 
    
    cout << count << '\n';
    
    return 0;
}