#include <iostream>
#include "ColorCode.h"

namespace TelCoColorCoder
{
    std::string GetCurrentPairNumString(int pairNum)
    {
            ColorPair currentColorPair = TelCoColorCoder::GetColorFromPairNumber(pairNum);
            std::string currentColorPairString = currentColorPair.ToString();
            std::string insertSpace = fiveSpaces;
            if(pairNum < c_TWODIGITSTARTINGINDEX)
            {
                insertSpace = sixSpaces;
            }
            std::string pairNumandColorPair = insertSpace + pairNum + sixSpaces + currentColorPairString;
            return pairNumandColorPair;
               
    }
    void PrintColorCodingReferenceManual()
    {

        std::cout <<std::endl<<"*****Color Coding Reference Manual*****"<<std::endl<< "  PairNumber Major  Minor"<< std::endl;
        for(uint pairNum = 1; pairNum <= c_MAXPAIRNUM; pairNum++)
        {
           
            std::cout <<GetCurrentPairNumString(pairNum)<< std::endl;
    
        }
    }
}
