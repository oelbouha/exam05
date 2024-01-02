#include "Fireball.hpp"

Fireball::Fireball(){ 
	name = "Fireball";
	effects = "burnt to a crisp";
}

Fireball::Fireball(const Fireball& obj) { *this = obj; }

Fireball&	Fireball::operator=(const Fireball& obj){
	name = obj.getName();
	effects = obj.getEffects();
	return *this;
}

Fireball::~Fireball(){}

ASpell *Fireball::clone()const{ return new Fireball(); }
