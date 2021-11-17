#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && arr[largest] <arr[l])
        largest = l;
    if(r<n && arr[largest] < arr[r]) 
        largest = r;
    
    if(largest!=i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n , largest);
    }
}

void deletion(int arr[],int n) {
    // int lastEle = arr[n-1];
    arr[0] = arr[n-1];
    n = n-1;
    heapify(arr,n,0);
}


void printArray(int arr[], int n){
    for(int i=0; i<n; i++) 
        cout<<arr[i]<<" ";
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    deletion(arr,n);
    printArray(arr,n-1);
}