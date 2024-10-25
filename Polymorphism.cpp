#include<bits/stdc++.h>
using namespace std;

class Animal{  // Polymorphism - allows objects of different classes to be treated as objects of a common base class, enabling dynamic behavior.
   public:
   	void animalSound(){	
		cout << "The Animal makes sounds.." << "\n";
	}
};

class Cat: public Animal{
   public:
	void animalSound(string cat){
		cout << "Cat sounds: Mewo Mewoo.." << "\n";
	}
};

class Pig: public Animal{
   public:
	void animalSound(){
		cout << "Pig sounds: Wee Wee.." << "\n";
	}
};

int32_t main(){
   
   Animal MyAnimal;
   Cat MyCat;
   Pig MyPig;

   MyAnimal.animalSound();
   MyCat.Animal::animalSound(); // using specifing the base class name and scope of the method.
   MyCat.animalSound("Tom");
   MyPig.animalSound();

   return 0;
}
