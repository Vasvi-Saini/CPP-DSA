#include<bits/stdc++.h>
using namespace std;
void prefixSum( vector <int>& arr){
    for (int i = 1; i < arr.size() ; i++)
    {               //O(1)
        arr[i] = arr[i] + arr[i-1];
        }
   for(auto i: arr){
   cout<<i<<" ";
   }
}
int main(){
    int n,no;
    vector <int> arr;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>no;
        arr.push_back(no);
    }
    prefixSum(arr);
}