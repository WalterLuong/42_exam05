#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock 
{
	public :
		Warlock(std::string name, std::string title) : _name(name), _title(title) {
				std::cout << _name << ": This looks like another boring day." << std::endl;
		};
		~Warlock(void) {
				std::cout << _name << ": My job here is done!" << std::endl;
		};
		std::string		getName(void) const {
				return this->_name;
		};
		std::string		getTitle(void) const {
				return this->_title;
		};
		void	setTitle(std::string newTitle) {
				this->_title = newTitle;
		};
		void	introduce() const {
				std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
		};

	private :
		std::string _name;
		std::string _title;

		Warlock();
		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & other);
};

#endif
