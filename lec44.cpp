#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertdata(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;

}
void printnode(node* &head)
{
    node*temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
   node* node1=new node(10);
   //cout<<node1->data<<endl;
  // cout<<node1->next<<endl;
 
    node* head=node1;
    printnode(head);

    insertdata(head,12);
    printnode(head);
     insertdata(head,15);
    printnode(head);



}