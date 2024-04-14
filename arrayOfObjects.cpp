#include<iostream>
using namespace std;

class employee{
    int salary;
    int id;
    public:
        void input(){
            salary=1000;
            cout<<"Enter id: ";
            cin>>id;
        }
        void display(){
            cout<<"The id is "<<id<<" ans the salary of the employee is: "<<salary<<endl<<endl;
        }
};
int main(){
    employee e[100];
    int count;
    cout<<"Enter number of employees in the company: ";
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        e[i].input();
        e[i].display();
    }
    
    return 0;
}