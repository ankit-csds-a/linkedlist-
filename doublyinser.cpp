#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;


    Node(int d)
    {
     this->data=d;
     this->next=NULL;
     this->prev=NULL;

    }
};
void insertnode(Node* &head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

    
}
void insertattail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;


}



void print(Node* &head)
{
   Node* temp =head;
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
     Node* tail=node1;

  // print(head);
   insertnode(head,34);
   print(head);
   insertattail(tail,55);
   print(tail);
   return 0;

    }