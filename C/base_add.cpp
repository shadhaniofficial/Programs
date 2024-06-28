#include <stdio.h>

int pow( int base, int expo);

int main(){
  
  int base;
  printf("Enter the Base: ");
  scanf("%d",&base);
  
  int num1;
  printf("Enter the Number1: ");
  scanf("%d",&num1);
  
  int num2;
  printf("Enter the Number2: ");
  scanf("%d",&num2);
  
  int max = num1;
  int min = num2;
  
  if (num2 > num1){
    max = num2;
    min = num1;
  }
  
  int result = 0;
  int digit = 0;
  int carry = 0;
  int fA;
  
  while (max){
    
    fA = (max%10) + (min%10) + carry;
    carry = 0;
    
    if (fA >= base){
      carry = 1;
      fA -= base;
    }
    
    result += fA * pow(10, digit);
    max /= 10;
    min /= 10;
    digit++;
  }
  
  result += carry * pow(10,digit);
  
  printf("\nSum: %d, Base: %d", result, base);
  
  return 0;
}

int pow (int base, int expo){
  int result = 1;
  for (int i=0; i<expo; i++)  result *= base;
  return result;
}
