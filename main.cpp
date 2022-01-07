#include <iostream>
#include <assert.h>
#include <string>
#include "ColorCode.h"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
	const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "State"
    };
    const int c_MAXPAIRNUM = 25;
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

	 std::string ColorPair:: ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
	
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
     void PrintColorCodingReferenceManual()
     {
	     std::cout <<"PairNumber " << "Major"<<" " <<"Minor"<< std::endl;
	     for(uint pairNum = 1; pairNum <= c_MAXPAIRNUM; pairNum++)
	     {
		     ColorPair currentColorPair = GetColorFromPairNumber(pairNum);
		     std::cout <<"   "<<pairNum<<"       "<< currentColorPair.ToString()<< std::endl;
		     
	     }
     }
}


