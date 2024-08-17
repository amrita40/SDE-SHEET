#include<bits/stdc++.h>
#include<iostream>

using namespace std;


//pair
// int main(int argc, char const *argv[])
// {
//     pair<int,int> p={1,3};
//     // cout<<p.first << endl<<p.second<<endl;
//     pair<int,pair<int,int>> z={3,{5,6}};
//     // cout<<z.first<<z.second.first<<z.second.second;
//     pair<int,int> a[]={{1,3},{6,4}};
//     cout<<a[1].first<<endl<<a[0].second;
    
//     return 0;
// }


//vectors

int main(int argc, char const *argv[])
{
    // vector<int>v;
    // v.push_back(1); //both the lines work same it insert values in the vector but the emplace one is litte faster search for the reason
    // v.emplace_back(2);
    

    // vector<pair<int,int>> a;
    // a.push_back({1,2});
    // a.emplace_back(3,4);

vector<int> vi(5,100); //output:{100,100,100,100,100}
// vector<int> ve(5); //declare 5 places in the vec but can be modify if want to add 
// vector<int> v1(5,20);//output:{20,20,20,20,20}
// vector<int> v2(v1); //same will be copied in v2 from v1

//accessing the elements from vector
// /*i) same as array */ cout<<v[0];
//using iterator

vector<int>::iterator it=vi.begin();//when we are writing v.begin it is actually pointing to the memory address of that element and not the element
// it++; //here the iterator shifted to another mem address
// cout<<*(it)<<" "<<endl; //whenever u put star at in cpp it print the element
// //for printing the complete value
// for(int i=0;i<6;i++){
//     cout<<*(it)<<" ";
// }

// it+=2; //here the adress shifts two places ahead
// cout<<*(it)<<" ";



// vector<int>::iterator it=vi.end();
/*end points to the memory location right after the last element and then use it-- for accesing thr mem address*/
/*reverse end will reverse the elements and will point right after the last element*/

/*reverse begin will reverse the elements and then use it++ to get the element*/


// vector<int>::iterator it=vi.rend(); //reverse end
// vector<int>::iterator it=vi.rbegin(); //reverse begin
  
// cout<<vi.back()<<" "; //last element of the vector

//for loop for accessing the elements

// for ( vector<int>:: iterator it =vi.begin();it!=vi.end();it++){
// cout<<*it<<" ";
// }

//for not writng vector<int>:: iterator we can use auto as it automatically identify the datatype

// for ( auto it =vi.begin();it!=vi.end();it++){
// cout<<*it<<" ";
// }

// //by using for each loop
// for(auto it:vi){
//     cout<<it<<" ";  //remember no * here
// }

// vi.erase(vi.begin()+1); //will erase the 1st index element
//{10,20,12,23,35}
vi.erase(vi.begin()+2,vi.begin()+4); //output:{10,20,35} [start,end) end is not included i.e vi.begin()+4 i.e 35 is not included and it is till 23 only and it gets deleted

//insertion

vector<int>vi(2,100); //{100,100}
vi.insert(vi.begin(),300);//{300,100,100}

vi.insert(vi.begin()+1,2,10);//{300,10,10,100,100}


vector<int> copy(2,50); //{50,50}
vi.insert(vi.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

//{10,20}
cout<<vi.size(); //2

//{10,20}
vi.pop_back();//10

// v1.swap(v2);//v1=v2;v2=v1

// v1.clear();// clear the entire vector

// cout<<v.empty();

return 0;
}



