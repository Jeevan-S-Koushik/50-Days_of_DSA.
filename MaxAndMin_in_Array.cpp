//Maximum and minimum of an array
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // solution 1
    
    int max, min, arr[] = {1000, 11, 445, 1, 330, 3000, 8000};
    int n = end(arr) - begin(arr);
    
    // Minimun
    
    min = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] <= min)
        {
            min = arr[j];
        }
    }

    // Maximum
    
    max = arr[0];
    for (int j = 0; j < n; j++)
    {
        if (arr[j] >= max)
        {
            max = arr[j];
        }
    }
    cout << "min :" << min << endl;
    cout << "max :" << max << endl;
    cout << "-------------------------" << endl;

    // solution 2
    // array values are : 1000, 11, 445, 1, 330, 3000, 8000
    // sort and print the first and last element in an array

    sort(arr, arr + n);
    cout << "min :" << arr[0] << endl;
    cout << "max :" << arr[n - 1] << endl;
    return 0;
}