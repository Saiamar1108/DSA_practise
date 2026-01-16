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
int sumofalloddnumber(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
    if(i%2!=0){
      sum+=i;
    }
  return sum;

  }
}
void prime(int n){
  bool isprime=true;
  for(int i=2;i<=n-1;i++){
    if(n%i==0){
      isprime=false;
      break;
    }
  }
  if(isprime){
    cout<<"prime number"<<endl;
  }else{
    cout<<"not a prime number"<<endl;
  }
}
int sumofalldiv3(int n){
  int sum=0;
  for(int i=0;i<=n;i++){
    if(i%3==0){
      sum+=i;
    }
  }
  return sum;
}
int fact(int n){
  int f=1;
  for(int i=1;i<=n;i++){
    f*=i;
  }
  return f;
}

int main() {
  int num;
  cin >> num;
  string result=(num%2==0)?"even":"odd";
  cout << result << endl;
  cout<<sumofnnumbers(num)<<"/n"; 
  cout<<sumofalloddnumber(num)<<endl; 
  prime(num);
  cout<<sumofalldiv3(num)<<endl;
  cout<<fact(num)<<endl;
  

  return 0;

}


