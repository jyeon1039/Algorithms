#include <iostream>
using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	int* card = new int[N];
	for(int i=0; i<N; i++)
		cin >> card[i];
		
	int max = 0;
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			for(int k=j+1; k<N; k++){
				//cout << i << " " << j << " " << k << endl;
				if(card[i]+card[j]+card[k] <= M && card[i]+card[j]+card[k] > max){
					//cout << "if: " << card[i] << " " << card[j] << " " << card[k] << endl;
					max = card[i]+card[j]+card[k];
				}
			}
		}
	}
	
	cout << max;
	
	return 0;
}