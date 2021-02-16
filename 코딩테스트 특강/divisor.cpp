#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  
  for(int i=1; i<=N/2; i++){
    if(N%i == 0)
      printf("%d ", i);
  }
  
  printf("%d\n", N);
  
  return 0;
}