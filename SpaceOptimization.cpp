#include<iostream>
using namespace std;
int main(){
    int a=60,b=100;
    int n = abs(b - a) + 1;
    int* array = new int[n];
    for (int i = a; i <= b; i++){
        if (i % 2 == 0 || i % 5 == 0){
            array[i - a] = 1;
        }
    }
    for (int i = a; i <= b; i++){
        if (array[i - a] == 1){
            cout << i << " ";
        }
    }
    return 0;
}