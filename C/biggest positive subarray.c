#include <stdio.h>

void subarr(int* arr, int n);

int main(){
  int n,i;
  scanf("%d",&n);
  int a[n], p[n]={};
  for (i=0; i<n; i++){
    scanf("%d",&a[i]);
  }
  int neg=0, pos=0;
  for (i=0; i<n; i++){
    if(a[i]<0){
      neg++;
      pos=0;
    }
    else{
      neg=0;
      pos++;
      p[i] = a[i];
    }
    printf("N - %d, P - %d\n", neg,pos);
  }
  for (int i=0; i<n; i++){
    printf("%d ", p[i]);
  } printf("\n");
  return 0;
}

void subarr(int* arr, int n){
  int c=0, ptr=0, tmp=0;
  for (int i=0; i<n; i++){
		
  }
}
