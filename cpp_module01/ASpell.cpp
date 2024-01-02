#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const string &name, const string &title) : name(name), effects(title){}

ASpell::ASpell(const ASpell& obj) { *this = obj; }

ASpell&	ASpell::operator=(const ASpell& obj){
	this->effects = obj.getEffects();
	this->name = obj.getName();
	return *this;
}

ASpell::~ASpell(){}

const string& ASpell::getEffects() const { return effects ; }

const string& ASpell::getName() const { return name; }

void	ASpell::launch(const ATarget& target){
	target.getHitBySpell(*this);
}

// void	ASpell::setName(const string& name) { this->name = name;}

// void	ASpell::setEffects(const string& title) { this->effects = title;}