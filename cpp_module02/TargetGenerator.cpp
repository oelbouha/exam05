#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::TargetGenerator(const TargetGenerator& obj) { *this = obj; }

TargetGenerator&	TargetGenerator::operator=(const TargetGenerator& __unused obj){
	return *this;
}

TargetGenerator::~TargetGenerator(){}


void	TargetGenerator::learnTargetType(ATarget *a){
	if (a != NULL)
		data.push_back(a);
}

void	TargetGenerator::forgetTargetType(string const &name){
	std::list<ATarget *>::iterator it;

	for(it = data.begin(); it != data.end(); ++it){
		ATarget *as = *it;
		if (as->getType() == name)
			data.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(string const &type){
	std::list<ATarget *>::iterator it;

	for(it = data.begin(); it != data.end(); ++it){
		ATarget *as = *it;
		if (as->getType() == type)
			return (as);
	}
	return NULL;
}