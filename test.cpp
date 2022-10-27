#include"BigInt.h"
#include <iostream>
#include <cassert>

int main() {

	using namespace std;
	string s1 = "50", s2 = "67";
	cout << s1.compare(s2) << endl;
	cout << s2.compare(s1) << endl;
	long long a, b, res;
	BigInt b0{0 };
	BigInt b500{ 500 };
	BigInt m500{ -500 };
	BigInt m800{ "-800" };
	BigInt m800_2(m800);
	assert(BigInt(-56) > BigInt(-1000));
	assert(!(BigInt(56) > BigInt(1000)));
	assert(BigInt(56) > BigInt(-1000));
	assert(!(BigInt(-56) > BigInt(1000)));
	assert(!(BigInt(1000) > BigInt(1000)));

	/*b0 = b0;
	assert(b0 == (BigInt)"0");
	b0 = b500;
	assert(b0 == (BigInt)"500");
	assert(m500 == (BigInt)"-500");
	assert(b500 == (BigInt)"500");
	assert(m800 == (BigInt)"-800");
	assert(m800_2 == (BigInt)"-800");
	BigInt bigmnum{ "-254000000000000900000" };
	bool exceptionThrown = false;
	BigInt b999_1{ 999 }, b1{ 1 };
	assert((BigInt)"1999" == (BigInt)"1999");
	assert((BigInt)"-1999" != (BigInt)"1999");

	assert((BigInt)2 < (BigInt)18);
	assert((BigInt)"1999" < (BigInt)"8000");
	assert((BigInt)"-200000" < (BigInt)"-1999");
	assert((BigInt)"-200000" < (BigInt)"0");
	assert(!((BigInt)"0" < (BigInt)"0"));

	assert((BigInt)2 > (BigInt)-18);
	assert((BigInt)"20" > (BigInt)"-1999");
	assert((BigInt)"200000" > (BigInt)"-1999");
	assert((BigInt)"-200000" > (BigInt)"-99991999");
	
	assert((BigInt)"-200000" <= (BigInt)"0");
	assert((BigInt)"0" <= (BigInt)"0");
	assert((BigInt)"0" >= (BigInt)"0");*/
	return 0;
}