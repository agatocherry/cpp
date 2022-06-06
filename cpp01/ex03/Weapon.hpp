#include <iostream>
#include <string>

class Weapon
{
	public :
	Weapon(std::string newType);
	~Weapon( void );
	std::string type;
	void	setType(std::string newType);
	const std::string& getType();
};
