#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy;

class Dummy : public ATarget {

	public:

		Dummy();
		virtual ~Dummy();
		virtual ATarget * clone(void) const;
};

#endif
