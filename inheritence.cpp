#include<iostream>
using namespace std;

class employee{
    public:
        int id;
        int salary;
        employee(){}
        employee(int input){
            salary=12000;
            id=input;
        }
        void print(){
            cout<<"salary for id "<<id<<" is: "<<salary<<endl;
        }
};

class programmer: public employee{
    public:
        int code;
        programmer(int input){
            code=9;
            id=input;
        }
        void display(){
            cout<<"Code is: "<<code<<endl;
            cout<<"salary is: "<<salary<<endl;
        }
};
int main(){
    employee ayush(1),joshi(2);
    ayush.print();
    joshi.print();

    programmer maksood(12);
    maksood.display();
    return 0;
}