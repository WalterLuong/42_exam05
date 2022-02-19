#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

# include <map>
# include <iterator>
# include "ATarget.hpp"

class TargetGenerator {

public:

		typedef typename std::pair<std::string, ATarget *>	Spell;
		typedef typename std::map<std::string, ATarget *>	TargetG;
		typedef typename TargetG::iterator					Iterator;

		TargetGenerator();
		~TargetGenerator();

		void	learnTargetType(ATarget * target);
		void	forgetTargetType(std::string const & target);
		ATarget * createTarget(std::string const & target);


	private :

		TargetG	_stuff;

		TargetGenerator(TargetGenerator const & src );
		TargetGenerator & operator=(TargetGenerator const & other);
};

#endif