#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

# include <map>
# include <iterator>
# include "ASpell.hpp"

class SpellBook;

class SpellBook {

public:

		typedef std::pair<std::string, ASpell *>	Spell;
		typedef std::map<std::string, ASpell *>		Sbook;
		typedef Sbook::iterator						Iterator;

		SpellBook();
		~SpellBook();
		
		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string const & spell);
		ASpell * createSpell(std::string const & spell);


	private :

		Sbook	_stuff;

		SpellBook(SpellBook const & src );
		SpellBook & operator=(SpellBook const & other);
};

#endif