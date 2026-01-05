#include <iostream>
using namespace std;
void square(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<j;
    }cout<<endl;
  }

}
void continuesaquarepattern(int n){
  int a=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cout<<a;
      a++;
    }cout<<endl;
  }



}
void triangle(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<"*";
      
    }cout<<endl;
  }
  
}
void triangle2(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i;
      
    }cout<<endl;
  }
}
void triangle3(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j;
      
    }cout<<endl;
  }
}
void reversetriangle(int n){
  
  for(int i=1;i<=n;i++){
    for(int j=i;j>0;j--){
      cout<<j;
      
    }cout<<endl;
  }
}
void floydstriangle(int n){
  int a=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<a;
      a++;
      
    }cout<<endl;
  
}}

int main() {
  int num;
  cin>>num;
  square(num);
  cout<<endl;
  continuesaquarepattern(num);
  triangle(num);
  triangle2(num);
  triangle3(num);
  reversetriangle(num);
  floydstriangle(num);

  return 0;
}