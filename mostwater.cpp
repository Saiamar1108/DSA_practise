class Solution {
public:
    int maxArea(vector<int>& height) {
          int ans=0;
       int lp=0;
       int rp=height.size()-1;
       while(lp<rp){
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        ans=max(ans,w*h);
        if(height[rp]>height[lp]){
          lp++;
        }
        else{
          rp--;

        }

       }return ans;

    }
};