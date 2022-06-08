#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed( Fixed const & src );
		Fixed&	operator=( Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();
	private :
		int					_fixedPoint;
		static const int	_fractBitNb = 8;
};

#endif