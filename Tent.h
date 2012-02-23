#ifndef _TENT_H__
#define _TENT_H__

#include "Camper.h"
#include <iostream>

class Tent {
	public:
		// Constructor
		Tent();

		// Destructor
		~Tent();

		void set(int limit, int id);

		// Add a camper, -1 if tent is full
		int addCamper(Camper& c);

		int removeCamper(Camper& c);

		// 1 if full, 0 if room still available
		int isFull();

		// Total happiness of all campers
		int getHappiness();

		void print();

		int getCapacity();


	private:
		int capacity;
		int camperCount;
		int ID;

		// The tent doesn't house campers, just pointers
		// to campers.
		Camper ** campers;
	
};

#endif
