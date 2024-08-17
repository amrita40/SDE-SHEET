#include<iostream>
using namespace std;
/*recursion:func calling itself until a specified condition is met*/
/* basic recursion prog*/
//infinite recursion prog//
/*this is also called stack overflow bcz it will keep on calling the func and hence the memory will get full */
/*the stack will get filled as the func will be called one by one*/

// void fun(){
//     cout<<"hey"<<endl;
//     fun(); /*this func is stored in the stack space,a space where the yet to be completed task or ones are there*/
// }
// int main(int argc, char const *argv[])
// {
//     fun();
//     // cout<<"hey";
//     return 0;
// }

/*this will print from 0 to infinte no.*/
// int count=0;
// void func(){
   
// cout<<count<<endl;
// count++;
// func();
  
// }
// int main(int argc, char const *argv[])
// {
//     func();
//     return 0;
// }


/*now this will print from 0,1,2,3 bcz*/

int count=0;
void func(){
    if (count==4) /*base condition*/
{ return; /*remember if u r writing a return statement inside a func the func is terminated then and there*/
} 
cout<<count<<endl;
count++;
func(); /*this func will execute as repeatedly and at one point the value of count will be 4 
and hence it will return the value till 4 */
  
}
int main(int argc, char const *argv[])
{
    func();
    return 0;
}
/*and this is called a specified condition as stated in the defn above*/
