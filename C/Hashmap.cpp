#include <stdio.h>

int main(){
  
  int hash[10] = {0};
  
  long long int num;
  scanf("%lld", &num);
  
  while (num){
    hash[num%10]++;
    num /= 10;
  }
  
  char key;
  
  while (1){
    scanf(" %c", &key);
    if (key < '0' || key > '9') break;
    printf("%c : %d\n", key, hash[key - 48]);
  }
  
  return 0;
}
