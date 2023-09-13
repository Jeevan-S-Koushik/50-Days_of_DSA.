#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,9,8,7,6,5,4,3,2,1};
    int n = arr.size();
    for(int round = 1; round < n; round++){
        //step 1 : fetch  
        int val = arr[round];
        //step 2 : compare
        int j = round - 1;
        for(; j>=0;j--){
            if(arr[j] > val){
                //step 3: shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        //step 4 : copy
        arr[j+1] = val;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}