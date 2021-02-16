#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  int num[100];
  int strike[100];
  int ball[100];
  int result = 0;
  
  for(int i=0; i<N; i++)
    scanf("%d %d %d", &num[i], &strike[i], &ball[i]);
    
  for(int i=123; i<=987; i++){
    //세 자리 수가 같다
    int first = i/100;
    int second = (i%100) / 10;
    int third = i%10;
    
    if(first == second || second == third || first == third
      || first == 0 || second == 0 || third == 0 ) {
      continue;
    }
    
    int flag;
    
    for(int j=0; j<N; j++){
      int num_first = num[j]/100;
      int num_second = (num[j]%100) / 10;
      int num_third = num[j]%10;
      
      int strike_cnt = 0;
      
      flag = 0;
      
      //스트라이크 개수
      if(first == num_first)
        strike_cnt++;
      if(second == num_second)
        strike_cnt++;
      if(third == num_third)
        strike_cnt++;

        
      //stike의 수가 맞다면
      if(strike_cnt == strike[j]){
        int ball_cnt = 0;
        if(first == num_second || first == num_third)
          ball_cnt++;
          
        if(second == num_first || second == num_third)
          ball_cnt++;
          
        if(third == num_first || third == num_second)
          ball_cnt++;
          
        if(ball_cnt == ball[j])
          flag = 1;
        else{
          flag = 0;
          break;
        }
      }
      else
        break;
    }
    
    if(flag)
      result++;
  }
  
  printf("%d", result);

  return 0;
}