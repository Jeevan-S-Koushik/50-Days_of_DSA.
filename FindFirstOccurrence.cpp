//FINDING FIRST OCCURRENCE OF AN ELEMENT IN AN ARRAY USING BINARY SEARCH
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,3,4,4,4,4,4,6,6,7,9};
    int target = 6;
    int mid;
    int n = end(arr) - begin(arr);
    int start = 0;
    int end = n-1;
    int ans;
    while(start<=end){
        mid = (start + end) / 2;
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;       // --> in case of finding last occurence we have to use "start = mid + 1";
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = start + 1;
        }

    }
    cout<<"first occurence is at index :"<<ans<<endl;
    auto j = lower(arr, arr+n, target);
    cout<<j - begin(arr)<<endl;
    return 0;
}