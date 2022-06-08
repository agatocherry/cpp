#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <math.h>

class Fixed
{
	public :
		Fixed();
		Fixed( Fixed const & src );
		Fixed(const float nb);
		Fixed(const int nb);
		Fixed&	operator=( Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		~Fixed();
	private :
		int					_fixed_point;
		static const int	_fract_bit_nb = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );

#endif