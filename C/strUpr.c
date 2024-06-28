// strUpr by me

#include <stdio.h>

char* strUpr(char* str){
  char* tar = str; 
  while(*str){
    if ((*str>='a') && (*str<='z'))
      *str ^= 32;
    str++;
    }
  return tar;
}
int main(){
  char a[] = "Hello";
  printf("%s",strUpr(a));
}

