#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    vector<int> B(N);
    
    for(int i=0; i<N; i++)
        cin >> A[i];
        
    for(int i=0; i<N; i++)
        cin >> B[i];
        
    sort(A.begin(), A.end()); //A는 오름차순으로 정렬
    sort(B.begin(), B.end(), compare); //B는 내림차순으로 정렬
    
    int sum = 0;

    //A[0] ~ A[K-1] 까지는 B[0]~B[K-1]이 들어가니까 바꾸는 과정 생략하고 B[i]를 결과값에 더함
    for(int i=0; i<K; i++)
        sum += B[i];
        
    for(int i=K; i<N; i++)
        sum += A[i];
        
    cout << sum << "\n";

    return 0;
}
