#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
		{
		private:
			std::string	_name;
			Weapon	&_weapon;

		public:
			HumanA(std::string Name, Weapon &Weapon);
			~HumanA();

			std::string	getName(void);
			void	attack(void);
		};

#endif
