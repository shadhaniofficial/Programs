#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<char> str;
    int num;
    char c = 'A' - 1;

    cin >> num;

    while (num > 0) {
        int remainder = num % 26;
        if (remainder == 0) {
            str.push_back('Z');
            num = num / 26 - 1;
            continue;
        } 
        str.push_back(c + remainder);
        num /= 26;
    }

    for (int i = str.size() - 1; i >= 0; i--) {
        cout << str[i];
    }
    return 0;
}

