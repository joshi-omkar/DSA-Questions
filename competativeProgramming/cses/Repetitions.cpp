#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
 string s;
 cin>>s;

int count = 1;
int max_count = 0;

if(s.length() == 1){
     cout<<1;
    }
else{
 for(int i = 0;i<s.length()-1;i++){
     if(s[i] == s[i+1]){
         count++;
     }
     else{
         max_count= max(count,max_count);
		 count=1;
     }

     max_count = max(max_count, count);
     
 }

 cout<<max_count;
}
 
 
return 0;
}