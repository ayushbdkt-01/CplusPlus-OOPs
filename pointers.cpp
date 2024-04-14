#include<iostream>
using namespace std;
int main(){

    int a=5;
    int* ptr=&a;
    cout<<"a is: "<<*ptr<<endl;
    delete ptr;

    int *p=new int(400);
    cout<<"New value is: "<<*p<<endl;
    delete p;

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"arr[0]: "<<arr[0]<<endl;
    cout<<"arr[1]: "<<arr[1]<<endl;
    cout<<"arr[2]: "<<arr[2]<<endl;
    delete []arr;

    return 0;
}