#include <stdio.h>

const int MAX = 105;

int n, r;
char result[MAX];
bool check[MAX];

void getResult(int x){
  if(x >= r){
    printf("%s\n", result);
  }
  else{
    for(int i=0; i<n; i++){
      char alpha = i+'a';
      if(!check[i]){
        result[x] = alpha;
        check[i] = true;
        getResult(x+1);
        //x번째에 i를 넣는 모든 경우를 이미 다 고려함
        check[i] = false;
        result[x] = 0;
      }
    }
  }
}

int main() {
  scanf("%d %d", &n, &r);
  
  getResult(0);

  return 0;
}