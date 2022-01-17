#include <iostream>
#include "ColorCode.h"

namespace TelCoColorCoder
{
    void PrintColorCodingReferenceManual()
    {

        std::cout <<std::endl<<"*****Color Coding Reference Manual*****"<<std::endl<< "  PairNumber Major  Minor"<< std::endl;
        for(uint pairNum = 1; pairNum <= c_MAXPAIRNUM; pairNum++)
        {
            ColorPair currentColorPair = TelCoColorCoder::GetColorFromPairNumber(pairNum);
            std::string currentColorPairString = currentColorPair.ToString();
            if(pairNum < c_TWODIGITSTARTINGINDEX)
            {
                std::cout <<sixSpaces<<pairNum<<sixSpaces<<currentColorPairString<< std::endl;
            }
            else
            {
                std::cout <<fiveSpaces<<pairNum<<sixSpaces<<currentColorPairString<< std::endl;
            }     
        }
    }
}
