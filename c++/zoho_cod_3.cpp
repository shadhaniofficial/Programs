// ZOHO CODE 3

#include <iostream>

using namespace std;

bool ispalindrome(string word){
    int len = word.size();
    for (int i=0; i<len/2; i++){
        if (word[i] == word[len-1-i]){
            continue;
        }
        return false;
    }
    return true;
}

int main(){
    string word;
    cin >> word;

    int n = word.size();
    string res = "";
    string temp;

    for (int i=0; i<n-1; i++){
        if (n-i > res.size()){
            temp = "";
            for (int j=i; j<n; j++){
                temp += word[j];
                if (temp.size() < res.size()) continue;
                cout << temp << endl;
                if (ispalindrome(temp)){
                    if (res.size() < temp.size()){
                        res = temp;
                    }
                }
            }
        }
    }

    cout << res;

    return 0;
}