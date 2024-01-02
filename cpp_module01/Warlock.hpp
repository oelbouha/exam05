
#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "ASpell.hpp"

using std::string;
using std::cout;
using std::endl;

class Warlock{
	private:
		string name;
		string title;
		std::list<ASpell *> data;
		Warlock();
		Warlock(const Warlock& obj);
		Warlock& operator=(const Warlock& obj);
	public:
		~Warlock();
		Warlock(const string &name, const string &title);
	
		void 	setName(const string& name);
		void 	setTitle(const string& t);
		const 	string& getTitle() const;
		const 	string& getName() const;
		void	introduce() const;
		void	learnSpell(ASpell * aspel);
		void	forgetSpell(string name);
		void	launchSpell(string name, const ATarget& target);
};

#endif