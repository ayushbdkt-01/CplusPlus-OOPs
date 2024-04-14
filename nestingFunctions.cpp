#include<iostream>
using namespace std;
class binary{
        string b;
        void check();
    public:
        void input();
        void display();
};

void binary::input(){
    cout<<"Enter a binary number: ";
    cin>>b;
}

void binary::check(){
    for(int i=0;i<b.length();i++){
        if(b[i]!='0' && b[i]!='1'){
            cout<<"Not Binary"<<endl;
            exit(0);
        }
    }
}

void binary::display(){
    check();
    cout<<"The binary number is: "<<b<<endl;
}
int main(){
    binary num;
    num.input();
    num.display();
    return 0;
}