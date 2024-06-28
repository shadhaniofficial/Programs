// Kadane Algorithm

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  string str;
  getline(cin, str); // Read the whole line including spaces
  
  vector<char> set;
  int l=0, r=0, ml=0;
  
  while(r < str.size()){ // Fix the loop termination condition
    
    bool found = false;

    for (int i=l; i<r; i++){ // Iterate over the current substring of str
      if (str[i] == str[r]) { // Check if the character is repeated
        found = true;
        break; // If found, break the loop
      }
    }
    
    if (!found) { // If not found, add the character to the set
      r++;
      ml = max(ml, r-l); // Update the maximum length if needed
    }
    else {
      while (str[l] != str[r]){
        l++;
      } l++;
    }
  }
  
  cout << ml;
  
  return 0;
}
    

