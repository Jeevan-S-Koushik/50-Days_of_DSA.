//FIND THE ELEMENT IN AN NEARLY SORTED ARRAY
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,3,40,20,50,80,70};
    int n = end(arr) - begin(arr)-1;
    int ans = -1;
    int s = 0;
    int e = n;
    int target = 70;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
        }
        if(mid - 1<=0 && arr[mid - 1] == target){            //here nearly sorted array means:
                ans = mid - 1;                               //mid == target || mid+1 == target || mid-1 == target        
        }
        if(mid + 1 <= n && arr[mid + 1] == target){
                ans = mid + 1;
        }
        if(target > arr[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    cout<<"element found at the index : "<<ans<<endl;
    return 0;
}