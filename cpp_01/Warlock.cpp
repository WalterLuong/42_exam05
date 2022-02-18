#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
			std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(void) {
		std::cout << _name << ": My job here is done!" << std::endl;
}

std::string	const &	Warlock::getName(void) const {
		return this->_name;
}

std::string		const & Warlock::getTitle(void) const {
		return this->_title;
}

void	Warlock::setTitle(std::string newTitle) {
		this->_title = newTitle;
}

void	Warlock::introduce() const {
		std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell * spell) {
	Iterator it = _stuff.find(spell->getName());
	if (it == _stuff.end()) {
		_stuff.insert(Spell(spell->getName(), spell->clone()));
	}
}

void	Warlock::forgetSpell(std::string spell) {
	Iterator it = _stuff.find(spell);
	if (it != _stuff.end()) {
		delete it->second;
		_stuff.erase(it);
	}
}

void	Warlock::launchSpell(std::string const & spell, ATarget const & target) {
	Iterator it = _stuff.find(spell);
	if (it != _stuff.end()) {
		it->second->launch(target);
	}
}
