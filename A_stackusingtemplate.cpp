


#include<bits/stdc++.h>
using namespace std;
template<typename T>
class stackusingarray{
    private:
    T *data;     
    int nextindex;
    int capacity;

    public:
    stackusingarray(int totalsize){
        data=new T[totalsize];
        nextindex=0;
        capacity=totalsize;
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
/* insert element into stack*/
void push(T element){
    if(nextindex==capacity){
        T *newdata=new T[2* capacity];
        for(int i=0;i<capacity;i++){
            newdata[i]=data[i];
        }
        capacity*=2;
        delete[]data;
        data=newdata;
    }
   
         data[nextindex]=element;
         nextindex++;
    
}
/*to delete an element*/
T pop(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    nextindex--;
    return data[nextindex];
}

/* top an element*/
T top(){
     if(isEmpty()){
        cout<<"stack is empty"<<endl;
          return 0;
     }
    return data[nextindex -1];
}
};

int main(){
    stackusingarray<int> s(4);
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
