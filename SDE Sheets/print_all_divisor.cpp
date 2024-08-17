/*print all divisor i.e from 1 to n itself bcz greater than n will not div it completely*/
/*e.g 36 divisors are 1,2,3,4,6,9,12,18,36*/
#include<iostream>
using namespace std;
int main(){
int x=36;
for (int i = 1; i <=x; i++)
{
    if (x%i==0)
    {
        cout<<"yes its a divisor  "<< i<<endl;
    }
    // else{
    //     cout<<"not a divisor"<<i<<endl;
    // }
    
}
return 0;
}