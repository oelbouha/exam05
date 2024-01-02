#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

using std::string;
using std::cout;
using std::endl;

class ATarget;
class ASpell{
	protected:
		string name;
		string effects;

	public:
		ASpell();
		ASpell(const ASpell& obj);
		ASpell& operator=(const ASpell& obj);
		virtual ~ASpell();
		ASpell(const string &name, const string &title);
	
		// void 	setName(const string& name);
		// void 	setEffects(const string& t);
		const 	string& getName() const;
		const 	string& getEffects() const;
		virtual ASpell*	clone() const = 0;
		void	launch(const ATarget& target);
};

#endif