#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall;

class BrickWall : public ATarget {

	public:

		BrickWall() : ATarget("Inconspicuous Red-brick Wall") {};
		virtual ~BrickWall() {};
		virtual ATarget * clone(void) const {
		BrickWall *d = new BrickWall();
		return d;
		};
};

#endif