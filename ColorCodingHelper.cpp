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
	const std::string threeSpaces = "    ";
	const std::string twoSpaces = "  ";
	const std::string singleSpace = " ";
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

	 std::string ColorPair:: ToString() {
                std::string colorPairStr = MajorColorNames[majorColor];
		if(majorColor == MajorColor::RED)
		{
                   colorPairStr += threeSpaces;
		}
		else if ((majorColor == MajorColor::WHITE) ||(majorColor == MajorColor::BLACK))
		{
			colorPairStr +=twoSpaces;
		}
	       else
		{
			colorPairStr += singleSpace;
		}
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

}


