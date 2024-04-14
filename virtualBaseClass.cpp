#include<iostream>
using namespace std;

class student{
    protected:
        int rn;
    public:
        void setRollNo(int num){
            rn=num;
        }
};


class marks: virtual public student{
    protected:
        int maths;
        int physics;
    public:
        void setMarks(int m,int p){
            maths=m;
            physics=p;
        }
};

class sports: virtual public student{
    protected:
        int score;
    public:
        void setScore(int s){
            score=s;
        }
};

class result : public marks, public sports{
    public:
        void print(){
            cout<<"Roll No.: "<<rn<<endl;
            cout<<"Maths: "<<maths<<endl;
            cout<<"Physic: "<<physics<<endl;
            cout<<"Score: "<<score<<endl;
            int total=maths+physics+score;
            cout<<"Total: "<<total<<endl;
        }
};

int main(){

    result ayush;
    ayush.setRollNo(11);
    ayush.setMarks(90,88);
    ayush.setScore(9);
    ayush.print();
    
    return 0;
}