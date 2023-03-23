#include<iostream>
using namespace std;

class stack{
   private:
   int stack[20], n, top;
   
   public:
   void intake();
   void push();
   void pop();
   void display();
};

//inputs from user
void stack::intake()
{   
    cout<<"22MCA0394-ASHISH PATEL "<<endl;
    cout<<"Enter total number of values: ";
    cin>>n;
    top=-1; 
}

//push into stack
void stack::push()
{
  int x;
  if(top==n-1){
    cout<<"\nStack Overflow !";
    return;
  }
  cout<<"\nEnter the value to be inserted: ";
  cin>>x;
  stack[++top]=x;
}

//pop from stack
void stack::pop()
{
   int x;
   if(top==-1)
   {
      cout<<"\nStack Underflow !";
      return;
   }
   x=stack[top--];
}

//display the stack
void stack::display()
{
    int i;
    if(top==-1)
    {
        cout<<"No Element";
        return;
    }
    cout<<"\nThe Element of Stack are: ";
    for(i=0;i<=top;i++)
    cout<<stack[i]<<" ";
}

//Main Function
int main()
{
    int c;
    stack s;
    s.intake();
    while(1)
    {
        cout<<"\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n Enter the Choice: ";
        cin>>c;
        switch(c)
        {
            case 1: s.push();
                  break;
            case 2: s.pop();
                  break;
            case 3: s.display();
                  break;
            case 4: exit(0);
            default: cout<< "Wrong Choice !";
        }
    }

}