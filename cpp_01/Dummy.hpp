#ifndef DUMMY_HPP
# define DUMMY_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy;

class Dummy : public ATarget {

	public:

		Dummy() : ATarget("Target Practice Dummy") {};
		virtual ~Dummy() {};
		virtual ATarget * clone(void) const {
		Dummy *d = new Dummy();
		return d;
		};
};

#endif
