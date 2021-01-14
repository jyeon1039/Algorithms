#include <stdio.h>

int n, k;
int result[30];

void getResult(int current, int cnt){
  if(current >= n){
    if(cnt == k){
      for(int i=0; i<n; i++)
        printf("%d", result[i]);
      printf("\n");
    }
  }
  else{
    if(cnt < k){
      result[current]=1;
      getResult(current+1, cnt+1);
    }
    result[current]=0;
    getResult(current+1, cnt);
  }
}

int main() {
  scanf("%d %d", &n, &k);
  
  getResult(0, 0);
  
  return 0;
}
