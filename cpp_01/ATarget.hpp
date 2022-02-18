#ifndef ATARGET_HPP
# define ATARGET_HPP

class ATarget;

#include <iostream>
#include <string>
#include "ASpell.hpp"


class ATarget {
       
	    public:

			ATarget() {};
			virtual ~ATarget() {};
			ATarget(ATarget const & src) : _type(src._type) {};

			ATarget(std::string type) : _type(type) {};

			ATarget & operator=(ATarget const & other) {
				_type = other.getType();
				return *this;
            };

			std::string	const &	getType(void) const {
				return _type;
			};

			virtual ATarget * clone(void) const = 0;

			void	getHitBySpell(ASpell const & spell) const;

		private:

			std::string _type;
};

#endif

