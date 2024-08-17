/*1 is neither prime nor composite 
prime no is a no. having two factors either 1 or itself*/

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x;
    cin>>x;
    int count=0;

    for (int i = 1; i <=x; i++)
    {
        if (x%i==0)
        {
           count++; /*jaise jaise no. divisible hoga count increse hoga*/
        
        }
    }
    /*isko loop ke bahar chalana vrna baar baar repeat hoga if statement*/
        if (count==2) /*prime tbhi hoga jb 1 or itself se div hoga toh jab count 2 hoga tb prime hoga*/
        {
            cout<<"its a prime no."<<endl;
        }
        
        else{
            cout<<"not a prime no."<<endl;
        }
        
        
    
    
    
    return 0;
}
