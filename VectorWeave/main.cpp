#include <iostream>
#include <SHA.h>
#include "vector.h"

using namespace std;

int main(int argc, char * argv[]) {
	Vector v(1, 2, 3, 999099909);
	v.toString();
	string s = v.stringify();
	cout << RussCryptoFuncs::SHA::generateHash(v.toString()) << endl;
	return 0;
}