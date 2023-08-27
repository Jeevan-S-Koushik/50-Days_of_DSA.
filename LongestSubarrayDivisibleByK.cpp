#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {2, 7, 6, 1, 4, 5};
    int k = 3;
    vector<int> count(k, 0);
    int sum = 0;
    for (int x : arr)
    {
        sum = sum + (x % k + k) % k;
        count[sum % k]++;
    }
    int result = count[0];
    for (int c : count)
    {
        result = result + (c * (c - 1)) / 2;
    }
    cout << result;
    return 0;
}