#ifndef ATARGET_HPP
#define ATARGET_HPP

#include "ASpell.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ASpell;

class ATarget{
	protected:
		string type;

	public:
		ATarget();
		ATarget(const ATarget& obj);
		ATarget& operator=(const ATarget& obj);
		virtual ~ATarget();
		ATarget(const string &type);
	
		const string& 	getType() const;
		virtual ATarget*	clone()const = 0;
		void	getHitBySpell(const ASpell &aspel) const;
};

#endif