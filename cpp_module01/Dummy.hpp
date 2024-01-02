#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;


class Dummy : public ATarget{
	public:
		Dummy();
		Dummy(const Dummy& obj);
		Dummy& operator=(const Dummy& obj);
		virtual ~Dummy();
	
		ATarget*	clone();
};

#endif