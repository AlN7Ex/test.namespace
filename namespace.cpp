#include <iostream>
#include <string>
#include "namespace.h"

struct symbol
{
	int a;
	int b;
};

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	int salary;
	unsigned short age;

	symbol Some;
	Some.a = 15;
	Some.b = 20;

	people::name Test;

	cout << "Enter first name: ";
	cin >> Test.fname;
	cout << "Enter last name: ";
	cin >> Test.lname;

	cout << "Enter your salary (local variable): ";
	cin >> salary;

	cout << "Enter namespace 'people' salary: ";
	cin >> people::salary;

	cout << "Enter your age (local variable): ";
	cin >> age;

	cout << "Enter your age (namespace 'people'): ";
	cin >> people::age;

	cout << Test.fname << endl;
	cout << Test.lname << endl;
	cout << "Local salary: " << salary << endl;
	cout << "Namespace struct salary: " << people::salary << endl;
	cout << "Local age: " << age << endl;
	cout << "Namespace age: " << people::age << endl;

	cout << Some.a << endl;
	cout << Some.b << endl;


	return 0;
}