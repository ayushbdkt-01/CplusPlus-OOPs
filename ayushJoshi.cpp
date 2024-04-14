//multipal inheritance..//
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    void setdata()
    {
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the age of the student"<<endl;
        cin>>age;
    }
    void display()
    {
        cout<<"name of the student is "<<name<<endl;
         cout<<"age"<<age<<endl;
    }
};
class boy
{
    public:
    string name;
    int age;
    void teradata()
    {
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the age of the student"<<endl;
        cin>>age;
    }
    void displaydata()
    {
        cout<<"name of the student is "<<name<<endl;
        cout<<"age"<<age<<endl;
    }
};
class deived : public student,public boy{
    
};
int main()
{
    deived obj1;
    obj1.setdata();
    obj1.teradata();
    obj1.display();
    obj1.displaydata();
    return 0;
}