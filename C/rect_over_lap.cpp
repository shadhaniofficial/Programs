#include <stdio.h>

float abs (float x){
  if (x<0) return x*-1;
  return x;
}

int main(){

  int rect1[] = {1,1,1,1}; //{1x1,1y1,1x2,1y2}
  int rect2[] = {0,0,2,2}; //{2x1,2y1,2x2,2y2}
  
  float midx1 = (rect1[0] + rect1[2])/2.0;
  float midy1 = (rect1[1] + rect1[3])/2.0;
  float midx2 = (rect2[0] + rect2[2])/2.0;
  float midy2 = (rect2[1] + rect2[3])/2.0; 
  
  float diax = abs (midx1 - midx2);
  float diay = abs (midy1 - midy2);
  
  float rect1x = abs(rect1[0] - rect1[2])/2.0;
  float rect1y = abs(rect1[1] - rect1[3])/2.0;
  float rect2x = abs(rect2[0] - rect2[2])/2.0;
  float rect2y = abs(rect2[1] - rect2[3])/2.0;
  
  if (diax >= (rect1x+rect2x)){
    printf("False");
    return 0;
  }
  
  if (diay >= (rect1y+rect2y)){
    printf("False");
    return 0;
  }
  
  printf("True");
  
  return 0;
}
