// ZOHO CODE 4

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                swap(array[i], array[j]);
            }
        }
    }

    int value_stack[n] = {0};
    int count_stack[n] = {0};

    int size = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || array[i] != array[i-1]) {
            value_stack[size] = array[i];
            count_stack[size] = 1;
            size++;
        } else {
            count_stack[size - 1]++;
        }
    }

    for (int i=0; i<size-1; i++){
        for (int j=i+1; j<size; j++){
            if (count_stack[i] < count_stack[j]){
                swap(count_stack[i], count_stack[j]);
                swap(value_stack[i], value_stack[j]);
            }
        }
    }

    for (int i=0; i<3; i++){
        cout << value_stack[i] << endl;
    }

    return 0;
}
