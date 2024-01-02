#include "Fwoosh.hpp"

Fwoosh::Fwoosh(){ 
	name = "Fwoosh";
	effects = "fwooshed";
}

Fwoosh::Fwoosh(const Fwoosh& obj) { *this = obj; }

Fwoosh&	Fwoosh::operator=(const Fwoosh& obj){
	name = obj.getName();
	effects = obj.getEffects();
	return *this;
}

Fwoosh::~Fwoosh(){}

ASpell *Fwoosh::clone(){ return new Fwoosh(); }
