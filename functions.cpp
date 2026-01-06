#include <iostream>
using namespace std;
int sumofdigits(int n){
  int sum=0;
  while(n!=0){
    sum+=n%10;
    n=n/10;
  }return sum;

}
int ncr(int a,int b){
  int afact=1;
    for(int i=1;i<=a;i++){
      afact*=i;

    }
    int bfact=1;
    for(int i=1;i<=b;i++){
      bfact*=i;

    }
    int aminbfact=1;
    for(int i=1;i<=a-b;i++){
      aminbfact*=i;

    }
    int mult=bfact*aminbfact;
    return afact/mult;

  }



int main() {
  cout << "Hello, World!" <<endl;
  cout<<sumofdigits(5645);
  return 0;
}