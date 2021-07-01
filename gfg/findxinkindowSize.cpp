#include <iostream>
using namespace std;

void findxinkindowSize(int arr[],int x,int k,int n){
    
    int count = 0;
    int i;
    for(i = 0;i<n;i=i + k){

        int j;
        for(j = 0;j<k;j++){
            if(arr[j] == x){
                count++;
            }
        }
    }
    // if(i-k>0){
    //     for(int j = i-k;j<n;j++){
    //         if(arr[j] == x){
    //                 count++;
    //             }
    //     }
    // }

    if(n % 2 == 0){
        if(count == n/k){
            cout<<"YES"<<endl;
        }
    }
        else if(n%2 != 0){
            if(count == n/k+1){
                cout<<"YES"<<endl;
            }
    }
    
    else{
        cout<<"NO"<<endl;
    }
 
}

int main(){

    int arr[] = {3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 3 };
    int x = 3, k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    findxinkindowSize(arr, x, k, n);

    return 0;
}