// #include<iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num=4567;
//     // cin>>num;
//     int last_digit;
// int rev=0;
//     while (num>0)
//     {
//         last_digit=num%10;
//         num=num/10;

// rev=rev*10+last_digit; /*you have to mention this line bczYour code is correctly 
// printing the reverse of the given number. However, it seems like you want to print 
// the reversed number instead of just the digits in reverse order. To print the reversed number, 
// you need to construct it as you extract the digits.*/



// // cout<<rev<<endl; /*dont put it in the loop otherwise it will give the extracted no. on each iteration*/
//     }
//     cout<<rev<<endl;
// }



/*reversed order of ur no. the code which u where writing*/
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
   int last_digit;
    while (num > 0)
    {
        int last_digit = num % 10;
      
        num = num / 10;
        cout << last_digit << endl;
    }

    

    return 0;
}
