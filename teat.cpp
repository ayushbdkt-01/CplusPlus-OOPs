#include<iostream>
using namespace std;

class student{
    string name;
    int rn;
    int id;
    public:
        student(string n,int r,int i){
            name=n;
            rn=r;
            id=i;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll no.: "<<rn<<endl;
            cout<<"Id: "<<id<<endl;
        }
};

class faculty{
    string name;
    int code;
    int salary;
    public:
        faculty(string n,int c,int s){
            name=n;
            code=c;
            salary=s;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Code: "<<code<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

class person:public student,public faculty{
    public:
    person(string s,int r,int i,string f,int c,int l):student(s,r,i),faculty(f,c,l){}
        void display(){
            student::display();
            faculty::display();
        }
};

int main(){
    person p("Ayush",11,220111200,"Koranga",1234,12000);
    p.display();
    
    return 0;
}