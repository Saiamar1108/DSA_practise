# include <iostream>
#include <cmath>  
using namespace std;
void digits(int num){
  while(num>0){
    int n=num%10;
    cout<<n<<endl;
    num/=10;
  }
}
bool armstrong(int num){
  int c=0;
  int temp=num;
  int temp1=num;
  while(num>0){
    c++;
    num/=10;

  }
  int sum=0;
  while(temp>0){
    int n=temp%10;
    sum+=pow(n,c);
    temp/=10;


  }

return temp1==sum;
}
int main(){
  int num;
  cin>>num;
  digits(num);
  armstrong(num);

}
