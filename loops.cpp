#include <iostream>
#include <string>
using namespace std;

int sumofnnumbers(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
    sum+=i;

  }
  return sum;
}

int main() {
  int num;
  cin >> num;
  string result=(num%2==0)?"even":"odd";
  cout << result << endl;
  cout<<sumofnnumbers(num);  

  return 0;

}


