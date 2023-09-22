#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[100] = "Babbar";
    int n = strlen(ch);
    for(int i=0;i<n;i++){
        if(ch[i] >= 'a' && ch[i] <='z'){
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
    cout<<"lower to upper "<<ch<<endl;

    for(int i=0;i<n;i++){
        ch[i] = ch[i] - 'A' + 'a';
    }
    cout<<"upper to lower "<<ch<<endl;
    return 0;
}

