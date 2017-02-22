#include "Student.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

int main()
{
	Teacher james = Teacher("james");
	Teacher bob = Teacher("bob");
	cout << james.GetName() << endl;
	cout << bob.GetName() << endl;

	getchar();
	return 0;
}