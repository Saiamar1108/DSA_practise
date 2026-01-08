#include<iostream>

#include<vector>

using namespace std;
int main(){
  vector<int> v={1,2,3,4,5,6};
  int n=v.size();
  for(int st=0;st<n;st++){
    for(int end=st;end<n;end++){
      for(int i=st;i<=end;i++){
        cout<<v[i];
      }cout<<" ";
    }cout<<endl;
  }

  
}