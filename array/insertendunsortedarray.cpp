#include<iostream>
using namespace std;

int insert(int arr[], int n, int key, int capacity){
    if(n>=capacity)
       return n;
    arr[n] = key;
    n=n+1;

    cout<<"after: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return n;
}
int main(){
    int arr[10]= {22,34,37,40,44};
    int n = 5;
    int capacity= sizeof(arr)/sizeof(arr[0]);
    cout<<"capacity: "<<capacity<<endl;

    cout<<"before: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>> key;
    insert(arr,n,key,capacity);
    
    return 0;
}
