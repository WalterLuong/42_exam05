#include "ATarget.hpp"

void	ATarget::getHitBySpell(ASpell const & spell) const {
	std::cout << _type << " has been : " << spell.getEffects() << "!" << std::endl;
};