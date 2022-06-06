#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

	public :

	void announce( void );
	void nameZombie(std::string name);
	~Zombie( void );

	private :

	std::string _name;

};

Zombie* zombieHorde( int N, std::string name );

#endif