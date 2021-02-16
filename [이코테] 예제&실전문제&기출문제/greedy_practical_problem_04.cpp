#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    int count = 0;
    
    while(1){
        int target = (N / K) * K; //N���� ���� K�� ��� �ִ� ���ϱ�
        count += (N - target); //�� �� ���� �� K�� ����� ��������
        N = target;

        if(N < K)
            break;
            
        N /= K;
        count += 1; // K�� ������ ������ �� K�� ������ => count+1
    }
    
    count += (N - 1); //���������� ���� ���� ���Ͽ� 1�� ���� 
    
    cout << count << '\n';
    
    return 0;
}