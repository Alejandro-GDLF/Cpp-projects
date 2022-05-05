#include "vehicle.h"
#include "stop.h"
#include "typenum.h"

/******** Vehicle(typenum tp, int ln, bool dir) ****************************//**
* 
* Constructor for one vehicle with basic attributes.
*
* @param [in] typenum
*//****************************************************************************/
Vehicle::Vehicle(typenum tp, int ln, bool dir)
:type(tp), line(ln), direction(dir)
{}

Vehicle::~Vehicle()
{}

bool setNextStop(Stop*)
{
	
}
