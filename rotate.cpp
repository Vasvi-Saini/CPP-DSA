#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =7;
    int arr[n] = { 1 ,2 ,3 ,4, 5 ,6,7};
      //rotate it by k steps {4,5,1,2,3} first step {1,2,3,4}hn second step {4,5,1,2,3}
      //n k multiples m steps = array repeated 
      // 
     int k = 45;    //k = k%n; n=6 k =12 
     k%=n;
                        //{1 ,2, 3, 4, 5,6,7}  {7,6,5,4,3,2,1} {5,6,7,1,2,3,4}
                                             
                       //  0  1  2  3  4 5 6  
                       
   int newarr[n];
   int j = 0;
   for(int i=n-k; i<n; i++){            //hnji {4,5}
         newarr[j]  = arr[i]; 
         j++;
   }
   
   for(int i=0; i<n-k; i++){            // {4,5}
         newarr[j]  = arr[i]; 
         j++;
   }
    for(auto i : newarr){
        cout<<i<<" ";
    }
  return 0;
} 