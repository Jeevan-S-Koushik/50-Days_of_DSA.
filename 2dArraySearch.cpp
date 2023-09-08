#include<iostream>
using namespace std;
bool binarysearch(int arr[][4],int col,int row,int target){
    int s = 0;
    int e = row*col;
    int mid = s+(e-s)/2;

    while(s<=e){
        int rowindex = mid / col;
        int colindex = mid % col;

        if(arr[rowindex][colindex] == target){
            return true;
        }
        if(arr[rowindex][colindex] < target){
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return false;
}

int main(){
    int arr[5][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row = 5;
    int col = 4;
    int target = 19;
    bool ans = binarysearch(arr,col,row,target);

    if(ans){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}