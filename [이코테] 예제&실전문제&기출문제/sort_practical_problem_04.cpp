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
        
    sort(A.begin(), A.end()); //A�� ������������ ����
    sort(B.begin(), B.end(), compare); //B�� ������������ ����
    
    int sum = 0;

    //A[0] ~ A[K-1] ������ B[0]~B[K-1]�� ���ϱ� �ٲٴ� ���� �����ϰ� B[i]�� ������� ����
    for(int i=0; i<K; i++)
        sum += B[i];
        
    for(int i=K; i<N; i++)
        sum += A[i];
        
    cout << sum << "\n";

    return 0;
}
