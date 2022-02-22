#include "Weapon.hpp"

Weapon::Weapon(std::string Type): _type(Type) {std::cout << "Constructed Weapon\n";}

Weapon::~Weapon() {std::cout << "Weapon Destructed\n";}

std::string const &Weapon::getType()
{
	return this->_type;
}

void	Weapon::setType(std::string Type)
{
	this->_type = Type;
}
