#include<bits/stdc++.h>
using namespace std;
/*for removing the head firstly convert the arr to ll*/
class node{
public:
int data;
node* next;

node (int data1){
    
    data=data1;
    next=nullptr;
}


};

node* convert_to_ll(vector<int> arr){
    node* head= new node(arr[0]);
    node* mover=head;
    
    for(int i=1;i<arr.size();i++){
node* temp=new node(arr[i]);
mover->next=temp;
mover =temp;
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

// node* delete_head_ll(node* head){
// if(head==NULL)
// {
//  return head;
// }/*if ll is empty return the same head */
//     node* temp=head; /*put temp on head as same on the head*/
// head=head->next;/*put head to the next no as the head*/
//  delete temp; //or free(temp); apart from this line the whole func will move the head from arr[0] to arr[1]
// return head;/* return the new head*/
// }
node* delete_tail_or_lastElement(node* head){
    node* temp=head;/*put temp on head*/
    if(head==NULL || head->next==NULL) /*if ll is empty or ll contains only one element and a nullptr*/ 
    return head;/*then simply return the head*/
while(temp->next->next!=NULL){ /*till the time the temp next to next is not pointing to nullptr proceed the while loop*/
temp=temp->next; /*as the confition is true declare temp to the next ajacent element*/
}
free(temp->next); /*as the condn is false free the last or tail element */
temp->next=nullptr; /* after the deletion the declare the temp next as nullptr*/
return head;
}

node* remove_K_position(node* head,int k){
    if(head==NULL) return head;
    if(k==1){
        node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }

    int count=0;
    node* temp=head;
    node* prev = NULL;/*assuming before head*/
    while(temp!= NULL){
count++; /*hey are an ele if yes increase the count  */
    if(count==k){
    prev->next=prev->next->next;
    free(temp); /*declare the prev and free the temp temp is always ahead of prev*/
    break;
    }
    prev =temp;
    temp=temp->next;
    }
    return head;
}


 node* remove_k_value(node* head,int x){
    
if(head->data==x){
 node* temp=head;
 head=head->next;
free(temp);
      return head;      
        }

node* temp=head;
node* prev =NULL;
while(temp!=NULL){
    
    if(temp->data==x){
    prev->next=prev->next->next;
    free(temp);
    break;
    }
    prev=temp;
temp=temp->next;
}
return head;
 }
int main(int argc, char const *argv[])
{
    vector<int> arr={12,5,8,6};
   
    node* head= convert_to_ll(arr);
// cout<<head->data<<endl;/* prints the head of the ll*/
//  head=delete_head_ll(head);
//  cout<<"removed head data is  "<<head->data<<endl; /* it wont print the deleted head as its deleted from the system it will simply print the next declared head which is 5*/
// head= delete_tail_or_lastElement(head);
head= remove_K_position(head,4);
//  head= remove_k_value(head,8);
 print(head);
 return 0;
}




