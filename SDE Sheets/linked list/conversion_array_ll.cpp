// #include<bits/stdc++.h>
// using namespace std;

//     class node{
//     public: //its very neccsary inoder for declaring the as new node() otherwise it will give error.
//     int data;
//     node* next;

//     node(int data1, node*next1=nullptr){
//          data=data1;
//          next=next1;
//     }
//     };
// node* convert_to(vector<int> arr){
//         node* head= new node(arr[0]); /*head at arr[0]*/
// node* mover=head;

// for (int i = 1; i < arr.size(); i++)
// {
//     node* temp= new node(arr[i]);
//     mover->next=temp;
//     mover=temp;
// }
// return head;
//     }

// /*length of a ll*/

// int lenght_of_ll(node*  head){ /*here u will always be given head*/
//  int count=0;
//   node* temp=head; /*same code as for travelsal of ll just give count at the end*/
//  while (temp)
// {
// cout<<temp->data<<endl; 
//  temp=temp->next;
//  count++; 
// }

// return count;
// }


// int check_if_in_the_ll(node* head,int val){ /*will be given head and value which u have to find*/
//     /*always firstly write the code for the traversal*/
 
//     node* temp=head;
//     while(temp){
//     //    cout<< temp->data;/*u can skip this line as we dont need to print the ll this time*/
//         temp=temp->next;
//         if(val==temp->data){
//             cout<<"no.is present in the ll"<<endl;
//         }
        
//     }
//    return 0;

// }     

// int main(int argc, char const *argv[])
// {
// vector<int> arr={2,5,8,3,4};
// node* head= convert_to(arr);
// // cout<<head->data;


// /*strivers method for travesal of ll*/
// // node* temp=head; /*puting temp var at head*/
// // /*while (temp)*/  
// // for (int i = 0; i < arr.size(); i++)
// // {
// // cout<<temp->data<<endl; 
// //  temp=temp->next; 
// // }

//  cout<<lenght_of_ll(head)<<endl;

// cout<<check_if_in_the_ll(head,  4);
//     return 0;
// }



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

node * covert_to_ll(vector<int> arr){
 node* head= new node(arr[0]);
 node* mover=head;

 for (int i = 1; i < arr.size(); i++)
 {
    /* code */
    node* temp=new node(arr[i]);
    mover->next=temp;
    mover=temp;
 }
 return head;
 
}

int lenght_ll(node* head){
    if(head==NULL) return 0;

int count=0;
node* temp=head;
while(temp){
    cout<<temp->data<<" ";
temp=temp->next;
count++;
}
return count;
}


int main(int argc, char const *argv[])
{
    vector<int> arr={2,5,6,8,7,10};
    node*head=covert_to_ll(arr);
    cout<<lenght_ll(head);
    
    // cout<<head->next->next->data;
    return 0;
}




