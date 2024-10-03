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

   Node(int value, Node* next)
   {
      data = value;
      next = nullptr;
   }
};

int main()
{

// Node* y = &x;
vector<int> vec = {1,2,3,4};
Node* y = new Node(vec[0],nullptr);

cout<<y.data; // throw an error 

    return 0;
}
