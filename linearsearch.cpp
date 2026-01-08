#include <iostream>
using namespace std;
int linearsearch(int arr[], int s, int a){
  for(int i=0;i<s;i++){
    if(arr[i]==a){
      return i;
    }
  }return -1;
}

int main() {
  int arr[]={0,1,2,3,4,5,6,7,8};
  int target=6;
  int s=9;
  cout<<linearsearch(arr,s,target);
  
}
