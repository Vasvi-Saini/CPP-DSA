#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector r containers that dynamically store the data
    // declaration of vectors
    // Dec 1:-
    vector <int> Vasvi;
    Vasvi.push_back(1);
     Vasvi.push_back(3);
    Vasvi.emplace_back(2);
    cout<<Vasvi[0]<<" "<<Vasvi[1]<<" "<<Vasvi[2];
   // Dec 2:-
   vector<pair<int , int>>v;
   v.push_back({5,6});
   v.emplace_back(8,9);
   vector<int,int>::iterator v;
   cout<<*(v)<<" ";

    return 0;
}