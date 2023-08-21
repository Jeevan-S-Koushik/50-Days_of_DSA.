class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1;
        int indx = 0;
        for(int i = n; i > 0; i--){
            if(nums[i] > nums[i-1]){
                indx = i;
                break;
            }
        }
        if(indx == 0){
            sort(nums.begin(),nums.end());
        }
        else{
            int min = INT_MAX;
            int toswap = nums[indx - 1];
            for(int i = indx; i <= n;i++){
                if(nums[i] - toswap > 0 && nums[i] - toswap < min){
                    int temp = nums[i];
                    nums[i] = nums[indx-1];
                    nums[indx-1] = temp;
                }
            }
            sort(nums.begin()+indx,nums.end());
        }
    }
};