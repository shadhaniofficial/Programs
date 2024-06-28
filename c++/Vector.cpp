#include <iostream> 
#include <vector> 
#include <algorithm> // For std::swap
using namespace std; 

int main() 
{ 
    // Illustration of iterators in vector
    vector<int> g1; 
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 

    cout << "Output of begin and end: "; 
    for (const auto& elem : g1) 
        cout << elem << " "; 

    cout << "\nOutput of cbegin and cend: "; 
    for (auto it = g1.cbegin(); it != g1.cend(); ++it) 
        cout << *it << " "; 

    cout << "\nOutput of rbegin and rend: "; 
    for (auto it = g1.rbegin(); it != g1.rend(); ++it) 
        cout << *it << " "; 

    cout << "\nOutput of crbegin and crend : "; 
    for (auto it = g1.crbegin(); it != g1.crend(); ++it) 
        cout << *it << " "; 

    // Illustration of capacity function in vector
    vector<int> g2; 
    for (int i = 1; i <= 5; i++) 
        g2.push_back(i); 

    cout << "\n\nSize : " << g2.size(); 
    cout << "\nCapacity : " << g2.capacity(); 
    cout << "\nMax_Size : " << g2.max_size(); 

    g2.resize(4); 
    cout << "\nSize : " << g2.size(); 
    cout << (g2.empty() ? "\nVector is empty" : "\nVector is not empty"); 
    g2.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (const auto& elem : g2) 
        cout << elem << " "; 

    // Illustration of element access in vector
    vector<int> g3; 
    for (int i = 1; i <= 10; i++) 
        g3.push_back(i * 10); 

    cout << "\n\nReference operator [g] : g3[2] = " << g3[2]; 
    cout << "\nat : g3.at(4) = " << g3.at(4); 
    cout << "\nfront() : g3.front() = " << g3.front(); 
    cout << "\nback() : g3.back() = " << g3.back(); 
    int* pos = g3.data(); 
    cout << "\nThe first element is " << *pos; 

    // Illustration of modifiers in vector
    vector<int> g4; 
    g4.assign(5, 10); 
    cout << "\n\nThe vector elements are: "; 
    for (const auto& elem : g4) 
        cout << elem << " "; 

    g4.push_back(15); 
    cout << "\nThe last element is: " << g4.back(); 

    g4.pop_back(); 
    cout << "\nThe vector elements are: "; 
    for (const auto& elem : g4) 
        cout << elem << " "; 

    g4.insert(g4.begin(), 5); 
    cout << "\nThe first element is: " << g4.front(); 

    g4.erase(g4.begin()); 
    cout << "\nThe first element is: " << g4.front(); 

    g4.emplace(g4.begin(), 5); 
    cout << "\nThe first element is: " << g4.front(); 

    g4.emplace_back(20); 
    cout << "\nThe last element is: " << g4.back(); 

    g4.clear(); 
    cout << "\nVector size after clear(): " << g4.size(); 

    vector<int> v1 = {1, 2}, v2 = {3, 4}; 
    cout << "\n\nVector 1: "; 
    for (const auto& elem : v1) 
        cout << elem << " "; 

    cout << "\nVector 2: "; 
    for (const auto& elem : v2) 
        cout << elem << " "; 

    swap(v1, v2); 

    cout << "\nAfter Swap \nVector 1: "; 
    for (const auto& elem : v1) 
        cout << elem << " "; 

    cout << "\nVector 2: "; 
    for (const auto& elem : v2) 
        cout << elem << " "; 

    return 0; 
} 

