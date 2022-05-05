#include <string>

#include "stop.h"

Stop::Stop(std:string n, unsigned int c)
:name(name), code(c)
{}

Stop::~Stop()
{
	delete this;
}
