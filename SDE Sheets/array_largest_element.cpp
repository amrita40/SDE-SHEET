#include<iostream>
using namespace std;

int largest(int n,int arr[]){

n;
arr[n];
int largest=arr[0];
for (int i = 0; i < n; i++)
{
    if (arr[i]>largest) //for largest 
    //if(arr[i]<largest) for smallest
    {
        largest=arr[i];
    }
    
}
cout<<largest;
return largest;


}


int main(int argc, char const *argv[])
{
    int n=5;
    int arr[n]={1,2,3,4,6};

largest(n,arr);
    return 0;
}




