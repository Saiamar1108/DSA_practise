#include<iostream>

#include<vector>

using namespace std;
int main(){
  vector<int> v;
  
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int element;
    cin>>element;
    v.push_back(element);
  }
  int maxx=INT_MIN;
  for(int st=0;st<n;st++){
    int cs=0;
    for(int end=st;end<n;end++){
      cs+=v[end];
      maxx=max(cs,maxx);

    }
  }
  cout<<maxx;

  
}