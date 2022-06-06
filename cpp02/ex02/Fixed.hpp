#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <math.h>

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixedCopyRef);
	~Fixed();
	Fixed &operator=(const Fixed& fixedCopyRef);
	bool operator>(const Fixed& fixedCopyRef);
	bool operator<(const Fixed& fixedCopyRef);
	bool operator>=(const Fixed& fixedCopyRef);
	bool operator<=(const Fixed& fixedCopyRef);
	bool operator==(const Fixed& fixedCopyRef);
	bool operator!=(const Fixed& fixedCopyRef);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator*(const Fixed &left);
	Fixed &operator/(const Fixed &left);
	Fixed &operator+(const Fixed &left);
	Fixed &operator-(const Fixed &left);
	void setRawBits( int const raw );
	int getRawBits( void ) const;
	float toFloat(void) const;
	int toInt(void) const;
	static const Fixed &min(const Fixed& fixedLeft, const Fixed& fixedRight);
	Fixed &min(Fixed& fixedLeft, Fixed& fixedRight);
	static const Fixed &max(const Fixed& fixedLeft, const Fixed& fixedRight);
	Fixed &max(Fixed& fixedLeft, Fixed& fixedRight);
};

std::ostream &operator<<(std::ostream& flow, Fixed const &fixedCopyRef);

#endif // FIXED_HPP