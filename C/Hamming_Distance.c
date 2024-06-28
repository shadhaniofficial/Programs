#include <stdio.h>

int main(){
  int a,b,c=0;
  printf("Enter the num1: ");
  scanf("%d",&a);
  printf("Enter the num2: ");
  scanf("%d",&b);
  a ^= b;
  while (a){
    if (a%2) c++;
    a /= 2;
  }
  printf("Hamming Code: %d", c);
  return 0;
}
