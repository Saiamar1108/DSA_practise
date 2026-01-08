#include <iostream>
using namespace std;
void reverse(int arr[], int s){
  int start=0;int end=s-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }

  
}

int main() {
  int arr[]={0,1,2,3,4,5,6,7,8};
  
  int s=9;
  reverse(arr,s);
  for(auto i:arr){
    cout<<i<<" ";
  }
  
}
