#include <stdio.h>

int main(){
  
  int n;
  scanf("%d",&n);
  
  int temp;
  
  while (n>26){
    temp = n;
    n=0;
    while (temp){
      n += temp % 10;
      temp /= 10;
    }
  }
  
  printf("%c",'a'+n-1); // 64+n
  
  return 0;
}
