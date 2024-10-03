#include<bits/stdc++.h>
using namespace std;

class Myclass{
    public:
        int roll;
        int age;
        string name;
        // Constructor Parameters - passing the value which will set the value of the corresponding attributes 
        Myclass(int x, int y, string z){
            roll=x, age=y, name=z;
            
            cout << "name: " << name << "\nroll: "<< roll << "\nage: "<< age << "\n";
        }
};

class My2class{
    public:
        string lastName;
        string firstName;
        My2class(string lname, string fname);
};

My2class::My2class(string lname, string fname){
    lastName=lname, firstName=fname;
}

int32_t main(){
    
    // obj - assigned value with constructor..
    Myclass Myobj(1, 21, "faiz");

    //
    My2class My2obj("faiz", "MK");
    cout << My2obj.firstName << " " << My2obj.lastName << "\n";
    return 0;
}

