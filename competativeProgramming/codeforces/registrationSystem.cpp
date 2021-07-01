#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin>>n;

    map<string,int>db;

    while(n--){

        string s;
        cin>>s;

        if(db.count(s) == 0){
            db[s] = 1;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<db[s]<<endl;
            db[s] +=1;
        }

    }

    return 0;
}