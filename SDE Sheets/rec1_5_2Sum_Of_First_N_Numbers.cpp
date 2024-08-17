#include<iostream>
using namespace std;

//sum of n number 2 ways of solving
//i)parameterised way ii) functional way

//parameterised method

// void summ(int i,int sum){

// if (i<1)
// {
//     cout<<sum;
//     return;
// }

// summ(i-1,sum+i);

// }


// int main(int argc, char const *argv[])
// {
//     int i;
//     cin>>i;
//     int sum=0;



//  summ(i,sum);

//     return 0;
// }

//functional way

int fun(int n){
if (n==0)
{
    return 0;
}
return n + fun(n-1); 
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

    cout<<fun(n);
    return 0;
}



