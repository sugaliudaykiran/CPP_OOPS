#include<bits/stdc++.h>
using namespace std;


// class
class Myclass{
    public:
        int age;
        string name;
        
        // method-01 - Inside class definition
        void Mymethod(){
            cout <<"Age of "<< name <<" is " << age << "\n";
        }
        
        // method-02 - Outside class definition
        void Mymethod2();
};

void Myclass::Mymethod2(){
    
    cout << "Heyy, I am outside the class..!" <<  "\n";
}



int32_t main(){
    
    // object
    Myclass FirstPerson;
    FirstPerson.age = 21;
    FirstPerson.name = "faiz";
    
    cout << FirstPerson.name << "\n";
    
    // calling method..
    FirstPerson.Mymethod();
    FirstPerson.Mymethod2();
    
    return 0;
}