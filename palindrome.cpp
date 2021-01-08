#include <stdio.h>
#include <string.h>

bool palindrom(char str[]){
  int len = strlen(str);
  for(int i=0; i<len/2; i++){
    if(str[i] != str[len-1-i])
      return false;
  }
  return true;
}

int main() {
  char str[1000];
  
  fgets(str, 1000, stdin);
  
  if(palindrom(str))
    printf("YES");
  else
    printf("NO");

  return 0;
}