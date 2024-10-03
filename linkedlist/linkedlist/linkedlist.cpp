#include<bits/stdc++.h>
using namespace std;


class Node
{
    public:
       int data;
       Node *next;

    public:
        Node(int value)
        {
            data = value;
            next = NULL;
        }
};


Node* createLinkedlist(vector<int> vec)
{
    Node* head = new Node(vec[0]);
    Node* temp;
    temp = head;

    for(int i =0; i<vec.size();i++)
    {
        Node* p = new Node(vec[i]);
        temp->next = p;
        p = temp;
    }

    return head;
}
int main()
{

 Node *head = new Node(4);
    return 0;
}