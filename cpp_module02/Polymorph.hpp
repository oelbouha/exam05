
#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::string;
using std::cout;
using std::endl;

class Polymorph : public ASpell{
	public:
		Polymorph();
		Polymorph(const Polymorph& obj);
		Polymorph& operator=(const Polymorph& obj);
		virtual ~Polymorph();

		ASpell	*clone() const;
};

#endif