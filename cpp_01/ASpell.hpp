#ifndef ASPELL_HPP
# define ASPELL_HPP

class ASpell;

#include "ATarget.hpp"
#include <iostream>
#include <string>


class ASpell {

	public:

		ASpell() {};
		ASpell(ASpell const & src) : _name(src._name), _effects(src._effects) {};
		ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {};
		virtual ~ASpell() {};
		ASpell & operator=(ASpell const & other) {
				_name = other.getName();
				_effects = other.getEffects();
				return *this;
		};

		std::string	const &	getName(void) const {
				return _name;
		};

		std::string	const &	getEffects(void) const {
				return _effects;
		};

		virtual ASpell * clone(void) const = 0;

		void	launch(ATarget const & target) const;

	private:

		std::string _name;
		std::string _effects;
};

#endif
