#include <iostream>
using namespace std;
bool valid(vector<int> arr,int n,int m,int mid){
  int student=1;
  int pg=0;
  for(int i=0;i<n;i++){
    if(arr[i]>mid){
      return false;

    }
    if((pg+arr[i])<=mid){
      pg+=arr[i];
    }
    else{
      student++;
      pg=arr[i];
    }

  }
return student<=m;
}
int main(){
  vector<int> array={2,1,3,4};
  int m=2;
  int n=array.size();
  if(m>n){
    cout<<"notpossible"<<endl;
  }
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=array[i];
  }
  int st=0;
  int end=sum;
  int ans=INT_MAX;
  while(st<=end){
    int mid=st+(end-st)/2;
    if(valid(array,n,m,mid)){
      end=mid;
    }
    else{
      st=mid+1;
    }
    ans=min(ans,mid);

  }
  cout<<ans;





}
