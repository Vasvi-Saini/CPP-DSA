#include<bits/stdc++.h>
using namespace std;
int main(){
    int k =3;
    vector<int> v = { 1 ,2 ,3 ,4, 5 ,6, 7};
    k%=v.size();
    reverse(v.begin(),v.end());  
    reverse(v.begin(),v.begin()+k);      //0 to 0+3=3 0 s 3rd index tk 2 tk kse 
    reverse(v.begin()+k,v.end());       //{1 ,2, 3, 4, 5,6,7}  {7,6,5,4,3,2,1} {5,6,7,1,2,3,4}
    for(auto i : v){
         cout<<i<<" ";
    } 
    cout<<endl;
    vector <int> newv= {5,3,2,1};
    sort(newv.begin(),newv.end());btao que
     for(auto i : newv){
         cout<<i<<" ";
    } 
    
  return 0;
} 