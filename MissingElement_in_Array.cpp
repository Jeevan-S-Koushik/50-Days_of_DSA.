#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int arr[] = {1,2,3,3,5};
   int n = end(arr) - begin(arr)-1;
   int ends = n;
   for(int i=0;i<n;i++){
        if(arr[ends] - arr[0] == arr[ends-1]){
            continue;
        }
        else{
            cout<<arr[ends] - arr[0]<<endl;
            break;
        }
   }
   return 0;
}