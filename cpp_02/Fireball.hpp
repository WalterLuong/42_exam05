#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball;

class Fireball : public ASpell {

	public:

		Fireball() : ASpell("Fireball", "burnt to a crisp") {};
		virtual ~Fireball() {};

		virtual ASpell * clone(void) const {
			return new Fireball();
		};
};

#endif