#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,7,1,0,10};
    int n = end(arr) - begin(arr);
    int target = 11, flag = 0;
    for(int z=0;z<n;z++){
        if(arr[z] == target){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"element found!"<<endl;
    }
    else{
        cout<<"element not found!"<<endl;
    }
    return 0;
}