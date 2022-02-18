#include "ASpell.hpp"

void	ASpell::launch(ATarget const & target) const {
			target.getHitBySpell(*this);
};
