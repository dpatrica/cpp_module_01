#include "HumanB.hpp"

HumanB::HumanB(std::string Name, Weapon *Weapon): _name(Name), _weapon(Weapon) {std::cout << "Constructed HumanB\n";}

HumanB::~HumanB() {std::cout << "HumanB Destructed\n";}

std::string	HumanB::getName(void)
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	this->_weapon = &Weapon;
}

void	HumanB::attack(void)
{
	if (this->_weapon != NULL)
		std::cout << this->getName() << " attacks with their " << _weapon->getType() << std::endl;
}
