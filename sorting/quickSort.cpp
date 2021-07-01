#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

int partition(int a[],int l,int r){
    
    int pivot = a[l];
    int i = l;
    int j = r;

    while(i<j){

        while(a[j]<=pivot) i++;
        while(a[j]>pivot) j++;

        if(i<j) swap(i,j);

    }
    swap(j,l);
    return j;
}
  
void quickSort(int arr[], int l,int r) 
{ 
    if(l<r){
        int pivot = partition(arr,l,r);

        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,r);
    }

} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int l = arr[0];
    int r = arr[n-1];
    quickSort(arr, l,r); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 