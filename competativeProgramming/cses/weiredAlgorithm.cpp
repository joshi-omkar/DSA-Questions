#include<bits/stdc++.h>
using namespace std;
 
int main(){
 long long int n;cin>>n;
 long long int x = n;
 cout<<x<<" ";
 while(n>=1){
     if(n == 1){
         break;
     }
     
   if(n%2 == 0){
       n = n/2;
   }else{
       n = 3*n +1;
   }
   cout<<n<<" ";
 }
 
return 0;
}