#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::string;
using std::cout;
using std::endl;

class ASpell;
class Fireball : public ASpell{
	public:
		Fireball();
		Fireball(const Fireball& obj);
		Fireball& operator=(const Fireball& obj);
		virtual ~Fireball();

		ASpell	*clone() const;
};

#endif