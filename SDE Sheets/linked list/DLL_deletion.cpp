
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

node* delete_head(node* head){

if(head==NULL || head->next==NULL){
    return head;
}
node* prev=head;
head=head->next;
head->back=nullptr;
prev->next=nullptr;

delete prev;

return head;


}

node* delete_tail_ll(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* tail=head;
    
    while(tail->next!=NULL){
        tail=tail->next;
        
    }

    node*prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    /*prev ke back se koi mtlb nhi hai*/
    delete tail;
   return head;
   
    }

node* delete_at_k_position(node* head,int k){
    /*if no. of ele is 4 then k will always be 1 to 4 */
if(head==NULL ){
    return head;
}

int count=0;
node* knode=head;


while(knode!=NULL){
    count++;
    if(count==k) 
break;
knode=knode->next;
}
 node* prev=knode->back;
 node* front=knode->next;

   if(prev==NULL && front== NULL)
   return  NULL;/* becoz it will not have anything in the ll simply it will have  one element and after deleting it, it will return null*/
else if(prev==NULL){/*its a head*/
return delete_head(head);
}
else if (front==NULL){ /*its asking abt the tail*/
    return delete_tail_ll(head);
}
prev->next=front;
front->back=prev;

knode->next=nullptr;
knode->back=nullptr;
delete knode;
return head;
}

void* delete_node_k(node* temp){
    /*the edge case is it will never have node=head to be deleted*/
    node* prev=temp->back;
    node* front= temp->next;
    if(front==NULL){
        prev->next=NULL;
        temp->back=nullptr;
        delete temp;
    
    }
    else{
        prev->next=front;
        front->back=prev;
        temp->next=nullptr;
        temp->back=nullptr;
        delete temp;
        
    }
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

// head=delete_head(head);
// head=delete_tail_ll(head);
// head=delete_at_k_position(head,2);
delete_node_k(head->next);/*the reason why i am not declaring the function to head is bcoz if we say head then we have to move the haed to next element and the delete the prev element for which we have to write more condition */
print(head);
return 0;

}





