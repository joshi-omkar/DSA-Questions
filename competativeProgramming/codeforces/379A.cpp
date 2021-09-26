#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int count = a;

    while(a>=b){
        // count += a/b;
        // a = a/b;

        int d = a / b;
        count += d;
        int m = a % b;
        a = d + m;
        
    }
    
    cout<<count<<endl;
    
    

}