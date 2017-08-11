#ifndef __REBANILA_H
#define __REBANILA_H

#include "mbed.h"
#include "propo.h"

class Rebanila : public _PROPO
{
public:
	Rebanila();
	~Rebanila(){}
	
	float targetElevator, targetRudder, targetThrottle;

	static unsigned long counter;
	static void out_interrupt();
};
#endif
