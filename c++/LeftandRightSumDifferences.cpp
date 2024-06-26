#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> num={10,4,8,3};
  vector<int> temp1={0};
  vector<int> temp2={0};
  vector<int> temp=num;
  temp1.insert(temp1.end(),num.begin(),num.end()-1);
  temp2.insert(temp2.begin(),num.begin()+1,num.end());

//   create temp1={0,10,4,8}
  for(int i=0; i<temp1.size(); i++){
    temp1[i]=temp1[i-1]+temp1[i];
  }
  
//   create temp2={4,8,3,0}
  int n = temp2.size();
  for(int i=n; i>=0; i--){
    temp2[i]=temp2[i]+temp2[i+1];
  }

//  to subtract temp=temp1-temp2
  cout << endl;
  for(int i=0; i<n; i++){
    temp[i]=temp1[i]-temp2[i];
    if(temp[i]<0){
      temp[i]=temp[i]*(-1);
    }
  }

//  print temp
  cout << endl;
  for(int i=0; i<num.size(); i++){
    cout << temp[i] << " ";   
  }
}
