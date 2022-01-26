#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long int n;
    cin>>n;
    long long int arr[n];

    for(long long int i = 0;i<n;i++){
        cin>>arr[i]; 
    }

    long long int count = 0,m = arr[0];
    for (long long int i = 1; i < n; i++)
    {
        count += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout<<count;

    

return 0;
}