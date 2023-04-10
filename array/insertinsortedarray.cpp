#include<iostream>
using namespace std;

int insertElement(int arr[], int n,int capacity,int key){    
    if(n>=capacity){
        cout<<"cant insert array full!";
        return n;
    }
    int i;
    for(i=n-1; (arr[i]>=key && i>=0); i--)
        arr[i+1]=arr[i];   
    
    arr[i+1]=key;
    return(n+1);
}
int main(){
    int arr[8] = {2,3,5,6,7};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    int key;
    cout<<"enter element: ";
    cin>>key;

    cout<<"Before: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
    
    insertElement(arr,n,capacity,key);
    
    cout<<"\nAfter: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<", ";
    }
}
