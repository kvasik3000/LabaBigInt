#include "BigInt.h"
#include <cstring>


BigInt::BigInt(int num)
{
	if (num < 0)
	{
		sign = false;
	}
	else {
		sign = true;
	}

	digits = std::to_string(abs(num));
}
BigInt::BigInt(std::string num)
{
	for (int i = 0; i < num.length() ; i++)
	{
		if (num[0] == '-')
		{
			sign = false;

		}
		else {
			sign = true;
		}
		if ((num[i] < '0' || num[i] > '9') && num[i] != '-')
		{
			throw std::invalid_argument("invalid argument");
		}
	}

	digits = num.erase(0,1);
}
BigInt::BigInt(const BigInt& num)
{
	if (num < BigInt(0))
	{
		sign = false;
	}
	else {
		sign = true;
	}

	digits = num.digits;
	sign = num.sign;
}

BigInt::~BigInt()
{
}
std::string BigInt::get_digits() const{
	return this->digits;
}
std::ostream& operator<<(std::ostream& o, const BigInt& i) {
	std::cout << i.get_digits();
	return o;
}

BigInt& BigInt::operator=(const BigInt& num ) {
	if (num == *this)
	{
		return *this;
	}
	digits = num.digits;
	sign = num.sign;
	return *this;
}

bool BigInt:: operator==(const BigInt& num) const {
	
	return this->digits == num.digits && this->sign == num.sign;
}

bool BigInt:: operator!=(const BigInt& num) const {
	return this->digits != num.digits && this->sign == num.sign;
}
bool BigInt:: operator>(const BigInt& num) const {

	if (num.digits == this->digits)
	{
		return false;
	}

	if (this->sign == true && num.sign == false)
	{
		
		return true /*this->digits > num.digits*/;
	}
	if (this->sign == false && num.sign == true)
	{
		return false /*num.digits > this->digits*/;
	}
	if (this->sign == true && num.sign == true ) 
	{
		if (num.digits.length() == this->digits.length())
		{
			for (int i = 0; i < num.digits.length(); i++)
			{
				if (num.digits[i] == this->digits[i])
				{
					continue;
				}
				if (num.digits[i] > this->digits[i]) 
				{
					return false /*num.digits > this->digits*/;
				}
				if (num.digits[i] < this->digits[i])
				{
					return true /*this->digits > num.digits*/;
				}
			}
		}
		if (num.digits.length() > this->digits.length())
		{
			return false /*num.digits > this->digits*/;
		}
		else {
			return true /*this->digits > num.digits*/;
		}

	}
	if (this->sign == false && num.sign == false) {

		if (num.digits.length() == this->digits.length())
		{
			for (int i = 1; i < num.digits.length(); i++)
			{
				if (num.digits[i] == this->digits[i])
				{
					continue;
				}
				//return num.digits[i] > this->digits[i];
				if (num.digits[i] > this->digits[i])
				{
					return true /*this->digits > num.digits*/;
				}
				if (num.digits[i] < this->digits[i])
				{
					
					return false /*num.digits > this->digits*/;
				}
			}
		}
		if (num.digits.length() > this->digits.length())
		{
			return true /*this->digits > num.digits*/;
		}
		else {
			
			return false /*num.digits > this->digits*/;
		}
	}
	
}
bool BigInt:: operator<(const BigInt& num) const {
	return this->digits < num.digits;
}

bool BigInt:: operator<=(const BigInt& num) const {
	return this->digits <= num.digits;
}
bool BigInt:: operator>=(const BigInt& num) const {
	return this->digits >= num.digits;
}