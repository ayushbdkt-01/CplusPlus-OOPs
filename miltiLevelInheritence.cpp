#include<iostream>
using namespace std;

class studemt{
    protected:
        int rn;
    public:
        void setRN(int roll){
            rn=roll;
        }
        void getRN(){
            cout<<"Roll number is: "<<rn<<endl;
        }
};

class exam : public studemt{
    protected:
        int maths;
        int physics;
    public:
        void setMarks(int m,int p){
            maths=m;
            physics=p;
        }
        void getMarks(){
            cout<<"Maths: "<<maths<<endl;
            cout<<"Physics: "<<physics<<endl;
        }
};

class result : public exam{
    float percent;
    public:
        void display(){
            getRN();
            getMarks();
            cout<<"Percentage  is: "<<(maths+physics)/2.0<<endl;
        }
};

int main(){
    result ayush;
    ayush.setRN(420);
    ayush.setMarks(90,95);
    ayush.display();
    
    return 0;
}