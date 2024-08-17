#include<iostream>
using namespace std;

// int check_sorted(int n,int arr[]){

// for(int i=1;i<n;i++){  //check from 1st index the i-1 i.e 0th index
//     if(arr[i]>=arr[i-1]){
// return false;
//     }
    
// }
// return true;

// }




// int main(int argc, char const *argv[])
// {
//     int n=4;
//     int arr[n]={1,2,2,5,4};
//    if( check_sorted(n,arr)){
//     cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }
//    }
    

int main(int argc, char const *argv[])
{
    int n=5;
    int arr[]={1,1,2,3,4};

for(int i=0;i<5;i++){
	if(arr[i]==arr[1+i]){
		remove(arr[i+1]);
	}
}

    return 0;
}
