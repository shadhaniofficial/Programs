#include <iostream>

using namespace std;

int max_arr(int* arr, int k);
int ind_area(int* arr, int i, int n);

int main() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    int res[n];

    for (int i = 0; i < n; i++) {
        res[i] = ind_area(arr, i, n);
        //cout << res[i] << endl;
    }

    cout << max_arr(res, n);

    return 0;
}

int max_arr(int* arr, int k) {
    int m = 0;
    for (int i = 0; i < k; i++) {
        if (m < arr[i]) 
            m = arr[i];
    }
    return m;
}

int ind_area(int* arr, int i, int n) {
    int c = 1;
    int val = arr[i];

    for (int j = i - 1; j >= 0; j--) {
        if (arr[j] >= val)  c++;
        else  break;
    }

    for (int j = i + 1; j < n; j++) {
        if (arr[j] >= val)  c++;
        else  break;
    }

    //cout << arr[i] << ' ' << i << ' ' << c << endl;

    return c * val; // Return the area
}

