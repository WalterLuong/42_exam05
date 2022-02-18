#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh;

class Fwoosh : public ASpell {

	public:

		Fwoosh() : ASpell("Fwoosh", "fwooshed") {};
		virtual ~Fwoosh() {};

		virtual ASpell * clone(void) const {
			return new Fwoosh();
		};
};

#endif

