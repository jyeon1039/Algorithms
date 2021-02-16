#include <stdio.h>

int gcd(int a, int b){
  if(a>b){
    int tmp = a;
    a = b;
    b = tmp;
  }
  while(1){
    int r = a%b;
    if(r == 0)
      return b;
    
    a = b;
    b = r;
  }
}

int lcm(int a, int b){
  return (a*b) / gcd(a, b);
}

int main() {
  int a1, b1;
  int a2, b2;
  scanf("%d %d", &a1, &b1);
  scanf("%d %d", &a2, &b2);
  
  int lcmResult = lcm(b1, b2);
  
  int sum = a1*(lcmResult/b1) + a2*(lcmResult/b2);
  
  int gcdResult = gcd(sum, lcmResult);
  
  printf("%d %d\n", sum/gcdResult, lcmResult/gcdResult);
  
  return 0;
}