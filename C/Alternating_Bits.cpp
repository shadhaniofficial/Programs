#include <stdio.h>

int main(){
  int n,v=1;
  scanf("%d", &n);
  for (int i=1; i<=n; i++){
    printf("%d\n",v);
    v = v<<1;
    if (i%2==0)
      v++;
  }
}

