#include<iostream>
using namespace std;

class shop{
    int item[10];
    int price[10];
    int count;
    public:
        void startCount();
        void input();
        void display();
};

void shop::startCount(){
    count=0;
}

void shop::input(){
    cout<<"Enter id for item no. "<<count+1<<": ";
    cin>>item[count];
    cout<<"Enter price for item no. "<<count+1<<": ";
    cin>>price[count];
    count++;
}

void shop::display(){
    for (int i = 0; i < count; i++)
    {
        cout<<"Price of item for id "<<item[i]<<" is: "<<price[i]<<endl;
    }
    
}
int main(){
    shop s;
    s.startCount();
    s.input();
    s.input();
    s.input();
    s.display();
    return 0;
}