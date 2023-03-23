#include<iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;

int stack[MAX];
int top = -1;

void push(int data){
  if(top == MAX-1){
    cout<<"stack is overflow ";
    return;
  }
  else{
  top= top+1;
  stack[top]=data;
}
}
void pop(){
    if (top <= -1){
        cout<<"stack is underflow "<<endl;
    }
    else{
        cout<<"poped element: "<<stack[top]<<endl;
      top--;
    }
}

void display(){
    if(top>=0){
    cout<<"stack elements are: ";
    for(int i=top; i>=0; i--)
    cout<<stack[i]<<" ";
    cout<<endl;
    }
    else{
    cout<<"stack is empty ";
    }
}
int main(){
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    pop();
    pop();
    display();

    return 0;
}