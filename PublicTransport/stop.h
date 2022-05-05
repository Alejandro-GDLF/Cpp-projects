#ifndef _STOP_H_
#define _STOP_H_

#include <string>

#include "vehicle.h"

class Stop
{
	public:
		
		// Stop contructor
		Stop(string, unsigned int);
		
		// Stop destructor
		~Stop();
		
	private:
		std::string name;
		unsigned int code;
};

#endif
