#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

using std::string;
using std::cout;
using std::endl;


class Fwoosh : public ASpell{
	public:
		Fwoosh();
		Fwoosh(const Fwoosh& obj);
		Fwoosh& operator=(const Fwoosh& obj);
		virtual ~Fwoosh();

		ASpell	*clone()const;
};

#endif