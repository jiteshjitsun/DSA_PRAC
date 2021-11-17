#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool comp(Item a, Item b) {
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, int v[],int w[], int n) {
    struct Item arr[n];
    for(int i=0; i<n; i++) {
        arr[i].value = v[i], arr[i].weight = w[i];
    }
    sort(arr,arr+n,comp);
    int curWeight = 0;
    double finalvalue = 0.0;

    for(int i=0; i<n; i++) {
        if(curWeight+ arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }

        else {
            int remain = W-curWeight;
            finalvalue += (arr[i].value/(double)arr[i].weight)* (double)remain;
            break;
        }
    }
    return finalvalue;
}

int main() {
    int n,w;
    cin>>n>>w;
    int v[n],wt[n];
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cin>>wt[i];
    }
    cout << fractionalKnapsack(w,v,wt,n);
}