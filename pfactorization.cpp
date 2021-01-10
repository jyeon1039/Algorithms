#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  
  for(int i=2; i<=n;){
    if(n%i == 0){
      printf("%d\n", i);
      n /= i;
    }
    else
      i++;
    
  }

  return 0;
}