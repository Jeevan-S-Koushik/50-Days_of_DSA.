//DIVIDE 2 NUMBER USING BINARY SEARCH
#include<iostream>
using namespace std;
int main(){
    int dividend = -36;
    int divisor = 6;
    int ans = 0;
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e-s)/2;

    while(s<=e){
        if(abs(mid * divisor) == abs(dividend)){
            ans = mid;
        }
        if(abs(mid * divisor) > abs(dividend)){
            e = mid - 1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        cout<<ans<<endl;
    }
    else{
        cout<<-ans<<endl;
    }
    return 0;
}