#include<iostream>
using namespace std;

int findElement(int arr[],int first, int last, int key){
    int mid = (first+last)/2;
    if(last >= first){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            return findElement(arr,mid+1,last,key);
        }
        else{
        return findElement(arr,first,mid-1,key);
        }
    }return -1;
}
int deleteElement(int arr[], int n, int key){
    int pos = findElement(arr, 0, n-1, key);
    
    if(pos == -1){
        cout<<"element not found.";
        return n;
    }
    for(int i=pos; i<n-1; i++){
        arr[i]=arr[i+1];
    }return n-1;
}
int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"enter element: ";
    cin>>key;

    cout<<"Before: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    
    deleteElement(arr,n,key);
    
    cout<<"\nAfter: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}
