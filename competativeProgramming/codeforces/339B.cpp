#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int s = 1;
    long long int ans = 0;

    for(int i = 0;i<m;i++){

        int x;
        cin>>x;

        if(x>=s) ans += x-s;
        else{
            ans += n - (s-x);
        }
    s = x;
    }
    
    cout<<ans<<endl;

}