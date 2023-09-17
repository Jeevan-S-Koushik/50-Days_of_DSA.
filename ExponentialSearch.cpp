#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>arr, int start, int end, int x){
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(x>arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int soln(vector<int>arr,int n,int x){
    if(arr[0] == x) return 0;
    int i = 1;
    if(i<n && arr[i]<=x){
        i = i * 2;
    }
    return bs(arr,i/2,min(i,n-1),x);
}
int main(){
    vector<int>arr {11,12,13,14,15,16,18,19,30,90};
    int n = arr.size();
    int x = 13;
    int ans = soln(arr,n,x);
    cout<<arr[ans] <<" found in index "<<ans<<endl;
    return 0;
}