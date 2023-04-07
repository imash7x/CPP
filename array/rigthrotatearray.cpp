#include<iostream>
using namespace std;

void rigthRotate(int arr[], int k, int n){
    int temp[n];
    int t = 0;
    for(int i=n-k; i<n; i++){
        temp[t]=arr[i];
        t++;
    }
    for(int i=0; i < n-k ; i++){
        temp[t]=arr[i];
        t++;
    }
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
}
void printarr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int  arr[]={2,3,4,5,6,7,3,4,5,6};
    int k;
    cin>>k;
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    printarr(arr,n);
    rigthRotate(arr,k,n);
    printarr(arr,n);
}