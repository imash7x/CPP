#include<iostream>
using namespace std;

int deleteElement(int arr[], int n, int key, int value, int pos){
    
    if(pos == -1){
        cout<<"element not found";
    }
    for(int i = pos; i<n; i++){
        arr[i]=arr[i+1];
    }

    cout<<"after deleting: ";
    for(int i = 0; i<n-1; i++){
        cout<<arr[i]<<" ";
    }return n;
}
int findElement(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
          return i;
    }return -1;
}

int main(){
    int arr[10]= {22,34,37,40,44};
    int n = 5;
    int capacity= sizeof(arr)/sizeof(arr[0]);
    cout<<"capacity: "<<capacity<<endl;
    int value = 20;

    cout<<"before: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>> key;
    
    int pos = findElement(arr,n,key);
    deleteElement(arr, n, key, value,pos);
    
    return 0;
}
