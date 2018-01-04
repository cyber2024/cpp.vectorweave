#include "vector.h"
#include <iostream>
#include <string>


std::string itos(int a);

Vector::Vector(int x, int y, int z){
	mX = x;
	mY = y;
	mZ = z;
	balance = 0;
		std::cout << "Vector created " << this->toString() << std::endl;
}
Vector::Vector(int x, int y, int z, long int startingBalance){
	this->mX = x;
	this->mY = y;
	this->mZ = z;
	this->balance = startingBalance;
		std::cout << "Vector created " << this->toString() << std::endl;
}
std::string Vector::toString() {
	char str[70];
	sprintf_s(str, "(%i,%i,%i, %iVC)", mX, mY, mZ, balance);
	std::string s(str);
	return s;
}
std::string Vector::stringify() {
	std::string s = "{\"vector\":{";
	s.append("\"mX\":\"");
	s+= itos(mX);
	s += "\", \"mY\":\"";
	s += itos(mY);
	s += "\" ,\"mZ\":\"";
	s += itos(mZ);
	s += "\" ,balance:";
	s += itos(balance);
	s += "}}";
	return s;
}

char * reverseString(char * str) {
	char *end = str;
	char tmp;
	int i = 0;

	while (*end) {
		*end++;
	}
	end--;
	while ((str+i) < end ) {
		tmp = str[i];
		str[i] = *end;
		*end = tmp;
		i++;
		end--;
	}
	return str;
}

std::string itos(int a) {
	const int strsize = 32;
	char str[strsize] = "";
	int i = 0;
	for (; a > 0; i++, a /= 10) {
		str[i] = '0' + a%10;
	}
	reverseString(str);
	return std::string(str);
}