#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void ( Karen::*f[5] )( void );
public:
	Karen(/* args */);
	void complain( std::string level );
	~Karen();
};

#endif // KAREN_HPP