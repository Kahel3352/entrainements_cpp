using namespace std;
//contains already string class
#include <iostream>

//defining the Person class
class Person
{
	private:
		//name of the person
		string name; 

		//surname of the person
		string surname;

		//age of the person
		int age;

	public:
		//getters
		string getName();
		int getAge();

		//setters
		void setName(string theName);
		
		//show some informations about the person
		void display();

		//ask user to define the person
		void input();
};
