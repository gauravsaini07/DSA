#include<bits/stdc++.h>
using namespace std;


class Node {
   public:
     int data;
     Node *next;

     Node(int data){
       this->data = data;
       next = NULL;
     }
};

void print(Node *head){
  
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* takeInput(){
   int data;
   cin>>data;
   Node *head = NULL; 
   Node *tail = NULL;   
   while(data != -1){
 
    Node *n = new Node(data);
    
    if(head == NULL){
        head = n;   
        tail = n;
    }else {
        tail -> next = n;   
        tail = n;            
    }

    cin>>data;
   }
   return head;

}
 Node* insertNode(Node *head,int i,int data)
{
    Node *n = new Node(data);
    int count=0;
    Node *temp=head;

       if(i==0){
        n->next=head;
        head=n;
        return head;

    }

    while(temp!=NULL && count<i-1){
        temp=temp->next;
        count++;
     
    if(temp!=NULL){
    Node *a=temp->next;
    temp->next=n;
    n->next=a;
    }
    return head;
    
}
}

int main(){
 

   Node *head = takeInput();
   print(head);
   int i,data;
   cin>>i>>data;
   head=insertNode(head,i,data);
   print(head);

   return 0;
}
