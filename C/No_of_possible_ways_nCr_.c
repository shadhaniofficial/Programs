#include <stdio.h>

int fact(int n);

int main(){
  int r,c;
  
  printf("Enter the position of Desitination:\n");
  printf("Row: ");
  scanf("%d",&r);
  printf("Column: ");
  scanf("%d",&c);
  
  if( r<c ){
    int temp = r;
    r = c;
    c = temp;  
  }
  
  printf("nCr Total possible ways were %d.\n",  fact(r)/(fact(r-c)*fact(c)));
  printf("nPr Total possible ways were %d.\n",  fact(r)/fact(r-c));
  printf("net Total possible ways were %d.\n",  fact(r+c)/(fact(r)*fact(c)));
  
  return 0;
}

int fact(int n){
  if(n==1 || n==0)
    return 1; 
  return n * fact(n-1);
}
