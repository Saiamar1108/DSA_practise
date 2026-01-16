#include <iostream>
using namespace std;

int main() {
  int a;
  cin>>a;
  int powerr;
  powerr=1;
  int binary;
  binary=0;
  while(a>0){
    int rem;
    rem=a%2;
    binary+=rem*powerr;
    a=a/2;
    powerr*=10;
    powere*=10;
    
    
  }
  cout<<binary;
}