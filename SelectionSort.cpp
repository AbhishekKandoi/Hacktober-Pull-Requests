#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){ 
        int min = a[i];
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min = a[j];
                min_idx = j;
            }
        }
        if(min_idx!=i)
            swap(a[min_idx],a[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
