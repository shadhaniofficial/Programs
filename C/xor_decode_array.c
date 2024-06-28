#include <stdio.h>

int main(){
  int n = 3;                              //Enter the Size of the array
  int encode[] = {1, 2, 3};               //Define the encoded array
  int decode[n+1] = {};
  int first;
  scanf("%d", &first);                    //Enter the first element
  decode[0] = first;
  for (int i=0; i<n; i++){
    decode[i+1] = encode[i] ^ decode[i];
    printf("%d ",decode[i]);
  } printf("%d ",decode[n]);
  return 0;
}
