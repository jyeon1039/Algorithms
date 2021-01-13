#include <stdio.h>
#include <string.h>

char bigNum[100];
char tmpSmallNum[100];
char smallNum[100];

void swap(){
  char tmp[100];
  strcpy(tmp, tmpSmallNum);
  strcpy(tmpSmallNum, bigNum);
  strcpy(bigNum, tmp);
}

void arrange(int lastIndexOfBigNum, int lastIndexOfSmallNum){
  int size = lastIndexOfBigNum-lastIndexOfSmallNum;
  for(int i=0; i<size; i++)
    smallNum[i] = '0';
    
  for(int i=size; i<=lastIndexOfBigNum; i++)
    smallNum[i] = tmpSmallNum[i-size]; 
}

void sub(int lastIndexOfBigNum){
  int carry = 0;
  
  while(lastIndexOfBigNum >= 0){
    int result = (bigNum[lastIndexOfBigNum]-'0') - (smallNum[lastIndexOfBigNum]-'0') - carry;
    
    if(result < 0){
      result = (10 + (bigNum[lastIndexOfBigNum]-'0')) - (smallNum[lastIndexOfBigNum]-'0') - carry;
      carry = 1;
    }
    else
      carry = 0;
    
    bigNum[lastIndexOfBigNum] = (result%10)+'0';
    
    lastIndexOfBigNum--;
  }
}

int main() {
  scanf("%s", bigNum);
  scanf("%s", tmpSmallNum);
  bool negative = false;
  
  int lastIndexOfBigNum = strlen(bigNum)-1;
  int lastIndexOfSmallNum = strlen(tmpSmallNum)-1;
  
  if(lastIndexOfBigNum < lastIndexOfSmallNum){
    negative = true;
    swap();
    lastIndexOfBigNum = strlen(bigNum)-1;
    lastIndexOfSmallNum = strlen(tmpSmallNum)-1;
  }
  else if(lastIndexOfBigNum == lastIndexOfSmallNum){
    if(strcmp(bigNum, tmpSmallNum) < 0){
      negative = true;
      swap();
    }
  }
  
  
  arrange(lastIndexOfBigNum, lastIndexOfSmallNum);
  
  sub(lastIndexOfBigNum);
  
  if(negative)
    printf("-");
  
  int start = 0;
  while(true){
    if(bigNum[start]-'0' != 0)
      break;
    start++;
  }
  
  if(start > lastIndexOfBigNum)
    printf("0");
  else{
    for(int i=start; i<=lastIndexOfBigNum; i++)
      printf("%d", bigNum[i]-'0');
  }
  
  
  return 0;
}