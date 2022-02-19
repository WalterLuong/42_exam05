#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock 
{
	public :

		Warlock(std::string name, std::string title);
		~Warlock(void);

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		
		void	setTitle(std::string newTitle);
		void	introduce() const;

	private :

		std::string _name;
		std::string _title;

		Warlock();
		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & other);
};

#endif