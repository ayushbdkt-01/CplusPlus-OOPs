#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"Enter number of Students: ";
    cin>>n;
    cout<<"Enter roll no. of students: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
     for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }

     for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}