#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed& fixedCopyRef)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(fixedCopyRef.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fixedCopyRef)
{
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(0);
	getRawBits();
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}