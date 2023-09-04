#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,3,4,4,4,4,4,6,6,7,9};
    int target = 1;
    int n = end(arr) - begin(arr)-1;
    auto upper = upper_bound(arr, arr+n, target);   //using STL
    auto lower = lower_bound(arr,arr+n, target);    //using STL
    int result = upper - lower;
    cout<<"the total number of occurence is :"<<result<<endl;
    return 0;
}