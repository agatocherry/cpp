#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed& fixedCopyRef);
	~Fixed();
	Fixed &operator=(const Fixed& fixedCopyRef);
	void setRawBits( int const raw );
	int getRawBits( void ) const;
};

#endif // FIXED_HPP