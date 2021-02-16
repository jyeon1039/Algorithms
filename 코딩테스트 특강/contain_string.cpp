#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  char word[1000];
  
  scanf("%s %s", &str, &word);
  
  int flag = 0;
  
  for(int i=0; i<strlen(str); i++){
    if(str[i] == word[0]){
      int cnt = 0;
      for(int j=i; j<i+strlen(word); j++){
        if(str[j] != word[cnt++]){
          flag = 0;
          break;
        }
        else
          flag = 1;
      }
    }
    
    if(flag)
      break;
  }
  
  if(flag)
    printf("YES");
  else
    printf("NO");
  
  return 0;
}