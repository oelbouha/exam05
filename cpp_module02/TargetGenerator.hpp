#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <list>
#include "ATarget.hpp"

using std::string;
using std::cout;
using std::endl;

class TargetGenerator{
	private:
		std::list<ATarget *> data;
		TargetGenerator(const TargetGenerator& obj);
		TargetGenerator& operator=(const TargetGenerator& obj);

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(string const &);
		ATarget* createTarget(string const &);
};

#endif