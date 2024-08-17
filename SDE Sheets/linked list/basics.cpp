#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*reffer oops in the folder for better understanding*/
/*u can use class and struct both, try taking class always*/
class node{
 public:
  int data;
  node* next; /*node contains the data and the pointer or address to the next */

public:

node(int data1,node* next1){ //constructor
 data=data1;
 next= next1;

}
/* one more constructor type let suppose u dont want to dec nullptr evrytime so just do*/
node (int data1){
    data=data1;
    next=nullptr;
}
};

int main(int argc, char const *argv[])
{
    
vector<int> arr={2,5,8,7};
node* y=new node(arr[0],nullptr); /* here nullptr that the pointer is not pointing to any valid memory location */
cout<<y<<endl;/*simply give pointer to the mem loc */
cout<<y->data<<" "<<y->next<<endl;/* output 2,0*/
/*by removing * and new keyword you are simply making an object*/
// node y= node(arr[0],nullptr);
// /*for accessing the objects do*/
// cout<<y.data<<" "<<y.next<<endl; //output 2,0 (null)
//     return 0;
}
