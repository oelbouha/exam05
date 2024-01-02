#include "Dummy.hpp"

Dummy::Dummy(){ type = "Target Practice Dummy"; }

Dummy::Dummy(const Dummy& obj) { *this = obj; }

Dummy&	Dummy::operator=(const Dummy& obj){
	this->type = obj.getType();
	return *this;
}

Dummy::~Dummy(){}

ATarget *Dummy::clone(){ return new Dummy(); }

