#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Polymorph;

class Polymorph : public ASpell {

	public:

		Polymorph() : ASpell("Polymorph", "turned into a critter") {};
		virtual ~Polymorph() {};

		virtual ASpell * clone(void) const {
			return new Polymorph();
		};
};

#endif