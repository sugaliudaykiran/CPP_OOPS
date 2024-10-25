#include<bits/stdc++.h>
using namespace std;

void if_conditions(int age){
	if (age >= 18){	
		cout << "if condition is true..!" << "\n";
	}else{
		cout << "if condition is false..!" << "\n";
	}
}


void if_else_if_conditions(int grade){
	if (grade <= 19){	
		cout << "your Grade is F" << "\n";
	}else if (grade > 19 && grade <= 35){
		cout << "your Grade is E" << "\n";
	}else if (grade > 36 && grade <= 45){
		cout << "your Grade is D" << "\n";
	}else if (grade > 46 && grade <= 55){
		cout << "your Grade is C" << "\n";
	}else if (grade > 56 && grade <= 75){
		cout << "your Grade is B" << "\n";
	}else if (grade > 76 && grade <= 100){
		cout << "your Grade is A" << "\n";
	}else{
		cout << "your Grade is out of range..!" << "\n";
	}
}

void nested_switch_condition(int x, int y){
	switch(x){
		case 1: 
			cout << "value of x is 1" << "\n";
			switch(y){
				case 1: 
					cout << "value of y is 1"<< "\n";
					break;
				default: 
					cout << "value of y is 0" << "\n";
			}
			break;
		default: 
			cout << "value of x is 0" << "\n";
	}
}

void switch_case_condition(int day){

	switch(day){
		case 1: 
			cout << "Monday" << "\n";
			break;
		case 2: 
			cout << "Tuesday" << "\n";
			break;
		case 3: 
			cout << "Wednesday" << "\n";
			break;
		case 4: 
			cout << "Thursday" << "\n";
			break;
		case 5: 
			cout << "Friday" << "\n";
			break;
		case 6: 
			cout << "Saturday" << "\n";
			break;
		case 7: 
			cout << "Sunday" << "\n";
			break;
		default:
			cout << "Choice the days btw 1-7 for choosing the weekday." << "\n";
	}
}


int32_t main(){

	int age;
	cout << "Enter the Age: ";
	cin >> age;
	
	if_conditions(age);
	cout << "\n";

	int grade_marks;
	cout << "Enter your Grade Marks: ";
	cin >> grade_marks;
	

	if_else_if_conditions(grade_marks);
    cout << "\n";
    
    
    int day;
    cout << "Enter the day to be choosen: ";
    cin >> day;
    
    switch_case_condition(day);
    cout << "\n";
    nested_switch_condition(0, 0);
    
	return 0;
}