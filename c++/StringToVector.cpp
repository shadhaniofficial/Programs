/*
Enter the string: Anna University
Characters in the vector:
A n n a   U n i v e r s i t y 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<string> v;
    cout << "Enter the string: ";
    
    getline(cin, s);
    int n = s.size();
    for(int i = 0; i < n; i++) {
        char c = s[i];
        
        v.push_back(string(1, c));
    }

    cout << "Characters in the vector:" << endl;
    for(auto str : v) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}


