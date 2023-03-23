#include<iostream>
using namespace std;

struct rectangle{
    public:
    int length;
    int breadth;
     
    void initialise(int l,int b){
      length=l;
      breadth=b;
    }
    int area()
    {
      return length*breadth;
    }

    int perimeter()
    {
      int p;
      p=2*(length+breadth);
      return p;

    }
  };

  int main(){
    rectangle r;
   
   int l,b;
    cout<<"enter length:";
    cin>>l;
    cout<<"enter breadth:";
    cin>>b;
    
    r.initialise(l, b);

    int a=r.area();
    int peri=r.perimeter();
    cout<<"area="<<a<<endl;
    cout<<"perimeter="<<peri<<endl;

  return 0;
 }