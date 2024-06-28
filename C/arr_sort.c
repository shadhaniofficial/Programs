#include <stdio.h>

void swap(int* a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int* arr, int n){
  for (int i=0; i<n-1; i++){
    for (int j=i+1; j<n; j++){
      if (arr[i] > arr[j]){
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

int main(){
  
  int arr[] = {9,8,7,6,5,4,3,2,1,0};
  int l = 10;
  sort(arr, l);
  for (int i=0; i<l; i++){
    printf("%d ",arr[i]);
  }
  return 0;
}
