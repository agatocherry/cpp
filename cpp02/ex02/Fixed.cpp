#include "Fixed.hpp"

// 1 << _bits (8) = 256

Fixed::Fixed()
{
	setRawBits(0);
}

Fixed::Fixed(const int	value)
{
	setRawBits(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const float	value)
{
	setRawBits(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed& fixedCopyRef)
{
	operator=(fixedCopyRef);
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed& fixedCopyRef)
{
	setRawBits(fixedCopyRef.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream& flow, Fixed const &fixedCopyRef)
{
	int	value;

	value = fixedCopyRef.getRawBits();
	std::cout << roundf(value) / 256;
	return(flow);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

int Fixed::getRawBits( void ) const
{
	return (this->_value);
}

float Fixed::toFloat(void) const
{
	return (0);
}

int Fixed::toInt(void) const
{
	return (roundf(this->_value / 256));
}

bool Fixed::operator>(const Fixed &fixedCopyRef)
{
	if (this->_value > fixedCopyRef._value)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed& fixedCopyRef)
{
	if (this->_value < fixedCopyRef._value)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& fixedCopyRef)
{
	if (this->_value >= fixedCopyRef._value)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed & fixedCopyRef)
{
	if (this->_value <= fixedCopyRef._value)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed & fixedCopyRef)
{
	if (this->_value == fixedCopyRef._value)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed & fixedCopyRef)
{
	if (this->_value < fixedCopyRef._value)
		return (true);
	return (false);
}

Fixed& Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	const Fixed temp(*this);
	++(*this);
	return (temp);
}

Fixed& Fixed::operator*(const Fixed &left)
{
	float value = (roundf(this->_value) / 256 * roundf(left._value) / 256);
	setRawBits(roundf(value * (1 << this->_bits)));
	return (*this);
}

Fixed& Fixed::operator/(const Fixed &left)
{
	float value = ((roundf(this->_value) / 256) / (roundf(left._value) / 256));
	setRawBits(roundf(value * (1 << this->_bits)));
	return (*this);
}

Fixed& Fixed::operator+(const Fixed &left)
{
	float value = ((roundf(this->_value) / 256) + (roundf(left._value) / 256));
	setRawBits(roundf(value * (1 << this->_bits)));
	return (*this);
}

Fixed& Fixed::operator-(const Fixed &left)
{
	float value = ((roundf(this->_value) / 256) - (roundf(left._value) / 256));
	setRawBits(roundf(value * (1 << this->_bits)));
	return (*this);
}

Fixed& Fixed::min(Fixed& fixedLeft, Fixed& fixedRight)
{
	if (fixedLeft._value < fixedRight._value)
		return (fixedLeft);
	return (fixedRight);
}

const Fixed& Fixed::min(const Fixed& fixedLeft, const Fixed& fixedRight)
{
	if (fixedLeft._value < fixedRight._value)
		return (fixedLeft);
	return (fixedRight);
}

Fixed& Fixed::max(Fixed& fixedLeft, Fixed& fixedRight)
{
	if (fixedLeft._value > fixedRight._value)
		return (fixedLeft);
	return (fixedRight);
}

const Fixed& Fixed::max(const Fixed& fixedLeft, const Fixed& fixedRight)
{
	if (fixedLeft._value > fixedRight._value)
		return (fixedLeft);
	return (fixedRight);
}
