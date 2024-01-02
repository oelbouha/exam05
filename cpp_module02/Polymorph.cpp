#include "Polymorph.hpp"

Polymorph::Polymorph(){ 
	name = "Polymorph";
	effects = "turned into a critter";
}

Polymorph::Polymorph(const Polymorph& obj) { *this = obj; }

Polymorph&	Polymorph::operator=(const Polymorph& obj){
	name = obj.getName();
	effects = obj.getEffects();
	return *this;
}

Polymorph::~Polymorph(){}

ASpell *Polymorph::clone()const{ return new Polymorph(); }
