#include<iostream>
using namespace std;
// int x=0;

// void func(int n){
    
//     if(x==n)
//     {
//         return;
//     }
//     cout<<"coding ninja  ";
//     x++;
//     func(n);
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin>>n;
//     func(n);
//     return 0;
// }
/*as soon as x==n it will terminate the func and exit if entered 2 then 2 times it will print insted of 3 times*/


/*another way for finding the sol*/
int n;
int x=1;
void fun(){
if(x>n){ /*suppose x=4 then 4 is not greater than 4 hence it will print the statement */
    return;
}
cout<<"hey"<<endl;
x++;
fun();
}

int main(){
    cin>>n;
    fun();
}
