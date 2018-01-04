#pragma once
#include <iostream>
#include <string>

class Vector {
	int mX, mY, mZ;
	long long int balance;
	
public:
	Vector(int, int, int);
	Vector(int, int, int, long int);
	std::string toString();
	std::string stringify();
};