#include <stdio.h>
#include <string.h>

int main(){
  int n,l,c;
  scanf("%d",&n);
  char str[50];
  for (int i=0; i<n; i++){
    c = 0;
    scanf("\n%[^\n]s",str);
    l = strlen(str);
    for (int j=0; j<l; j++){
      if (c) {
        printf("%c",str[j]);
        continue;
      }
      if (str[j] == ' ') c++;
    }
    if (c) {
      printf("\n");
      continue;
    }
    printf("%s\n",str);
  }
  return 0;
}

/*

input:-
3
sam ram
dom
kit kat

output:-
ram
dom
kat

*/
