#include<iostream>
using namespace std;

int func(int n){
    if(n==0){
        return 1; //dont write here return 0 as it will return the value 0
    }
    
    return n*func(n-1);
/*
3+f(2)
2+f(1)
1+f(0)  {f(0)=0}

*/
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    
    cout<<func(n);
    return 0;
}
