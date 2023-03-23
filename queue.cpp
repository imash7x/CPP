#include<iostream>
#include<stdlib.h>
using namespace std;

int queue[5],n=5,front=-1,rear=-1;
void enq(int val){ //insert;
     //int val;
     if(rear == n-1)
     cout<<"queue overflow!!"<<endl;
     else{
     
     if (front == -1)
     front = 0;
     cout<<"inserted element: "<<val<<endl;
     rear++;
     queue[rear]=val;

    }
}

void deq(){//delete;
    if(front == -1 || front > rear){
        cout<<"queue underflow";
        return;
    }
    else{
        cout<<"deleted element are: "<<queue[front]<<endl;
        front++;
    }
}

void display()
{  
    if(front == -1){
     cout<<"queue is empty"<<endl;
    }
    else{
    cout<<"queue elements are: ";
    for(int i = front; i<=rear; i++)
    cout<<queue[i]<<" ";
    cout<<endl;
    }
}
int main(){
    enq(2);
    enq(1);
    enq(6);
    enq(4);
    enq(3);
    display();

    return 0;
}