#include<iostream>
using namespace std;

#define MAX 1000

void heapify(int arr[],int n, int i) {
    int parent = (i-1)/2;
    if(arr[parent] > 0) {
        if( arr[i]> arr[parent]){
            swap(arr[i],arr[parent]);
            heapify(arr,n, parent);
        }
    }
}

void printArray(int arr[],int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

void insertNode(int arr[],int n,int key) {
    n = n+1;
    arr[n-1]=key;
    heapify(arr,n,n-1);
}

int main() {
    int key,n;
    cin>>n>>key;
    int arr[MAX];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    insertNode(arr,n,key);
    printArray(arr,n+1);


}