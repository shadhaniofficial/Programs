#include <stdio.h>

struct Student{

  int Roll;
  char Name[50];
  char Dept[50];
  
};

int main(){

  struct Student students[10];
  
  students[0].Roll = 10;
  
  printf("%d",students[0].Roll = 10);
  
  return 0;
}

