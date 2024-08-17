#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;

node(int data1, node* next1=nullptr){
    data=data1;
    next=next1;
}
};

node* convert_to_ll(vector<int> arr){
 node* head=new node(arr[0]);
 node* mover= head;
 for(int i=1;i<arr.size();i++){
node* temp= new node(arr[i]);
 mover->next=temp;
    mover=temp;
 }
 return head;
}

node* insert_before_head(node* head,int val){ 
node* temp= new node(val,head); /*temp value is val and temp next is head*/
return temp;

/*instead of writing the above two line u can also write */
//return new node(val,head);
}

node* insert_tail(node*head,int val){
    if(head==NULL){
      return new node(val); /*the ll was empty and u insert one element to it */  
    }
node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
/*if the while condition fails then it will execute the next line of code*/
node * newnode= new node(val); /*the new inserted node contain the val and its next point to nullptr if u wanna write then write nullptr else u can avoid writing it as it will automatically understand*/
temp->next=newnode;
return head;
}

node* insert_at_K_pos(node* head,int val,int k){
    /*for this the value should be (1 to 1+k) if  */
if(head==NULL){ /*there no element in the ll*/
    if(k==1){ /*if no elemenet in the ll then it will be placed in the first place therefore k==1*/
        return new node(val); /*insert the val */
    }
    else return NULL;
}

if( k==1){ /*inserting at place of 1st element i.e index one*/
node* temp=new node(val,head);
return temp;
}
/*for k<=2 cases*/
int count=0; 
node* temp=head;
while (temp!=NULL)
{
    count++;
    if(count==k-1){ /*if k=3 then the operation will start from 2 itself only*/
        node * x= new node(val); /*create new node insert the val*/
        x->next=temp->next;/*next of x will be */
        temp->next=x;
        break;

    }

    temp=temp->next;
}
 
return head;

}

node * insert_ele_before_val_x(node* head,int ele,int val){

if(head==NULL)
return NULL;/*if ll is empty u can never insert a val before it*/

if (head->data==val)
{
    return new node(val,head);
}
node* temp=head;
bool found=false; /*if data is not given in the ll*/
while (temp->next!=NULL)
{
    
    if(temp->next->data==val){ /*if k=3 then the operation will start from 2 itself only*/
        node * x= new node(ele); /*create new node insert the val*/
        x->next=temp->next;/*next of x will be */
        temp->next=x;
        break;

    }

    temp=temp->next;
}
 if(found==false){
    cout<<"element not found"<<endl;
 }
return head;


}

int print(node* head){
    
while(head!=NULL){

cout<<head->data<<" ";
head=head->next;

}

cout<<endl;
}


int main(int argc, char const *argv[])
{
vector<int> arr={2,5,8,7};
 node * head= convert_to_ll(arr);
// head= insert_on_head(head,4);
/*or like this*/
// head=new node(100,head);
// head=insert_tail(head,66);
// head =insert_at_K_pos(head,99,2);
head=insert_ele_before_val_x(head,100,7);
print(head);
    return 0;
}
