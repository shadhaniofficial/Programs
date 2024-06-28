#include <stdio.h>

int strLen(char* string);
void hashMap(char* str, int* hashSet, int len);

int main(){
  char str[20] = "12321";
  int l = strLen(str);
  int hashSet[l];
  hashMap(str, hashSet, l);
}

int strLen(char* string){
  int len = 0;
  for (;string[len];len++);
  return len;
}

void hashMap(char* str, int* hashSet,int len){
  int arr[10] = {0};
  for (int i=0; i<len; i++)
    arr[int(str[i]) - 48]++;
  for (int i=0; i<len; i++){
    hashSet[i] = arr[int(str[i]) - 48];
  }
}
