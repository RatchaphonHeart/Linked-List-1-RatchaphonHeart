#include <iostream>
using namespace std;

class node
{private:
    int id;
	   string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    void set_next(node*);
   ~node();
     };

node x(0,"");

typedef node* nodePtr;
nodePtr y;

node::~node(){
  cout<<name<<"delete"<<endl;
}

node::node(int Id, string Name)
{
  name = Name;
  id = Id;
  next=NULL;
}
void node::print()
{
   cout<<"ID"<<id<<"Name"<<name<<endl;
}
nodePtr node::get_next()
{
  return next;
}
void node::set_next(node* x)
{
  next = x;
}