#include "person.h"

//implementating the methods of Person
Person::Person()
{
	name = "Dupond";
	surname = "Jean";
	age = 99;
}

Person::Person(string hisName, string hisSurname, int hisAge)
{
	name = hisName;
	surname = hisSurname;
	age = hisAge;
}

string Person::getName()
{
	return name;
}

string Person::getSurname()
{
	return surname;
}

void Person::setName(string theName){
	name = theName;
}

int Person::getAge()
{
	return age;
}

void Person::display()
{
	cout<<"Nom: "<<name<<"	Prénom: "<<surname<<"	Âge: "<<age<<endl;
}

void Person::input()
{
	cout<<"Prénom: ";
	//use getLine because cin doesn't work well with strings
	getline(cin, name);
	cout<<"Nom: ";
	getline(cin, surname);
	cout<<"Âge: ";
	cin>>age;
}
