#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit;
    int count = 0;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0){
       // lastdigit = n%10;
        count++;
        n = n/10;
    }
    cout<<count;
    return 0;
}
//T C = 0(log10(n)) bcz n/10
// T C =O(log5(n)) if n/5 and so on..