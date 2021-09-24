#include <bits/stdc++.h>
using namespace std;

int main(){

    int s,n;
    cin>>s>>n;

    vector<pair<int,int>>v;

    for(int i =0;i<n;i++){

        int x,y;
        cin>>x>>y;
        
        v.push_back(make_pair(x,y));

    }

    sort(v.begin(),v.end());

    int flag = 0;

    for(int i = 0;i<n;i++){

        if(v[i].first>=s){

            flag = 1;

        }
        else{

            // s = s - v[i].first;
            s = s + v[i].second;

        }

    }

    if(flag == 1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    return 0;
}