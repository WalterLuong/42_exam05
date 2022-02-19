#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>
#include <iterator>

class Warlock 
{
	public:
		typedef std::pair<std::string, ASpell *>	Spell;
		typedef std::map<std::string, ASpell *>		Sbook;
		typedef Sbook::iterator						Iterator;

	public :

		Warlock(std::string name, std::string title);
		~Warlock(void);

		std::string	const &	getName(void) const;
		std::string	const & getTitle(void) const;
		void	setTitle(std::string newTitle);

		void	introduce() const;

		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string const & spell, ATarget const & target);

	private :

		std::string _name;
		std::string _title;
		Sbook	_stuff;

		Warlock();
		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & other);
};

#endif