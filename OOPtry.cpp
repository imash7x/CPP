#include<iostream>
#include<stdio.h>
using namespace std;

class baseclass{
  private:
     int u;
  protected:
     int v;
  public:
     int w;

  baseclass(){
     u = 3;
     v = 4;
     w = 5;
    }
};

class deriveclass: public baseclass {
//v becomes protected and w becomes public members of class derive
 public:
   void show() {
      cout << "u is not accessible";
      cout << "\nvalue of v is " << v;
      cout << "\nvalue of w is " << w;
    }
};

int main(){
     deriveclass c;
        c.show();
        //c.u = 3; not valid: private members are inaccessible outside the class
        //c.v = 4; not valid: v is now protected member of derived class
        //c.w = 5; valid: w is now a public member of derived class
    return 0;
}