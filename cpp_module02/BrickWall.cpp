#include "BrickWall.hpp"

BrickWall::BrickWall(){ type = "Inconspicuous Red-brick Wall"; }

BrickWall::BrickWall(const BrickWall& obj) { *this = obj; }

BrickWall&	BrickWall::operator=(const BrickWall& obj){
	this->type = obj.getType();
	return *this;
}

BrickWall::~BrickWall(){}

ATarget *BrickWall::clone() const { return new BrickWall(); }

