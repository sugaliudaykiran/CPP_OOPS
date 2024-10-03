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

int32_t main(){
    
    // obj - assigned value with constructor..
    Myclass Myobj(y=1, x=21, z="faiz");
    
    return 0;
}

