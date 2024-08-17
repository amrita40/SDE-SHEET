#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node* back;

public:
node(int data1,node*next1,node*back1){
data=data1;
next=next1;
back=back1;
}
public:
node(int data1){ /*if in case u are only passing data then it will automatically consider the next and the back as nullptr*/
data=data1;
next=nullptr;
back=nullptr;
}

};


node* convert_arr_dll(vector<int> arr){
    node* head= new node(arr[0]);/*it will autoatically assign the next and the  back as nullptr>*/
    node* prev=head;
    for(int i=1;i<arr.size();i++){

node* temp = new node(arr[i],nullptr,prev); /*as a new node it next is null and its back is prev of it*/
 prev->next=temp;
 prev =temp;
//  prev->back=arr[i-1]; no need for this line its wrong as i have already declare in the temp that its next is null and back is prev

    }
    return head;
}


void print(node* head){
while(head!=NULL){

cout<<head->data<<" ";
head=head->next;
}
cout<<endl;
}


int main(int argc, char const *argv[])
{
    vector<int> arr={2,5,8,10,12};
    node* head=convert_arr_dll(arr);
print(head);
    return 0;
}
