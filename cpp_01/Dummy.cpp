#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::~Dummy() {}

ATarget * Dummy::clone(void) const {
	return new Dummy();
}