// ZOHO CODE 5

#include <iostream>

using namespace std;

int main(){
    string num;
    cin >> num;

    char max = '1';

    for (int i=0; i<num.size(); i++){
        if (max < num[i]){
            max = num[i];
        }
    }

    for (int i='0'; i<max; i++){
        int ans = 0;
        for (char c: num){
            ans *= 10;
            if (i < c){
                ans += 1;
            }
        }
        cout << ans;
        if (i<(max-1)) {
            cout << " + ";
        }
    }

    return 0;
}