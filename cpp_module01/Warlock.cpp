#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const string &name, const string &title) : name(name), title(title){
	cout << name << ": This looks like another boring day." << endl;
}

Warlock::Warlock(const Warlock& obj){
	*this = obj;
}

Warlock&	Warlock::operator=(const Warlock& obj){
	this->title = obj.getTitle();
	this->name = obj.getName();
	return *this;
}

Warlock::~Warlock(){
	cout << name << ": My job here is done!" << endl;
}

void	Warlock::setName(const string& name) { this->name = name;}

void	Warlock::setTitle(const string& title) { this->title = title;}

const string& Warlock::getTitle() const { return title; }

const string& Warlock::getName() const { return name; }

void	Warlock::introduce() const{
	cout << name << ": I am " << name <<  ", " << title << "!" << endl;
}

void	Warlock::learnSpell(ASpell *asp){
	if (asp != NULL)
		data.push_back(asp);
}


void	Warlock::launchSpell(string name, const ATarget& target){
	std::list<ASpell *>::iterator it;

	for(it = data.begin(); it != data.end(); ++it){
		ASpell *as = *it;
		if (as->getName() == name)
			as->launch(target);
	}
}

void	Warlock::forgetSpell(string name){
	std::list<ASpell *>::iterator it;

	for(it = data.begin(); it != data.end(); ++it){
		ASpell *as = *it;
		if (as->getName() == name)
			data.erase(it);
	}
}
