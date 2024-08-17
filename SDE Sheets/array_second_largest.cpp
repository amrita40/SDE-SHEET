#include<iostream>
using namespace std;

int secondlargest(int n,int arr[]){

int largest=arr[0];
int second_largest=-1; //assuming that there is no negative no. in the arr else take minimum integer
for (int i = 0; i < n; i++)
{
    if (arr[i]>largest)
    {
        
        largest=arr[i];
    }
    else if(arr[i]<largest && arr[i]>second_largest){
second_largest=arr[i];
    }
    
}
cout<<"the largest element is "<<largest<<endl;
cout<<"the second largest element is "<<second_largest;
}
int main(int argc, char const *argv[])
{

    int n=7;
    int arr[n]={1,2,3,4,7,7,5};
    secondlargest(n,arr);
       return 0;
}
