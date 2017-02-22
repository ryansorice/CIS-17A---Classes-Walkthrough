#pragma once
#include <string>

class Student
{
private:
	std::string _name;	//Go to namespace std, pull out string class, name it _name (can use "using namespace std;" at top also)
public:
	Student();
	Student(std::string name);
	~Student();

	std::string GetName();
};

