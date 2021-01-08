#include <stdio.h>

int main() {
  int n, m;
  int map[31][31] = {0, };
  
  scanf("%d %d", &n, &m);
  
  for(int r=0; r<=n; r++){
    for(int c=0; c<=r; c++){
      if(c==0 || c==r)  
        map[r][c] = 1;
      else
        map[r][c] = map[r-1][c-1] + map[r-1][c];
    }
  }
  
  printf("%d", map[n][m]);
  
  return 0;
}
