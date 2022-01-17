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
            std::string whiteSpace = fiveSpaces;
            if(pairNum < c_TWODIGITSTARTINGINDEX)
            {
                whiteSpace = sixSpaces;
            }

                std::cout <<whiteSpace<<pairNum<<sixSpaces<<currentColorPairString<< std::endl;
    
        }
    }
}
