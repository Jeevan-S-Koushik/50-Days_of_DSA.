#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = end(nums) - begin(nums);
    sort(nums, nums + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            cout<<"duplicate"<<endl;
            break;
        }
        else{
            cout<<"no duplicate"<<endl;
            break;
        }
    }
    return 0;
}
