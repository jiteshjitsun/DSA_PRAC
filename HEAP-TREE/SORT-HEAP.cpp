#include<iostream>
using namespace std;

void heapify(int arr[],int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && arr[largest]<arr[l])
        largest = l;
    if(r<n && arr[largest]<arr[r])
        largest = r;
    if(largest!=i){
        swap(arr[i], arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){

    // applying max heap
    for(int i=n/2-1; i>=0; i--) {
        heapify(arr,n,i);
    }

    // One by one extract an element from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    heapSort(arr,n);

    printArray(arr,n);
}