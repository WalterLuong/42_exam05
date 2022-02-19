#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(ASpell const & src) : _name(src._name), _effects(src._effects) {}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {}

ASpell::~ASpell() {}

ASpell & ASpell::operator=(ASpell const & other) {
	_name = other.getName();
	_effects = other.getEffects();
	return *this;
}

std::string	const &	ASpell::getName(void) const {
	return _name;
}

std::string	const &	ASpell::getEffects(void) const {
	return _effects;
}

void	ASpell::launch(ATarget const & target) const {
	target.getHitBySpell(*this);
}