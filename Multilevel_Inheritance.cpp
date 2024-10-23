#include<bits/stdc++.h>
using namespace std;

class MyBase{
    public:
        void helloWorld(){
            cout << "Hii....!" << "\n";
        }
};

class Myderived: public MyBase{
    public: 
        void hiWorld(){
            cout << "Hloo...!" << "\n";
        }
};

int32_t main(){
    
    Myderived Myobj;
    
    Myobj.helloWorld();
    
    return 0;
}


// ===========================================================


#include<bits/stdc++.h>
using namespace std;

// mulitlevel Inheritance - One class is derived from another class, which is alredy derived for a class.

class MyGrandparent{
    public:
        void MyFunction(){
            cout << "Hii..!" << "\n";
        }
        int age=60;
};

class MyParent: public MyGrandparent{
    public: 
        void Hi(){
            cout << "Hlo World..!" << "\n";
        }
        int age=41;
};


class Myself: public MyParent{
    public:
        // int age = 19;
};


int32_t main(){
    
    Myself myObj;
    
    cout << myObj.age << "\n";
    
    myObj.MyFunction();
    
    
    return 0;
}