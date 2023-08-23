#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int arr[] = {11, 15, 26, 38, 9, 10};
   int k = 45;
   int n = end(arr) - begin(arr);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
   return 0;
}