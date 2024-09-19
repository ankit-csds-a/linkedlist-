#include<iostream>
using namespace std;
 class Node
 {
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

 };
 void inserttail(Node* &tail,int d)
 {
   Node* temp=new Node(d);
   tail->next=temp;
   tail=temp;

 }
 void insertnode(Node* &head,int d)
 {
      Node* temp= new Node(d);
      temp->next=head;
      head=temp;
 }
 void insertatmid(Node* &head,int position,int d)
 {
   Node* temp=head;
   int c=1;
   while(c<position)
   {
      temp=temp->next;
      c++;
   }
   Node* ins=new Node(d);
   ins->next=temp->next;
   temp->next=ins;


 }
void print(Node* &head)
{
   Node* temp=head;
   while( temp!=NULL)
   {
      cout<<temp->data<<" ";
      temp=temp->next;

   }
   cout<<endl;


}

 int main()
 {
    Node* node1= new Node(10);
    
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    print(head);
    //insertnode(head,12);
   // print(head);
   // insertnode(head,34);
    //print(head);

    inserttail(tail,12);
    print(head);
    inserttail(tail,34);
    print(head);
    insertatmid(head,2,55);
    print(head);

 }