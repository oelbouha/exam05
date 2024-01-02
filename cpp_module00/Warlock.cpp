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

const string& Warlock::getTitle() const { return title ; }

const string& Warlock::getName() const { return title; }

void	Warlock::introduce() const{
	cout << name << ": I am " << ", " << title << "!" << endl;
}