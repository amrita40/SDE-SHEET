#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
     cin>>x;
     int original=x; //store the original value of x here//
     int rev=0;
     int last_digit;
while (x>0)
{
    last_digit=x%10;
    x=x/10; /*at this point x becomes zero and hence loop exits as per the condition*/
    rev=rev*10+last_digit;
}
cout<<rev<<endl;

/*after the loop x becomes zero*/
// if (x==rev){  /*The issue in your code is that you are checking if x is equal to rev after the while loop. However, at this point, x has become zero because you used it to update rev in the loop.*/
   if(original==rev){
    cout<<"yes it's a palindrome"<<endl;
}
else
{
    cout<<"not a plaindrome"<<endl;
}

    return 0;
}
