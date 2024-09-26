//mcq//

#include <stdio.h>
/*
void main_1(){  
  int a = 2;
  switch(a){
    case 1: printf("a");
    case 2.0: printf("b");
    case 3: printf("c");
  }
}

output:-
compilation error
*/

/*
void main_2(){  //output :- 
  int a = 10, b = 20;
  int *p1 = &a, *p2 = &b;
  
  ++a;
  --b;
  ++*p1;
  --*p2;
  printf("%d %d\n",a,b);
  printf("%d %d\n",*p1, *p2);
}

output:-
12 18
12 18
*/

/*
void fun(){
  here:
  printf("hello fun");
}
void main_3(){
  printf("a");
  goto here;
  printf("b");
}

output:-
compilation error
*/

/*
void main_4(){
  static int s = 5;
  printf("%d", s);
  if (--s)
  main_4();
  printf("%d", s);
}

output:-
5432100000
*/

/*
void main_5(){
  int a;
  goto inside;
  for (a=1; a<=5; a = a+1){
    inside:
    printf("%d",a);
  } 
}
output:-
012345
*/

/*
void main_6(){
  int a;
  a = 5;
  a = a++;
  printf("%d",a);
}
output:- 
5
*/

/**
void main_7(){
  int a=10, b=20;
  int *p1=&a, *p2=&b;
  *p1=*p2;
  p1=p2;
  *p2=40;
  printf("%d %d",a,b);
  printf("%d %d",*p1, *p2);
}
output:-
20 40
40 40
*/

/*
void main_8(){
  int a=10;
  size of(++a);
  printf("%d",a);
}
output:-
10
*/

/*
void main_9(){
  int a = 10;
  int b,c;
  c = a&&(b=30);
  printf("%d",c);
}
output:-
1
*/

/*
void main_10(){
  printf("%d", 8%-10);
}

output:-
8
*/

/*
void main_11(){
  float t;
  t = 5/2;
  printf("%f", t);
}
output:-
2.0
*/

/*
void main_12(){
  float t;
  t = 3.75;
  ++t;
  printf("%f",t);
}
output:-
4.75
*/

/*
void main_13(){
  int a=10, b=20;
  int *p1=&a, *p2=&b;
  *p1=30;
  *p1=*p2;
  p1=p2;
  *p2=40;
  printf("%d %d",a,b);
  printf("%d %d",*p1, *p2);
}
output:-
20 40 
40 40
*/

/*
void main_14(){
  int a[] = {4, 14, 24};
  int b[] = {6, 16, 26};
  a = b;
  printf("%d %d",a[2] ,b[2]);
}
output:-
compilation error
*/

/*
void main_15(){
  signed s=-2;
  unsigned u=3;
  if (s>=u){
    printf("hello");
  }
  else{
    printf("hai");
  }
}
output:-
hello
*/

/*
void main_16(){
  int a, b, c;
  a = 10;
  b = 20;
  c = a && b=30;
  printf("%d %d %d", a, b, c);
}
output:-
compilation error
*/

/*
void main_17(){
  int a[] = {10, 20, 30, 40};
  printf("%d", 2[a]);
}
output:-
30
*/

/*
int test(){
  return;
}

void main_18(){
  int a;
  a = test();
  printf("%d", a);
}

output:-
0
*/

/*
void main_19(){
  float f;
  f = 0.6;
  if (f == 0.6){
    printf("hello");
  }
  else{
    printf("hai");
  }
}
output:-
hai
*/

/*
void main_20(){
  int a;
  a == ++100;
  printf("%d",a);
}
output:-
compilation error
*/

/*
void main_21(){
  int a = 3;
  pow(a, 2);
  printf("%d", a);
}
output:-
garbage  value
*/

/*
void main_22(){
  int a[] = {10, 20, 30};
  ++a;
  ++*a;
  printf("%d", *a);
}
output:-
compilation error
*/

/*
void main_23(){
  printf("a");
  start:
  printf("b");
}
output:-
ab
*/

/*
void main_24(){
 a = 5;
 printf("%d", a);
}
output:-
compilation error
*/

/*
void main_25(){
  int a[] = {4, 14, 24, 34};
  int *p1;
  p1 = a+1;
  ++*p1;
  ++p1;
  --*p1;
  printf("%d %d %d", p1[-1], p1[0], p1[1]);
}
output:-
15 23 34
*/

/*
void main_26(){
  if (sizeof(int) > -1){
    printf("hello");
  }
  else{
    printf("hai");
  }
}
output:-
hai
*/

/*
int test(){
  return 3.75;
}

void main_27(){
  float f;
  f = test();
  printf("%f", f);
}
*/

/*
void main_28(){
  int a = 10;
  if (a == 5){
    printf("hello%d", a);
  }
  else{
    printf("hai%d", a);
  }
}
output:-
hai10
*/

/*
void main_29(){
  char ch = 'A';
  printf("%d", sizeof(ch));
}
output:-
1
*/

/*
void main_30(){
  int a[] = {4, 14, 24, 34};
  int* p1;
  p1 = &a[0];
  ++p1;
  ++*p1;
  printf("%d", *p1);
}
output:-
15
*/


int main(){
  main_30();
  return 0;
}
