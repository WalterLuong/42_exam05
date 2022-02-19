#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void	SpellBook::learnSpell(ASpell * spell) {

	Iterator it = _stuff.find(spell->getName());
	if (it == _stuff.end()) {
		_stuff.insert(Spell(spell->getName(), spell->clone()));
	}

}

void	SpellBook::forgetSpell(std::string const & spell) {

	Iterator it = _stuff.find(spell);
	if (it != _stuff.end()) {
		delete it->second;
		_stuff.erase(it);
	}

}

ASpell * SpellBook::createSpell(std::string const & spell) {

	Iterator it = _stuff.find(spell);
	if (it != _stuff.end())
		return it->second;
	return NULL;

}