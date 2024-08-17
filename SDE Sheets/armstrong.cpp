/*arstrong no. is if 371 is the no. then 3^3+7^3+1^3 should be equal to 371 i.e basically digits raised to the power count of digits,
 1634 for this  pow(1,4)+pow(6,4)+pow(3,4)+pow(4,4)            */

#include<iostream>
#include<cmath>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int x=1634;
//     int y;
//     y=pow(1,4)+pow(6,4)+pow(3,4)+pow(4,4);
//    cout<<y<<endl;
//     if (x==y)
//     {
//         cout<<"it's an armstrong no."<<endl;
//     }
//     else{
//         cout<<"its not"<<endl;
//     }
//     return 0;
// }

 /*for user input*/

 int main(int argc, char const *argv[])
 {
    int x;
    cin>>x;
int count=0;
    int last_digit;

    while(x>0){
last_digit=x%10;
count=count+1;
x=x/10;
cout<<last_digit<<endl;
    }
    int y =+ pow(last_digit,count);
    cout<<y<<endl;

    return 0;
 }
 
