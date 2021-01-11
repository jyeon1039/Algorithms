#include <stdio.h>

void swap(int& a, int& b){
  int tmp = a;
  a = b;
  b = tmp;
}

int getMax(int a, int b, int c){
  if(a>b)
    swap(a,b);
    
  if(b>c)
    swap(b, c);
    
  if(a>b)
    swap(a,b);
    
  return c;
}

int main() {
  int n;
  int score;
  
  scanf("%d", &n);
  
  int max = 0;
  for(int i=0; i<n; i++){
    score = 0;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int equalCount = 0;
    
    if(a==b && b==c)
      score = 10000 + a*1000;
    else if(a==b || b==c || a==c)
      score = 1000 + getMax(a, b, c)*100;
    else
      score = getMax(a, b, c)*100;
      
    if(max < score)
      max = score;
  }
  
  printf("%d", max);

  return 0;
}