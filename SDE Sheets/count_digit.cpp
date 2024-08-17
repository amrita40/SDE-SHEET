#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   int x=123456;
   int last_digit;
   int count=0;
while (x>0)
{
   last_digit =x%10;
   count=count+1; /*no. of time the extraction happens the count inncreses by 1*/

  x= x/10;
cout<<last_digit<<endl;
    // cout<<count<<endl;// 
    /*In the given C++ code, the purpose is to count the number of digits 
    in the variable x and print each digit. The statement cout << count << endl; is
     placed outside the loop to ensure that it is executed only once after the loop completes its iterations. 
     If you were to place this statement inside the loop, it would be executed in each iteration,
     and you would get the count for each digit, not the total count of all digits. 
     issiliye its not correct to be placed in the loop*/

}


 cout<<count<<endl;  
   
}

/*study the time complexity from striver*/
