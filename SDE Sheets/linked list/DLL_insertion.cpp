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

node* insert_before_head(node* head,int val){
    node* newnode=new node(val);
    newnode->back=nullptr;
    newnode->next=head;
    return newnode;
}

node* insert_before_tail(node* head,int val){
    if(head->next==NULL){
    return insert_before_head(head,val);
    }
    
    
    node* tail=head;
    while(tail->next!=NULL){
       tail= tail->next;
    }
    
node* prev=tail->back;
node* newnode=new node(val,tail,prev); /*do mention tail and prev otherwise it will not print the last element*/
prev->next=newnode;
 tail->back=newnode;
 
return head;
    
}

node* insert_before_kth_element(node* head,int k,int val){
/*if k=1 its insert before head if k==n i.e the last element then remove the tail*/
if(k==1){
    return insert_before_head(head,val);
}
node* temp=head;
int count =0;
while(temp!=NULL){
    count++;

if(count==k)
break;
 temp=temp->next;
}
node* prev=temp->back;
node* newnode= new node(val,temp,prev);
prev->next=newnode;
temp->back=newnode;

return head;
}

void insert_before_node(node* nodes,int val){ /*void bcoz there will be no change in the head*/
/*edge case node!= head*/
node* prev=nodes->back;
node* newnode=new node(val,nodes,prev);
prev->next=newnode;
newnode->next=nodes;

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
    // head=insert_before_head(head,100);
    // head=insert_before_tail(head,500);
    // head=insert_before_kth_element(head,5,2000);
   insert_before_node(head->next,100); /*dont declare it as head bcoz it will not make any change in the head as its return is void*/
print(head);
    return 0;
}



