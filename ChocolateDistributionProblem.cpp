#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
// #include<limits.h>
using namespace std;
int main()
{
    int m;
    int arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    int n = end(arr) - begin(arr);
    cin>>m;
    if(n < m){
        return -1; //not enough chocolates
    }

    sort(arr, arr + n);

   int mini = INT_MAX;
    for (int i = 0; i + m - 1 < n; ++i)
    {
       int diff = arr[i + m - 1] - arr[i];
        mini = min(mini,diff);
    }
    cout << mini << endl;
    return 0;
}