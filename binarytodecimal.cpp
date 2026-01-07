#include <iostream>
using namespace std;

int main() {
  int a;
  cin>>a;
  int powerr;
  powerr=1;
  int deci=0;
  while(a>0){
    int rem =a%10;
    deci+=rem*powerr;
    a=a/10;
    powerr*=2;
    
  }
  cout<<deci;

}
