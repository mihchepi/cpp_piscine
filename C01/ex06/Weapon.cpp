#include "Weapon.hpp"

void	Weapon::setType(std::string type)	{this->type = type;}
std::string Weapon::getType()				{return (this->type);}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon() {}

void Weapon::announce()
{
	std::cout << this->type << std::endl;
}