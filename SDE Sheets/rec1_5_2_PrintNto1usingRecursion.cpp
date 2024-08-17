#include<iostream>
using namespace std;

int x;

void func(){
if (x==0)
{
  return;
}
    
cout<<x;
x--;
func();

}

int main(int argc, char const *argv[])
{
    cin>>x;
func();
    
    return 0;
}
