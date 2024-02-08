#include<bits/stdc++.h>
using namespace std;
int climbstairs(int n);

int main(){
   int n = 7;
   int result = climbstairs(n);
   cout<<"no. of ways to climb stairs with "<< n << " steps is :"<<result;
return 0;
}
int climbstairs(int n){
    if(n<=2) return n;
    int x = 1,y = 2;
    for(int i=3;i<=n;++i){
        y = x+y;
        x = y-x;
    }
    return y;
}