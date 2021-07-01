#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void insertionSort(int arr[], int n) 
{ 
   for(int i = 0;i<n;i++){
    int temp = arr[i];
    int j = i-1;

    while(j>=0 && arr[j]>temp){

        arr[j+1] = arr[j];
        j--;

    }

    arr[j+1] = temp;

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
    insertionSort(arr, n); 
    cout<<"Sorted array: \n"; 
    printArray(arr, n); 
    return 0; 
} 