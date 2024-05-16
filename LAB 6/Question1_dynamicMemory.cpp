#include<iostream>
#include<string>
using namespace std;
int main(){
    int* dynamicInt=new int;
    string* dynamicString=new string;
    cout<<"ENTER THE VALUE OF THE INTERGER: "<<endl;
    cin>>*dynamicInt;
    cout<<"ENTER THE VALUE OF YOUR STRING: "<<endl;
    cin>>*dynamicString;
       cout<<"THE ALLOCATED VALUE OF INTEGER IS: " <<*dynamicInt<<endl;
    cout<<"THE ALLOCATED VALUE OF THE STRING: " <<*dynamicString<<endl;
        delete dynamicInt;
    delete dynamicString;
    return 0;

}