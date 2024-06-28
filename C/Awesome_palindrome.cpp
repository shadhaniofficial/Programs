#include <stdio.h>

int strLen(char* string);
int palindromeStrLen(char* str, int len);
int largeSeq(char* str,char* subStr, int len);

int main(){
  char string[20];
  char subString[20];
  printf("Enter the String: ");
  scanf("%s",string);
  int len = strLen(string);
  printf("%d",palindromeStrLen(string, len));
}

int strLen(char* string){
  int len = 0;
  for (;string[len];len++);
  return len;
}

int palindromeStrLen(char* string, int len){
  int arr[10] = {0};
  for (int i=0; i<len; i++)
    arr[int(string[i]) - 48]++;
  int c = 0, oc = 0;
  for (int i=0; i<10; i++){
    if (arr[i]%2==0 && arr[i]!=0)
      c += arr[i];
    else if (oc==0)
      oc++;  
  }
  return c+oc;
}

int largeSep(char* str, char* subStr, int len){
  char temp[len];
  for (int i=0; i<len; i++){
    for (int j=0; j<i; j++){
      
    }
  }
}
