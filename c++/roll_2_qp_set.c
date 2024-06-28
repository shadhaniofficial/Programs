#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  
  int temp1, temp2 = 0;
  while (n>26){
    temp1 = n;
    while (temp1){
      temp2 = temp1 % 10;
      temp1 /= 10;
    }
    n = temp2;
  }
  printf("%c",'a'+n);
  
  return 0;
}
