#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>zero;
    vector<int>one;

    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];

        if(a[i] % 2 == 0){
            zero.push_back(i);
        }else{
            one.push_back(i);
        }
    }
    if(zero.size() == 1)
        cout<<zero[0]+1;
    else
        cout<<one[0]+1;



    return 0;
}