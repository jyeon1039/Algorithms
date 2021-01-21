#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> arr(N);
    
    for(int i=0; i<N; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    
    int result = 0; //�� �׷� ��
    int countOfPeople = 0; //���� ���� �ο�
    
    for(int i=0; i<N; i++){
        countOfPeople++; //���� ���� �ο��� �ش� ���谡 ���� ��Ŵ 
        if(arr[i] <= countOfPeople){
            result++;
            countOfPeople = 0; //�ο��� �ʱ�ȭ
        }
    }
    
    cout << result << "\n";
}