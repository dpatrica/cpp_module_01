#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon): _name(Name), _weapon(Weapon) {std::cout << "Constructed HumanA\n";}

HumanA::~HumanA() {std::cout << "HumanA Destructed\n";}

std::string	HumanA::getName(void)
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << _weapon.getType() << std::endl;
}
