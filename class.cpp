#include<iostream>
using namespace std;

class student{
    int a,b,c;
    public:
        int d,e;
        void input(int x,int y,int z);
        void display();
}ayush111;

void student::input(int x,int y,int z){
    a=x,b=y,c=z;
}
void student::display(){
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
}

int main(){
    student ayush;
    ayush.display();
    ayush111.d=122;
    ayush111.e=144;
    ayush111.input(12,13,44);
    ayush111.display();
    return 0;
}