#include <iostream>
using namespace std;

void binary(long long n){
  if(n==0)
    return;
    
  binary(n/2);
  cout << n%2;
}

int main() {
  long long N;
  cin >> N;
  
  binary(N);

  return 0;
}