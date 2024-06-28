#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
  
    cin >> str1;
    cin >> str2;
  
    for (int i = 0; i < str1.size(); i++) {
        for (int j = 0; j < str2.size(); j++) {
            if (str1[i] == str2[j]) {
                for (int k = i; k < str1.size() - 1; k++) {
                    str1[k] = str1[k + 1];
                }
                str1.pop_back();
                i--;
            }
        }
    }
  
    cout << str1;

    return 0;
}

