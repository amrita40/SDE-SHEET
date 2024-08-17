
#include<iostream>

using namespace std;

class Fruit{
public: /*acess modifier*/
    string name;
    string color;

};

class student{
    public:
     int roll;
     string name;

};


 class rectangle{
 public:
  int l;
   int b;

   rectangle(){ // default constructor its name is same as the class name and no args are passed
l=0;
b=0;
   }

rectangle(int x,int y){ //parameterized constructor --args passed
 l=x;
 b=y;
}

rectangle(rectangle& r){ //copy constructor

 };
 };

int main(int argc, char const *argv[])
{
    //  Fruit mango;

    //  mango.name="yellow";
    //  cout<< mango.name<<endl;

    //  student *avi=new student();  // second way of defining the class
    //  avi-> roll=1;
    //  avi-> name="aanjanay";
    //  cout<<avi->name<<endl<< avi->roll;

rectangle r;
cout<<r.l<<endl<<r.b<<endl;
rectangle r1(3,4);
cout<<r1.l<<endl<<r1.b;
    return 0;
}
