#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  fgets(str, 1000, stdin);
  
  char beforeChar = str[0];
  int cnt = 1;
  for(int i=1; i<strlen(str); i++){
    if(str[i] == beforeChar)
      cnt++;
    else {
      if(cnt == 1)
        printf("%c", beforeChar);
      else if(cnt > 1)
        printf("%d%c", cnt, beforeChar);
      beforeChar = str[i];
      cnt = 1;
    }
  }
  
  if(cnt == 1)
    printf("%c", beforeChar);
  else if(cnt > 1)
    printf("%d%c", cnt, beforeChar);

  return 0;
}