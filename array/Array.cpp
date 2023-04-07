#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char arr[n];
    char a;
    for(int i=0; i<n; i++){
        cin>>a;
        arr[i] = a;
    }
    for(int i=0;i<n;i++){
        cout<<"["<<arr[i]<<"]";
    }
}