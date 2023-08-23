#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = end(arr) - begin(arr);
    sort(arr,arr+n);
    cout<<arr[0];
    return 0;
}
