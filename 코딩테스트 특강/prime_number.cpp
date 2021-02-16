#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  
  bool isPrime = true;
  
  for(int i=2; i<=N-1; i++){
    if(N%i == 0){
      isPrime = false;
      break;
    }
  }
  
  if(isPrime)
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}