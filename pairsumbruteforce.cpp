#include <iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> nums,int target){
  vector<int> ans;
  for (int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
      if(nums[i]+nums[j]==target){
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
        return ans;
      }
    }
  }return ans;
}
vector<int> pairsumtwopointer(vector<int> nums,int target){
  vector<int> ans;
  int i=0;
  int j=(nums.size()-1);
  while(i<j){
     if(nums[i]+nums[j]>target){
    j--;
  }
  else if(nums[i]+nums[j]<target){
    i++;
  }
  else{
    ans.push_back(nums[i]);
    ans.push_back(nums[j]);
    return ans;

  }

  }
 
  return ans;
}
int main(){
  vector<int> nums={2,7,11,15};
  int target=9;
  
  vector<int> ans=pairsumtwopointer(nums,target);
  vector<int> anss=pairsum(nums,target);
  cout<<ans[0]<<ans[1]<<endl;
  cout<<anss[0]<<anss[1];
  
}
