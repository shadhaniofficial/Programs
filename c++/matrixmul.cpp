#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int res[3][3] = {0} ;	
	//Multiplication  `
	for (int i = 0; i < 3; i++) {
          for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
         }
       }
      cout << "Multiplication:\n";
	for(int i=0; i<3; i++){
		cout << "|";
		for(int j=0; j<3; j++){
			cout << res[i][j] << " "; 	
		}
		cout << "|\n";
	}
	return 0;
}
