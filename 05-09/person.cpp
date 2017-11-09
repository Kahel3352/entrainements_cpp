#include "person.h"

//implementating the methods of Person
string Person::getName()
{
	return name;
}

void Person::setName(string theName)
{
	name = theName;
}

int Person::getAge()
{
	return age;
}

void Person::display()
{
	cout<<name<<" is "<<age<<" year(s) old"<<endl;
}

void Person::input()
{
	cout<<"name: ";
	//use getLine because cin doesn't work well with strings
	getline(cin, name);
	cout<<"age: ";
	cin>>age;
}
