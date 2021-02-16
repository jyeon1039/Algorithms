#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  
  fgets(str, 1000, stdin);
  
  for(int i=strlen(str)-1; i>=0; i--)
    printf("%c", str[i]);

  return 0;
}