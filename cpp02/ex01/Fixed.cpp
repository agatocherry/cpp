#include "Fixed.hpp"

// 1 << _bits (8) = 256

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int	value)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const float	value)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const Fixed& fixedCopyRef)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(fixedCopyRef);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixedCopyRef)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(fixedCopyRef.getRawBits());
	return (*this);
}

std::ostream &operator<<(std::ostream& flow, Fixed const &fixedCopyRef) //pas bon
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
	// std::cout << roundf(this->_value / 256);
	return (roundf(this->_value / 256));
}