class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int maxleft = 0;
        int maxright = 0;
        int ans = 0;
        while(low<=high){
            if(height[low]<height[high]){
                if(height[low]>maxleft){
                    maxleft=height[low];
                }
                else{
                    ans = ans + (maxleft-height[low]);
                }
                low++;
            }
            else{
                if(height[high]>maxright){
                    maxright=height[high];
                }
                else{
                    ans = ans + (maxright-height[high]);
                }
                high--;
            }
        }
        return ans;
    }
};