#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        if(arr[i]==k){
         return i;
        }
    }return -1;
}
int BinarySearch(int arr[], int first, int mid, int last,  int k){
   if(last >= first){
        if(arr[mid] == k){
            return mid;
        }
        else if(k > arr[mid]){
            return BinarySearch(arr,first,mid+1,last,k);
        }
        else{
        return BinarySearch(arr,first,mid-1,last,k);
        }
    }return -1;
}
int main(){
  int arr[]={22,34,43,56,66,77,87,93,97};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 87;

  int first = 0;
  int mid = n/2;
  int last = n-1;
  
  int resultL = linearSearch(arr,n,k);
  cout<<"At index: "<<resultL;
  int resultB = BinarySearch(arr, first, mid, last, k);
  cout<<"\nAt index: "<<resultB;
}