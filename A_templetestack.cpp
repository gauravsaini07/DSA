#include<bits/stdc++.h>
using namespace std;


template<typename T>
class pair{
    /*
    int x;
    int y; */

    T x;
     T y;

    public:
    void setx(T x){
        this->x=x;

    }
    int getx(){
        return x;
    }
    void sety( T y){
        this->y=y;
    }
    int gety(){
        return y;
    }
};

int main(){

    pair<int> p1;
    p1.setx(10);
    p1.sety(30);
    cout<<p1.getx()<<""<<p1.gety()<<endl;  

    pair<double> p2;
    p2.setx(20);
    p2.sety(40);
     cout<<p1.getx()<<""<<p1.gety()<<endl;  
}


