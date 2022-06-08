#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		Fixed( Fixed const & src );
		Fixed(const float nb);
		Fixed(const int nb);
		Fixed&	operator=( Fixed const & rhs );
		Fixed	operator+( Fixed const & rhs );
		Fixed	operator-( Fixed const & rhs );
		Fixed	operator*( Fixed const & rhs );
		Fixed	operator/( Fixed const & rhs );
		Fixed	operator++( void );
		Fixed	operator++( int );
		Fixed	operator--( void );
		Fixed	operator--( int );
		int		operator>( Fixed const & rhs ) const;
		int		operator<( Fixed const & rhs ) const;
		int		operator>=( Fixed const & rhs ) const;
		int		operator<=( Fixed const & rhs ) const;
		int		operator==( Fixed const & rhs ) const;
		int		operator!=( Fixed const & rhs ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed &		min(Fixed &fp1, Fixed &fp2);
		static const Fixed &	min(const Fixed &fp1, const Fixed &fp2);
		static Fixed &	max(Fixed &fp1, Fixed &fp2);
		static const Fixed &	max(const Fixed &fp1, const Fixed &fp2);
		~Fixed();

	private :
		int		_fixedPoint;
		static const int	_fractbitNb = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif