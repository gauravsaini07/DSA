/*
GAURAV SAINI CODE
PRINT SIMPLE LL

*/


#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *Next;
   
   
    Node (int data){
        this->data=data;
        Next=NULL;
    }
};


int main(){
    
    Node n1(12); //statically way to create object
    Node *head=&n1; 
    Node n2(15); 
    n1.Next= &n2;
   cout<<n1.data<<"->"<<n2.data;
   Node *n3=new Node(17);  //dynamically 
   
   Node *n4=new Node(20);
    n3-> Next=n4;

    return 0; 
}