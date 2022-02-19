#ifndef ATARGET_HPP
# define ATARGET_HPP

class ATarget;

#include <iostream>
#include <string>
#include "ASpell.hpp"


class ATarget {
       
	    public:

			ATarget();
			virtual ~ATarget();
			ATarget(ATarget const & src);
			ATarget(std::string type);

			ATarget & operator=(ATarget const & other);

			std::string	const &	getType(void) const;

			virtual ATarget * clone(void) const = 0;

			void	getHitBySpell(ASpell const & spell) const;

		private:

			std::string _type;
};

#endif