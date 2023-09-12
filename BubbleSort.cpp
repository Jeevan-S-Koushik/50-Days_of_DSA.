#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();
    for(int round = 1; round < n; round++){
        bool sorted = false;     //HERE WE ARE USING 'sorted' VARIABLE TO REDUCE THE TIME COMPLEXITY
        for(int j = 0; j < n - round; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = true;
            }
        }
        if(sorted == false){
            break;      // (NO SWAP) MEANS (THE ARRAY IS ALREADY SORTED).
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}