#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
     int data;
     Node *next; 

    public:

    Node(int data1)
    {
        data=data1;
        next=NULL;
    }
};


Node* createList(vector<int>vec)
{
    Node *head=new Node(vec[0]);
    Node *temp;
    temp=head;
    
    int i=1;
    while(i<vec.size()) 
    {
        Node *p= new Node(vec[i]);
        temp->next=p;
        temp=p;
        i++;
    }
    return head;
}

void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data;
        head=head->next;
    }
}


Node *insertBegin(Node *head)
{
    Node *p=new Node(6);
    p->next=head;
    head=p;
}


Node *insertLast(Node *head)
{
    Node *temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

 Node *p=new Node(8);

 temp->next=p;

    return head;


}


Node * insertPos(Node *head, int position)
{
    Node *temp=head;

    int i=1;

    while(i<position-1)
    {
        
           temp=temp->next;
           i++;
           
    }

    Node *p=new Node(10);

    p->next=temp->next;
    temp->next=p;

    return head;
}


Node *deleteBegin(Node *head)
{
   if(head==NULL || head->next==NULL)
   {
     return NULL;
   }

    Node *temp=head;

    head=head->next;
    
    temp->next=NULL;

    free(temp);


    return head;


    
}


Node *deleteLast(Node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        free(head);
        return 0;
    }

    Node *temp=head;

    while(temp->next->next != NULL)
    {
        temp=temp->next;
    }
    Node *q=temp->next;

    temp->next=NULL;

    free(q);

    return head;

}

Node *deletePos(Node *head, int position)
{
    if(head==NULL)  return NULL;

    if(position==1)
    {
        head=deleteBegin(head);
        return head;
    }


    Node *temp=head;
    int i=1;
    while(i<position-1)
    {
        temp=temp->next;
        i++;
    }

    Node *q=temp->next;
    temp->next=q->next;
    q->next=NULL;
    free(q);

    return head;
}




int main()
{
    vector<int>vec = {1,2,3,4,5};
    Node *head= createList(vec);

     displayList(head);



     head=insertBegin(head);

     cout<<endl;

      displayList(head);

    head=insertLast(head);

    cout<<endl;

     displayList(head);
    //  cout<<111;
    head=insertPos(head, 4);
    // cout<<22222;
     cout<<endl;

     displayList(head);
    //  cout<<3333;


    head=deleteBegin(head);

    cout<<endl;

     displayList(head);

     head=deleteLast(head);
     cout<<endl;

     displayList(head);

     head=deletePos(head, 3);

    cout<<endl;

     displayList(head);
    return 0;


}