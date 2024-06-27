#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
    for(auto i : v){
        cout << i << ' ';
    }   cout << endl;
}

vector<int> get_primes(int count){
    vector<int> primes;
    if (count >= 1) primes.push_back(2);
    else{
        cout << "Count must be >= 1" << endl;
        return primes;
    }
    int size = primes.size();
    int num = 3; // start checking for prime from 3

    while (size < count){
        //cout << "Checking " << num << endl;
        bool is_prime = true;
        for(auto i : primes){
            if(num % i == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            primes.push_back(num);
            size++;
        }
        num += 2; // increment by 2 to check only odd numbers
    }

    return primes;
}

int main(){
    int prime_count = 0;
    cout << "Enter the number of Prime numbers you want to find: ";
    cin >> prime_count;

    if (prime_count <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    vector<int> primes = get_primes(prime_count);
    print_vector(primes);

    return 0;
}
