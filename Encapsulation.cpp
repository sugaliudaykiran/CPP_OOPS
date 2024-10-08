#include<bits/stdc++.h>
using namespace std;

class EmployeeTable{
    //private:
    int salary;
    // Encapsulation: Hiding the senstivite data from the End - user, here "salary" is private attribute, which used in public methods by using Encapsulation.
    public:
        void setFresherSalary(int s){ // set methods
            salary = s;
        }
        
        
        void displaySalary(){ // get methods
            cout << "Fresher Salary: " << salary << "\n";
        }
};


int32_t main(){
    
    EmployeeTable E1;
    
    E1.setFresherSalary(10000);
    
    E1.displaySalary();
    
    return 0;
}
