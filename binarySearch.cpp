#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,8,10};
    int target = 3;
    int flag = 0;
    int i = 0;
    int n = end(arr) - begin(arr);
    int left = 0;
    int right = n-1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            flag = 1; 
            break;
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    if(flag == 1){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}