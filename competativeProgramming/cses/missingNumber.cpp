#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int n;
    cin>>n;
    long long int arr[n-1];
    long long int f[200001] = {0};

    for(long long int i = 0;i<n-1;i++){
        cin>>arr[i];
        f[arr[i]]++;
    }

        for(long long int i = 1;i<200001;i++){

            if(f[i] == 0){
                cout<<i<<endl;
                break;
            }

        
    }
return 0;
}