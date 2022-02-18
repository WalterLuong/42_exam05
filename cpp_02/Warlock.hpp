#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>
#include <iterator>
#include "SpellBook.hpp"

class Warlock 
{

	public :

		Warlock(std::string name, std::string title);
		~Warlock(void);
		std::string	const &	getName(void) const;
		std::string		const & getTitle(void) const;
		void	setTitle(std::string newTitle);
		void	introduce() const;
		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string const & spell, ATarget const & target);

	private :

		std::string _name;
		std::string _title;
		SpellBook	*_book;

		Warlock();
		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & other);
};

#endif
