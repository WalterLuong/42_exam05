#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

# include <map>
# include <iterator>
# include "ASpell.hpp"

class SpellBook;

class SpellBook {

public:

		typedef typename std::pair<std::string, ASpell *>	Spell;
		typedef typename std::map<std::string, ASpell *>	Spellbook;
		typedef typename Spellbook::iterator				Iterator;

		SpellBook() {};
		~SpellBook() {};
		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string const & spell);
		ASpell * createSpell(std::string const & spell);

		Spellbook	_stuff;

	private :


		SpellBook(SpellBook const & src );
		SpellBook & operator=(SpellBook const & other);
};

#endif