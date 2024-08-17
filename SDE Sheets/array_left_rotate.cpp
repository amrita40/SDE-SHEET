#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int arr[10]={3, 1, 6, 5, 10, 7, 6, 6, 1, 7};
for (int i = 0; i <9; i++) //this iterate swaps the elements 
{ //i<9 becoz when i<10 then i+1 will become 10 hence not valid
    swap(arr[i],arr[i+1]);

}
for (int i = 0; i < 10; i++) //this prints the elements after sawaping
    {
    cout<<arr[i]<<endl;
}
}