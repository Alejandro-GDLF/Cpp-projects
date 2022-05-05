#ifndef _VEHICLE_H_
#define _VEHICLE_H_

#include "vehicle.h"
#include "typeenum.h"

class Vehiculo
{
	public:
		
		// Vehicle contructor
		Vehicle(typenum, int, bool);
		
		// Vehicle destructor
		~Vehicle();
		
	private:
		// Type variable holding vehicle type: Bus, Metro...
		typenum type;
		
		// Line number
		int line;
		
		// Which direction is going
		bool direction;
		
		// The stops this vehicle has
		Lista paradas;
};

#endif
