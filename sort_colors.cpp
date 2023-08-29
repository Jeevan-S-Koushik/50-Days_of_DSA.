#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {2,0,2,1,1,0};   //red(0), white(1), and blue(2)
    int n = end(arr) - begin(arr);

    //count method

    // int zero = 0,one = 0,two = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i] == 0){
    //         zero++;
    //     }
    //     else if(arr[i] == 1){
    //         one++;
    //     }
    //     else{
    //         two++;
    //     }
    // }

    // int i=0;
    // while(zero--){
    //     arr[i]=0;
    //     i++;
    // }
    // while(one--){
    //     arr[i]=1;
    //     i++;
    // }
    // while(two--){
    //     arr[i]=2;
    //     i++;
    // }

    //3 pointer approach
    int l=0,m=0,h=n;
    while(m<=h){
        if(arr[m] == 0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else{
            swap(arr[l],arr[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}