#include <stdio.h>
#include <math.h>

int main() {
  int n;
  
  int arr[1000000];
  
  for(int i=0; i<1000000; i++)
    arr[i] = 1;
  
  arr[0] = arr[1] = 0;
  
  for(int i=2; i<sqrt(1000000); i++){
    if(arr[i]){
      for(int j=i*2; j<=1000000; j+=i)
        arr[j] = 0;
    }
  }
  
  while(true){
    int num;
    scanf("%d", &num);
    if(num == 0)
      break;
    
    int cnt = 0;
    
    for(int i=num+1; i<=2*num; i++){
      if(arr[i])
        cnt++;
    }
    
    printf("%d\n", cnt);
  }

  return 0;
}