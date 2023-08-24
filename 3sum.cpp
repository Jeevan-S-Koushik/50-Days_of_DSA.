#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int nums[]= {-1,0,1,2,-1,-4};
    int n = end(nums) - begin(nums)-1;
    sort(nums,nums+n);
    int start=0;
    int end=n;
    for(int i=0;i<n;i++){
        if(nums[i]+nums[end] == -3){
            cout<<nums[i]<<" "<<nums[end];
        }
        else{
            end--;
        }
    }
    return 0;
}