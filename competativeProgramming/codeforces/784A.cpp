#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 
    ll t;
    cin>>t;
    while(t--){

        vector<ll>v;
        for(int i = 0;i<3;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }

        ll maxi = *max_element(v.begin(),v.end());
        ll count = 0;

        for(int i = 0;i<3;i++){
            if(maxi == v[i])count++;
        }
        
        for(int i = 0;i<3;i++){
            
            if(count == 3){
                v[i] = maxi - v[i] + 1;
            }
            else if(count == 2){
                v[i] = maxi - v[i] + 1;
            }
            else if(v[i] == maxi && count ==1){
                v[i] = 0;
            }
            else {v[i] = maxi - v[i] + 1;}
            cout<<v[i]<<" ";
        }

        cout<<endl;



    }
 
return 0;
}