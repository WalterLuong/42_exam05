#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
			std::cout << _name << ": This looks like another boring day." << std::endl;
			_book = new SpellBook();
}

Warlock::~Warlock(void) {
		std::cout << _name << ": My job here is done!" << std::endl;
		delete _book;
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
	_book->learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell) {
	_book->forgetSpell(spell);
}

void	Warlock::launchSpell(std::string const & spell, ATarget const & target) {
	ASpell * it = _book->createSpell(spell);
	if (it) {
		it->launch(target);
	}
}
