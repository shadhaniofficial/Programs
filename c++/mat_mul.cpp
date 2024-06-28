#include <iostream>

using namespace std;

int main(){
  int r1,c1,r2,c2;
  cout << "Enter the row 1: ";
  cin >> r1;
  
  cout << "Enter the column 1: ";
  cin >> c1;
  
  cout << "Enter the row 2: ";
  cin >> r2;
  
  cout << "Enter the column 2: ";
  cin >> c2;
  
  int mat1[r1][c1];
  int mat2[r2][c2];
  int mat3[r1][c2]={};
  
  for (int i=0; i<r1; i++){
    for (int j=0; j<c1; j++){
      cin >> mat1[i][j];
    }
  }
  
  
  for (int i=0; i<r2; i++){
    for (int j=0; j<c2; j++){
      cin >> mat2[i][j];
    }
  }
  
  for (int i=0; i<r1; i++){
    for (int j=0; j<c2; j++){
      for (int k=0; k<r2; k++){
        mat3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
  }
  
  for (int i=0; i<r1; i++){
    for (int j=0; j<c2; j++){
      cout << mat3[i][j] << " ";
    }
    cout << endl;
  }
  
}
