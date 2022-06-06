#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const & type);
		AMateria();
		virtual ~AMateria();
		void	setType(std::string type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : virtual public AMateria
{
	public:
		Ice();
		virtual ~Ice(void);
		AMateria* clone() const;
		void use(ICharacter& target);
};

class Cure : virtual public AMateria
{
	public:
		Cure();
		virtual ~Cure(void);
		AMateria* clone() const;
		void use(ICharacter& target);
};

class IMateriaSource
{
	protected :
		AMateria* materiaArray[4];
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource();
		virtual ~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

class ICharacter
{
	protected :
		std::string _name;
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void setName(std::string const &);
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : virtual public ICharacter
{
	protected :
		AMateria *materiaArray[4];
	public :
		Character(std::string const & name);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};


#endif