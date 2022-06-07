#include <iostream>
#include <string>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon( void );
		void	setType(std::string type);
		const std::string& getType();
	private :
		std::string _type;
};
