#include<bits/stdc++.h>
using namespace std;

// Mulitple Inheritance - A class can being derived from two or more base class.

class MyFather{
    public: 
        void Myfatherfunction(){
            cout << "Hi this father function" << "\n";
        }
        int age = 51;
};

class MyMother{
    public:     
        void MyMotherfunction(){
            cout << "Hi this mother function" << "\n";
        }
        int age=41;
};

class Myself:public MyFather, public MyMother{
    public: 
        int age=11;
        
};

int32_t main(){

   Myself Myobj;
    cout << "My age: "<< Myobj.age << "\n";
    cout << "My fater's age: " << Myobj.MyFather::age << "\n";
    cout << "My Mother's age:" << Myobj.MyMother::age << "\n";
    
    return 0;
}