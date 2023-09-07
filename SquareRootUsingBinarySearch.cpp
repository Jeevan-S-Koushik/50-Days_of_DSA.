class Solution {
public:
    int mySqrt(int x) {
        int target = x;
        int s = 0;
        int e = x;
        int ans = 0;
        long int mid = s + (e -s) % 2;
        while(s<=e){
            if(mid*mid == target){
                return mid;
            }
            else if(mid*mid > target){
                e = mid - 1;
            }
            else{
                ans = mid;
                s = mid + 1;
            }
            mid = s + (e -s) % 2;
        }
        return ans;
    }
};