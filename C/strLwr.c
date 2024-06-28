// strLwr by me

#include <stdio.h>

char* strLwr(char* str){
  char* tar = str;
  while(*str){
    if ((*str>='A') && (*str<='Z'))
      *str ^= 32;
    str++;
    }
  return tar;
}
int main(){
  char a[] = "Hello";
  printf("%s",strLwr(a));
}

