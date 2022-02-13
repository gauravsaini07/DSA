/* DYNAMICALLY CREATED STACK */



#include<bits/stdc++.h>
using namespace std;

class stackusingarray{
    private:
    int *data;     //dynamically created array  int *data = new int[size];
    int nextindex;
    int capacity;

    public:
    stackusingarray(){
        data=new int[4];
        nextindex=0;
        capacity=4;
    }
    /*
    for returning size of element present in stack
    */
int size(){
    return nextindex;
}
bool isEmpty(){
    return nextindex==0;

    /* alternative way to define same isEmpty
    if(nextindex==0){
        return true;
    }
    else{
        return false;
    }
    */
}
/* insert dynamically  element into stack to remove constraint of size on stack*/
void push(int element){
    if(nextindex==capacity){
        int *newdata=new int[2*capacity];

       for(int i=0;i<capacity;i++){
           newdata[i]=data[i];
       }
       capacity*=2;
       delete [] data;
       data=newdata;
    }
   
         data[nextindex]=element;
         nextindex++;
    
}
/*to delete an element*/
int pop(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;
        return INT_MIN;
    }
    nextindex--;
    return data[nextindex];
}

/* top an element*/
int top(){
     if(isEmpty()){
        cout<<"stack is empty"<<endl;
          return INT_MIN;
     }
    return data[nextindex -1];
}
};



int main(){
    stackusingarray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;


    return 0;
}
