#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,lastdigit;
    cout<<"enter the number that is to be reversed : ";
    cin>>n;
    while(n>0){
       lastdigit = n%10;
       cout<<lastdigit;
       n = n/10;
    }
    return 0;
}