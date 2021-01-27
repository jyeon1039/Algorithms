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
    
    int result = 0; //총 그룹 수
    int countOfPeople = 0; //현재 모인 인원
    
    for(int i=0; i<N; i++){
        countOfPeople++; //현재 모인 인원에 해당 모험가 포함 시킴 
        if(arr[i] <= countOfPeople){
            result++;
            countOfPeople = 0; //인원수 초기화
        }
    }
    
    cout << result << "\n";
}