#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> vec(n);
    vector<int> res(n, -1); // Initialize res with -1s

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> stack;
    
    for (int i = 0; i < 2 * n; i++) {
        while (!stack.empty() && (vec[i % n] > vec[stack.back()])) {
            res[stack.back()] = vec[i % n];
            stack.pop_back();
        }
        stack.push_back(i % n);
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << ' ';
    }

    return 0;
}

