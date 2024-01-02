#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const string &type) : type(type) {}

ATarget::ATarget(const ATarget& obj) { *this = obj; }

ATarget&	ATarget::operator=(const ATarget& obj){
	this->type = obj.getType();
	return *this;
}

ATarget::~ATarget(){}

const string& ATarget::getType() const { return type; }

void	ATarget::getHitBySpell(const ASpell &aspel) const {
	cout << type << " has been " << aspel.getEffects() << "!" <<  endl;
}

