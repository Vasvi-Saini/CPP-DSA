#include<bits/stdc++.h>
using namespace std;
int climbstairs(int n);
int main(){
  
    int n = 4;              // You need to specify a value for 'n', e.g., 5
    int result = climbstairs(n);
    cout<<"no. of ways to climb stairs : "<<endl<<result;
    return 0;
}  
    int climbstairs(int n){
        if( n<=2) return n;
        int x = 1,y = 2;
        for(int i=3;i<n;++i){
            int temp = y;    //next solution (updated y )
            y = y+x;
            x = temp;      // x poorane y ki value lelega
        }
        return y;    // for i<=n return y
    }
    
