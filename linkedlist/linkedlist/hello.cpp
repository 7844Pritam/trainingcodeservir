#include <bits/stdc++.h>
using namespace std;

// array compare with linkedlist
   // on the base of data type 
   //size based we can incrase and w can decrease 
// 1. contigueous 

// how we can know if we know address

// what is liknded list 
// whre is it used  undo redo in browser 
// class in c++ / oops 
// memory used space 
// diff b/w node and node*
// array 

int n  = 2;
int* y = &n;

// int type pointing to n



class Node
{
   public:
   int data;
   Node* next;

   Node(int value)
   {
      data = value;
      next = nullptr;
   }
};

int main()
{
   // Node a1;
   // a1.data = 4;  // it is static way of storing data 
   // a1.next = nullptr;  // it is static way of storing data 


   // in dynamic way 
   
   Node* head ;
   head = new Node(4);
   // head->data = 4;
   // head->next = nullptr;
   

   // insertion 
   // deletion 
   // search 
   // updata 


    return 0;
}
