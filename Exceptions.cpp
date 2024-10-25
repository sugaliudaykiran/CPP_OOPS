#include<bits/stdc++.h>
using namespace std;

int32_t main(){

   try{  // when block to be tested for errors, while it's being executed.
	
	int age = 11;
	if (age >= 18){
		cout << "Access Granted..!" << "\n";
        }else{   
		throw 505;
//  		throw(age);  // throw execuption when a problem is detected.
	}
   }
   

//   catch(int MyNum){
//       cout << "your age: " << MyNum << "\n";
//   }
   
   catch(...){      // block of code, to be executed, if any error occurs in the try block.
       cout << "Access denied - You must at least 18 year old." << "\n";
   }
   return 0;
}