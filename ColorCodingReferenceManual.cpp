#include <iostream>
#include "ColorCode.h"


namespace TelCoColorCoder
{
	void PrintColorCodingReferenceManual()
	{
		std::cout <<std::endl<<"*****Color Coding Reference Manual*****"<<std::endl<< "  PairNumber Major  Minor"<< std::endl;
		for(uint pairNum = 1; pairNum <= c_MAXPAIRNUM; pairNum++)
		{
			std::string strCurrentRowEntry = GetCombinedPairNumandColorString(pairNum);
			std::cout <<strCurrentRowEntry<< std::endl;

		}
	}
}
