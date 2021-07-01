#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x,y,z,xsum(0),ysum(0),zsum(0);

    while(n--){

        cin>>x>>y>>z;
        xsum += x;
        ysum+= y;
        zsum += z;

    }

    if(xsum == 0 && ysum == 0 && zsum == z){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}