#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall;

class BrickWall : public ATarget {

	public:

		BrickWall();
		virtual ~BrickWall();
		
		virtual ATarget * clone(void) const;
};

#endif