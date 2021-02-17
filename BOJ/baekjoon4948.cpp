#include <iostream>
using namespace std;

void checkPrimes(int primes[], int N) {
    for(int i = 0; i <= N; i++)
        primes[i] = 1;
        
    primes[0] = primes[1] = 0; //숫자 0과 1은 제외
    for(int i = 2; i<= N; i++) {
        if(primes[i]) {  //소수일 경우 배수는 다 삭제 
            for(int n = i*2; n <= N; n += i)
                primes[n] = 0;
        }
    }
}

int main(){
	int N;
	int sum = 0;
	while(true){
		sum = 0;
		cin >> N;
		if(N==0)
			break;
		int* primes = new int[2*N+1];
		checkPrimes(primes, 2*N);
		for(int i=N+1; i<=2*N; i++){
			if(primes[i] == 1)
				sum++;
		}
		cout << sum << endl;
        
        delete primes;
	}
	
	return 0;
}