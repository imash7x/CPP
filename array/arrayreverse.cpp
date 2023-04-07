#include<iostream>
using namespace std;

void reverse( int arr[],int start, int end){
    while(start < end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}
void printarr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    
    int arr[]={2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int start = 0;
    int end = n-1;

    printarr(arr,n);
    reverse(arr, start, end);
    printarr(arr,n);

}