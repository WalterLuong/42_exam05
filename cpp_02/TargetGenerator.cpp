#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget * target) {

	Iterator it = _stuff.find(target->getType());
	if (it == _stuff.end()) {
		_stuff.insert(Spell(target->getType(), target->clone()));
	}

}

void	TargetGenerator::forgetTargetType(std::string const & target) {

	Iterator it = _stuff.find(target);
	if (it != _stuff.end()) {
		delete it->second;
		_stuff.erase(it);
	}

}

ATarget * TargetGenerator::createTarget(std::string const & target) {

	Iterator it = _stuff.find(target);
	if (it != _stuff.end())
		return it->second;
	return NULL;

}
