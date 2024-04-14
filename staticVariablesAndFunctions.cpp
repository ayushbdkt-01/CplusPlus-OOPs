#include<iostream>
using namespace std;

class student{
    int roll;
    static int count;
    public:
        void input(){
            cout<<"Enter roll number: ";
            cin>>roll;
            count++;
        }
        void display(){
            cout<<"Roll number of student "<<count<<" is "<<roll<<endl;
        }
        static void printCount(){
            cout<<"count is: "<<count<<endl;
        }
};
int student:: count;
int main(){
    student ayush,joshi,maksood;

    ayush.input();
    ayush.display();
    student::printCount();

     joshi.input();
    joshi.display();
    student::printCount();

     maksood.input();
    maksood.display();
        student::printCount();

    return 0;
}