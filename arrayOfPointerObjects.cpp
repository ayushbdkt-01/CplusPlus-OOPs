#include<iostream>
using namespace std;

class item{
    int id;
    int price;
    public:
        void input(int a,int b){
            id=a;
            price=b;
        }
        void display(){
            cout<<"Item Id: "<<id<<endl;
            cout<<"Item Price: "<<price<<endl;
        }
};



int main(){
    int size=3;
    item *p=new item[size];
    for (int i = 0; i < size; i++)
    {
        int a,b;
        cout<<"Enter id and price for item "<<i+1<<": ";
        cin>>a>>b;
        (p+i)->input(a,b);
    }

    for (int i = 0; i < size; i++)
    {
        (p+i)->display();
    }

    
    return 0;
}