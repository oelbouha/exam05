#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell{
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell();
		ASpell(const ASpell& obj);
		ASpell& operator=(const ASpell& obj);
		virtual ~ASpell();
		ASpell(const std::string &name, const std::string &title);

		const 	std::string& getName() const;
		const 	std::string& getEffects() const;
		virtual ASpell*	clone() = 0;
		void	launch(const ATarget& target);
};

#endif
