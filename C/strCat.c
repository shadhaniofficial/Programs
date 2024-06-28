// strCat by me

#include <stdio.h>

char* strCat(char* des, char* src){
  char* tar = des;
  while(*des) des++;
  while(*des++ = *src++);
  return tar;
}
int main(){
  char a[] = "Hello";
  char b[] = "abc";
  printf("%s",strCat(a,b));
}

