#include <string>
#include <iostream>
using namespace std;

class Person
{
	public : 
		int Age;
		string Name;
		void Hello()
		{
			cout << "Hello my name is " << Name << " and I'm " << Age << " years old.\n"; 
		}
};