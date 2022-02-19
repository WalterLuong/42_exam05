#ifndef ASPELL_HPP
# define ASPELL_HPP

class ASpell;

#include "ATarget.hpp"
#include <iostream>
#include <string>


class ASpell {

	public:

		ASpell();
		ASpell(ASpell const & src);
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();

		ASpell & operator=(ASpell const & other);

		std::string	const &	getName(void) const;
		std::string	const &	getEffects(void) const;

		virtual ASpell * clone(void) const = 0;
		void	launch(ATarget const & target) const;

	private:

		std::string _name;
		std::string _effects;
};

#endif