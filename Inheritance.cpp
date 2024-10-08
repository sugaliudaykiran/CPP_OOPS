#include<bits/stdc++.h>
using namespace std;

// base class
class Mybase{
    public:
        int var1 = 100;
        
        void myMethod(){
            cout << "Hey..!" << "\n";
        }
        
        void displaybaseProtected(){
            cout <<"Displaying protected var from the base class: " <<var4 << "\n";
        }
        
        void displayProtected(){
            cout <<"Displaying protected var from the base class with same method name: " <<var4 << "\n";
        }
        void displayPrivate(){
            cout <<"Displaying private var from the base class: " << var3 << "\n";
        }
    private: 
        int var3 = 10;
    protected:
        int var4 = 500;
};

// derived class
class Myderived : public Mybase{
    public: 
        int var2 = 200;
        
        void displayProtected(){
            var4+=1;
            cout <<"Displaying base class protected var from the derived class: " << ++var4 << "\n";
        }
        
        /*
        
        ** bcz "private attributes or method" can't be access outside the class, even it's derived from the base class.
        
        void DisplayPrivateDerived(){
            cout << var3 << "\n";
        }
        
        */
};


int32_t main(){
    
    Myderived Myobject;
    
    Myobject.myMethod(); // calling the method base class function.
    
    cout << "var of derived class: " << Myobject.var2 << "\n" << "var of base class: " << Myobject.var1 << "\n";
    
    // cout << Myobject.var4 << "\n";

    
    Myobject.displayPrivate();
    
    Myobject.displaybaseProtected();
    
    Myobject.displayProtected();
    
    return 0;
}


/*

Inheritance - To inherit attributes and methods from one class to another class.

** They are of 2 types - 

1. Base class - the class that inherited from.

2. Derived class - the class that inherit from another class.

** If both classes method has same naming convension then "derived class method" will override the "base class method".  

*/
