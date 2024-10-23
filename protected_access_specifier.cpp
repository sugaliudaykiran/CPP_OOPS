#include<bits/stdc++.h>
using namespace std;

// protected  - similar to the private, but can be accessable outside the class with help of inheritence.

class Mybase{
    protected:
        int salary;
        void helo(){
            cout << "Hello World..!" << "\n";
        }
};

class Myderived: public Mybase{
    public:
        void putSalary(int s){
            salary = s;
        }// using getter and setter 
        int getSalary(){
            return salary;
        }
        void GetHelo(){
            helo();
        }
};

int32_t main(){

    Myderived Myobj;
    
    Myobj.putSalary(100);
    
    cout << "fetching the salary by using protected: " << Myobj.getSalary() << "\n";
    
    Myobj.GetHelo();
    
    return 0;
}