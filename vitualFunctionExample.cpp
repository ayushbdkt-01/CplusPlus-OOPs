#include<iostream>
using namespace std;
class ayush{
    protected:
        string title;
    public:
        virtual void display(){
            cout<<"Fuck you"<<endl;
        }
};

class ayushVideo: public ayush{
    public:
        int length;
        ayushVideo(string s,int l){
            title=s;
            length=l;
        } 
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Length: "<<length<<endl;
        }
};

class ayushText: public ayush{
    public:
        int words;
        ayushText(string s,int w){
            title=s;
            words=w;
        } 
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Words: "<<words<<endl;
        }
};

int main(){
    string title;
    int words,length;

    title="AyushKiVideo";
    ayushVideo a(title,100);
    a.display();

    title="AyushKiText";
    ayushText b(title,20);
    b.display();

    ayush* ptr[2];
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}