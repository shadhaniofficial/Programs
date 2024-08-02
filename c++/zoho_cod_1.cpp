// ZOHO CODE 1

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 1;
    int y = 2;

    for (int j=0; j<n; j++){
        int z = x;
        for (int i=j+1; i<=n; i++){
            cout << z << ' ';
            z += y++; 
        }
        y = j+3;
        x += j+1;
        cout << endl;
    }    
    return 0;
}
