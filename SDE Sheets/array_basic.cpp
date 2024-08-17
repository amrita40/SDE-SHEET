#include<iostream>
using namespace std;

//array:datastr. in which similar datatype element to be stored.
//datatype can be int,char,string , pair<int,int>
//array indexing is from 0 to n-1
//int a[];//this is the global declaration of array..and its max size can be 10^7
/* x --> address location of the 0th index
x+1--> address location of the 1st index
x+2--> address location of the 2nd index and so on
so contigious memory location is where all the coresponding indexes  is stored
but we cant predict x so thereby accessing array by address is not posiible and hence we acess by index */






int main(int argc, char const *argv[])
{
//     int b[5]={5,6,7,8,9}; //declaration of array and maxi size of it inside the main func will be 10^6.
// for (int i = 0; i < 5; i++) //for fetching each value
// {
//     cout<<b[i]<<endl;
// }
 

int c[6]; //dec the size

for (int i = 0; i < 6 ; i++)
{
       cin>>c[i]; //for taking user input
       
}

for (int i = 0; i < 6; i++)
{ //for printing user input
    cout<<"the num are :"<<c[i]<<endl;
}


    return 0;
}
