#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

using std::string;
using std::cout;
using std::endl;

class ATarget;

class BrickWall : public ATarget{
	public:
		BrickWall();
		BrickWall(const BrickWall& obj);
		BrickWall& operator=(const BrickWall& obj);
		virtual ~BrickWall();

		ATarget	*clone() const;
};

#endif