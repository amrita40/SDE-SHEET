#include<iostream>
using namespace std;

int x=1;// never ever declare x=1 in the func as after one execution it will set it as 1 only
int n;
void func()
{
    if(x>n){ /*here if x==n then it will print one less then n but if as mention in the condition then it will print till n*/
        return;
    }
    cout<<x; /*dont write here n as it will give the same no. n times the condition is if x ==n i.e when x==n then terminate
     the func else keep printing x*/
    x++;
    func();
}


int main(int argc, char const *argv[])
{
    // int n;
    cin>>n;
    func();
    return 0;
}



