#include<iostream>
#include<algorithm>
using namespace std;
int main(){
     int arr[] = {2,16,-8,-1,0};   
    int n = end(arr) - begin(arr);


    //naive approach--> SORTING
    // sort(arr,arr+n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // } 

    //two pointer approach
    int l=0,h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     } 
    return 0;
}