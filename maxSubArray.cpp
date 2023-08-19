#include <iostream>
#include <limits.h>

using namespace std;
int main()
{
    int arr[] = {5, 4, -1, 7, 8};
    int n = end(arr) - begin(arr);
    int sum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxSum)
        {
            maxSum = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}
