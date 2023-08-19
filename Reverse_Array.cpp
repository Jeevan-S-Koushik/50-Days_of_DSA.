#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 3000, 8000};
    int temp = 0;
    int n = end(arr) - begin(arr);
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (start <= end)
        {   
            //swap using swap()
            swap(arr[start],arr[end]);   
            start++;
            end--;

            //swap using temp variable
            // temp = arr[start];
            // arr[start] = arr[end];
            // arr[end] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}