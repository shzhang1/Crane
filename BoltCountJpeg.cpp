#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <assert.h>

#include "connections.h"
#include "BoltCountJpeg.h"


BoltCountJpeg::BoltCountJpeg(std::string name, unsigned int parallel_level)
	: Bolt(name, parallel_level)
{
	type = CRANE_TASK_COUNT_JPEG;
}

BoltCountJpeg::~BoltCountJpeg()
{

}

void BoltCountJpeg::run()
{
	int counter = 0;
	while(!killRunThread)
	{
		
		Tuple tuple = this->getTuple();

		std::string filename = tuple.getElement(0);

		size_t pos = filename.find(".jp");

		if (pos != std::string::npos) // Not found
		{
			std::cout << "Total jpeg: " << ++counter << std::endl;
		}

	}
}