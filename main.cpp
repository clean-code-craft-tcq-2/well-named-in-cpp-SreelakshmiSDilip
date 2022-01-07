#include <iostream>
#include <assert.h>
#include "ColorCode.h"

namespace TelCoColorCoder
{
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
	const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "State"
    };
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
	     //std::cout <<"PairNumber " << "Major Color "<< "Minor Color";
	     for(uint pairNum = 0; pairNum < 25; pairNum++)
	     {
		     ColorPair CurrentColorPair = GetColorFromPairNumber(pairNum);
		     std::cout << pairNum << CurrentColorPair.ToString();//<< std::endl;
	     }
     }
}


