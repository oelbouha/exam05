#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::SpellBook(const SpellBook& obj) { *this = obj; }

SpellBook&	SpellBook::operator=(const SpellBook& __unused obj){
	return *this;
}

SpellBook::~SpellBook(){}


void	SpellBook::learnSpell(ASpell *asp){
	if (asp != NULL)
		data.push_back(asp->clone());
}

void	SpellBook::forgetSpell(string const & name){
	std::list<ASpell *>::iterator it;

	for(it = data.begin(); it != data.end(); ++it){
		ASpell *as = *it;
		if (as->getName() == name)
			data.erase(it);
	}
}

ASpell* SpellBook::createSpell(string const &name){
	std::list<ASpell *>::iterator it;

	for(it = data.begin(); it != data.end(); ++it){
		ASpell *as = *it;
		if (as->getName() == name)
			return (as);
	}
	return NULL;
}