#include<iostream>
using namespace std;

int main(){
int arr[12];
int mar;
cout << "Enter the 12 months income: ";
for(int i=0; i<12; i++){
  cin >> arr[i];
}
float temp=0;
for(int i=0; i<12; i++){
  temp=temp+arr[i];
}

cout << "\nincome: " << temp;
cout << "\nEnter the margin: ";
cin >> mar;

float avg=temp/12;
cout << "\naverage: " << avg;
float profit = avg - mar;

profit = profit / mar ;

if(profit > 0){
cout << "\nProfit: " << profit*100;
}
else{
float loss = profit*100;
loss = 100 - loss;
cout << "\nLoss: " << loss;
}
}
