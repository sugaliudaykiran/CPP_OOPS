#include<bits/stdc++.h>
using namespace std;

class Myclass{
    public:
        Myclass();
        void PrintPrivate(){
            x = 11;
            cout << x << "\n";
        }
    private:
        int x=10;
    int y; // by default members are comes under private.
};


/* 

    Access specifiers :=
---------------------------
1. Public - class members can be access outside the class..
2. Private - class members can be access no scope outside the class..
3. protected - class members can be only access with help of inherited classes.

*/

Myclass::Myclass(){
    cout << "Hey..!" << "\n";
}

int32_t main(){
    
    Myclass Myobj;
    
    Myobj.PrintPrivate();
    //cout << Myobj.x << " " << Myobj.y << "\n";
    
    return 0;
}