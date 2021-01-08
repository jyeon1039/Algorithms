#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  
  if(N==1){
    printf("1");
    return 0;
  }
  
  int result = 1;
  int num = 1;

  for(int i=1; i<=N/6+1; i++){
    result++;
    for(int j=0; j<6*i; j++){
      num++;
      if(num == N){
        printf("%d", result);
        return 0;
      }
    }
  }
}