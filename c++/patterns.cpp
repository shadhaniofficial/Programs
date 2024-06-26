#include <iostream>
using namespace std;

void pattern1(int n){

/*
*
**
***
****
*****
*/

  for(int i=0; i<=n; i++){
    for(int j=0; j<i; j++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern2(int n){

/*
*****
****
***
**
*

*/

  for(int j=n; j>0; j--){
    for(int i=0; i<j; i++){
      cout << "*";
    }
    cout << endl;
  }
}

void pattern3(int n){

/*
1
22
333
4444
55555
666666
*/

  for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout << i;
    }
    cout << endl;
  }
}

void pattern4(int n){

/*
1
12
123
1234
12345
*/

  for(int i=1; i<=n; i++){
    for(int j=1; j<i; j++){
      cout << j;
    }
    cout << endl;
  }
}

void pattern5(int n){

/*
123456
12345
1234
123
12
1
*/

  for(int i=n; i>0; i--){
    for(int j=1; j<=i; j++){
      cout << j;
    }
    cout << endl;
  }
}

void pattern6(int n){
    
/*
     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *
*/    

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            cout << "*";
        }
        
        cout << endl;
    }
    for(int i=4; i>=n-n; i--){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            cout << "*";
        }
        
        cout << endl;
    }
  cout << endl;
}

void pattern7(int n){

/*
*********
 *******
  *****
   ***
    *
*/
    for(int i=4; i>=n-n; i--){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            cout << "*";
        }
        
        cout << endl;
    }
  cout << endl;
}

void pattern8(int n){

/*
    *
   ***
  *****
 *******
*********
*/

  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << " ";
    }
    for(int k=0; k<2*i+1; k++){
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;
}

void pattern9(int n){
/*

*****
 ***
  *
 ***
*****

*/
for(int i=0; i<n/2+1; i++){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0;k<n-i*2; k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n/2-1; i>=0; i--){
        for(int j=0; j<i; j++){
            cout << " ";
        }
        for(int k=0;k<n-i*2; k++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10(int n){
/* 

*
**
***
****
*****
****
***
**
*

*/

for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
        cout << "*";
    }
    cout << endl;
    }
    for(int i=n-1; i>n-n; i--){
    for(int j=0; j<i; j++){
        cout << "*";
    }
    cout << endl;
    }


}

void pattern11(int n){

/*
1
01
101
0101
10101

*/

int start = 1;
  for(int i=0; i<n; i++){
    if(i % 2==0){
      start = 1;
    } 
    else{
      start = 0;
    }
    for(int j=0; j<=i; j++){
      cout << start;
      start = 1 - start;
    }
    cout << endl;
  }
}

void pattern12(int n){

/*
1        1
12      21
123    321
1234  4321
1234554321
*/

for(int i=0; i<n; i++){
  //number
  int start = 1;
  for(int j=0; j<=i; j++){
    cout << start;
    start = start + 1;
  }
  
  start = start -1;
  //space
  int max = n*2-start-start -1 ;
  for(int l=0; l<=max; l++){
    cout << " "; 
  }
  
  //number
  
  for(int k=start; k>0; k--){
    cout << start;
    start = start - 1;
  }
  cout << endl;
}
}

void pattern13(int n){
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/

  int num = 1;
  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      cout << num << " ";
      num = num + 1;
    }
    cout << endl;
    } 
}

void pattern14(int n){

/*
A
AB
ABC
ABCD
ABCDE
*/

for(int i=0; i<n; i++){
  for(char c='A'; c<='A'+i; c++){
    cout << c;
  }
  cout << endl;
}
}

void pattern15(int n){

/*
ABCDEF
ABCDE
ABCD
ABC
AB
A
*/

for(int i=n; i>=0; i--){
  for(char c='A'; c<='A'+i; c++){
    cout << c;
  }
  cout << endl;
}
}

void pattern16(int n){

/*
A
BB
CCC
DDDD
EEEEE

*/

for(int i=0; i<n; i++){
  char c='A' + i;
  for(int j=0; j<=i; j++){
    cout << c;
  }
  cout << endl;
}
}

void pattern17(int n){
/* 
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
  char c='A';
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){
      cout << " ";
    }
    for(char ch='A'; ch<='A'+i; ch++ ){
      cout << ch;
      c = ch;
    }
    for(int k=0; k<i; k++){
      c--;
      cout << c; 
    }
    cout << endl;
  }
}

void pattern18(int n){
/*
E 
D E 
C D E 
B C D E 
A B C D E 

*/
  for(int i=0; i<n; i++){
    char c = 'E'-i;
    for(int j=0; j<=i; j++){
      cout << c << " ";
      c++;
    }
    cout << endl;
  }
}

void pattern19(int n){

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

  for(int i=n; i>0; i--){
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    cout << endl;
  }
   for(int i=1; i<=n; i++){
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    cout << endl;
  }
}

void pattern20(int n){

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

  for(int i=1; i<n; i++){
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    cout << endl;
  }
  for(int i=n; i>0; i--){
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    for(int j=i; j<n; j++){
      cout << "  ";
    }
    for(int j=0; j<i; j++){
      cout  << "*";
    }
    cout << endl;
  }
   
}

void pattern21(int n){

/*
*****
*   *
*   *
*   *
*****

*/

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==0 or i==n-1 or j==0 or j==n-1){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pattern22(int n){

/*
4444444
4333334
4333334
4333334
4333334
4333334
4444444
*/

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==0 or i==n-1 or j==0 or j==n-1){
        cout << "4";
      }
      else{
        cout << "3";
      }
    }
    cout << endl;
  }
}

void pattern23(int n){
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==0 or i==n-1 or j==0 or j==n-1){
        cout << "4";
      }
      else if(i==1 or i==n-2 or j==1 or j==n-2){
        cout << "3";
      }
      else if(i==2 or i==n-3 or j==2 or j==n-3){
        cout << "2";
      }
      else{
        cout << "1";
      }
    }
    cout << endl;
  }
}

void pattern24(int n){

/*
ABCDEF
ABCDE
ABCD
ABC
AB
A
AB
ABC
ABCD
ABCDE
ABCDEF

*/

  for(int j=n; j>0; j--){
    char c = 'A';
    for(int i=0; i<j; i++){
      cout << c;
      c++;
    }
    cout << endl;
  }
  for(int j=1; j<+n; j++){
    char c = 'A';
    for(int i=0; i<=j; i++){
      cout << c;
      c++;
    }
    cout << endl;
  }
}

void pattern25(int n){
/*
1 3 6 10 15
2 5 9 14 
4 8 13
7 12
11
*/

  int num=1, num1=1, y = 1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      cout << num << ' ';
      num += i+j;
    }
    num = num1++ + y;
    y = num;
    cout <<  endl;
  }
}

void pattern26(int m){

/*
12340
23401
34012
40123
01234
*/

  int n=1;
  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      cout << n;
      n++;
      if(n>=m){
        n = 0;
      }
    }
    n++;
    if(n>=m){
      n=0;
    }
    cout << endl;
  }
}

void pattern27(int n){

/*
input :- 5
 0 0 0 0 1
 2 1 1 1 1
 2 2 2 2 3
 4 3 3 3 3
 4 4 4 4 5
*/

  int m = 0;
  for(int i=0; i<n; i++){ 
    if (i%2){
      cout << i+1 << " ";
      for (int j=1; j<n; j++) cout << i << " ";
    }
    else{
      for (int j=1; j<n; j++) cout << i << " ";
      cout << i+1 << " ";
    }
    cout << endl;
  }
}

/*
input = 3

1 2 3 2 1
2 2 3 2 2
3 3 3 3 3
2 2 3 2 2 
1 2 3 2 1
*/


int _max(int a, int b){
  return a<b?b:a;
}

void pattern28(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout << _max(i,j) << " ";
    }
    for(int j=n-1; j>0; j--){
      cout << _max(i,j) << " ";
    }
    cout << endl;
  }
  for(int i=n-1; i>0; i--){
    for(int j=1; j<=n; j++){
      cout << _max(i,j) << " ";
    }
    for(int j=n-1; j>0; j--){
      cout << _max(i,j) << " ";
    }
    cout << endl;
  }
}

/*
6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6 

*/

int max(int a, int b){
  return a<b?b:a;
}

void pattern29(int n){
  for(int i=n; i>0; i--){
    for(int j=n; j>0; j--){
      cout << max(j,i);
      cout << " ";
    }
    for(int j=2; j<=n; j++){
      cout << max(j,i);
      cout << " ";
    }
    cout << endl;
  }
  for(int i=2; i<=n; i++){
    for(int j=n; j>0; j--){
      cout << max(j,i);
      cout << " ";
    }
    for(int j=2; j<=n; j++){
      cout << max(j,i);
      cout << " ";
    }
    cout << endl;
  }
}

/*
Enter the Number: 3
1 1 1 1 1 
1 2 2 2 1 
1 2 3 2 1 
1 2 2 2 1 
1 1 1 1 1 
*/

int min(int a, int b){
  return a<b?a:b;
}

void pattern30(int n){
  for(int i=1; i<n; i++){
    for(int j=1; j<n; j++){
      cout << min(i,j) << " ";
    }
    for(int j=n; j>0; j--){
      cout << min(i,j) << " ";
    }
    cout << endl;
  }
  for(int i=n; i>0; i--){
    for(int j=1; j<n; j++){
      cout << min(i,j) << " ";
    }
    for(int j=n; j>0; j--){
      cout << min(i,j) << " ";
    }
    cout << endl;
  }
}

void pattern31(int n){

/*
Enter the Number: 4
*********
 *     *  
  *   *    
   * *      
    * 
*/

  int no = (n*2)+1;
  int n1 = n;
  for(int i=0; i<=n; i++){
    for(int k=0; k<i; k++){
      cout << " ";
    }
    for(int j=0; j<no; j++){
      if(i==0 or j==0 or j==no-i-1-i){
        cout << "*";
        if(j==n1 and i==n){
          cout << "*";
        }
      }
      else{
        cout << " ";
      }
    }
    cout << endl;
  }
}

void pattern32(int n){

/*
6*6*6*6
5*5*5
4*4
3
3
4*4
5*5*5
6*6*6*6

*/

  int no = n*2;
  n = n;
  for(int i=0; i<=n; i++){
    for(int j=n; j>=i; j--){
      cout << no ;
      if(j!=i){
        cout << "*";
      }
    }
    no--;
  cout << endl;
  }
  for(int i=n; i>=0; i--){
        no++;
    for(int j=n; j>=i; j--){
      cout << no ;
      if(j!=i){
        cout << "*";
      }
    }
  cout << endl;
  }
}


int main(){
    int n;
    cout << "Enter the input: ";
    cin >> n;  

    pattern1(n);
    cout << endl;
    pattern2(n);
    cout << endl;
    pattern3(n);
    cout << endl;
    pattern4(n);
    cout << endl;
    pattern5(n);
    cout << endl;
    pattern6(n);
    cout << endl;
    pattern7(n);
    cout << endl;
    pattern8(n);
    cout << endl;
    pattern9(n);
    cout << endl;
    pattern10(n);
    cout << endl;
    pattern11(n);
    cout << endl;
    pattern12(n);
    cout << endl;
    pattern13(n);
    cout << endl;
    pattern14(n);
    cout << endl;
    pattern15(n);
    cout << endl;
    pattern16(n);
    cout << endl;
    pattern17(n);
    cout << endl;
    pattern18(n);
    cout << endl;
    pattern19(n);
    cout << endl;
    pattern20(n);
    cout << endl;
    pattern21(n);
    cout << endl;
    pattern22(n);
    cout << endl;
    pattern23(n);
    cout << endl;
    pattern24(n);
    cout << endl;
    pattern25(n);
    cout << endl;
    pattern26(n);
    cout << endl;
    pattern27(n);
    cout << endl;
    pattern28(n);
    cout << endl;
    pattern29(n);
    cout << endl;
    pattern30(n);
    cout << endl;
    pattern31(n);
    cout << endl;-
    pattern32(n);
    return 0;
}

