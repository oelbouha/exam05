#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
#include <string>
#include <list>
#include "ASpell.hpp"

using std::string;
using std::cout;
using std::endl;

class SpellBook{
	private:
		std::list<ASpell *> data;
		SpellBook(const SpellBook& obj);
		SpellBook& operator=(const SpellBook& obj);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell * asp);
		void forgetSpell(string const &name);
		ASpell* createSpell(string const &name);
};

#endif