#include <iostream>
#include <assert.h>
#include "ColorCode.h"


void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

 void PrintColorCodingReferenceManual()
     {
	     const int c_MAXPAIRNUM = 25;
             const int c_TWODIGITSTARTINGINDEX = 10;
             const std::string c_FOURWHITESPACES  = "    ";
             const std::string c_THREEWHITESPACES = "   ";
             const std::string c_SINGLEWHITESPACE = "  ";
             const std::string c_SEVENWHITESPACES = "       ";
	     std::cout <<std::endl<<"*****Color Coding Reference Manual*****"<<std::endl<< "PairNumber " << "Major"<<c_SINGLEWHITESPACE <<"Minor"<< std::endl;
	     for(uint pairNum = 1; pairNum <= c_MAXPAIRNUM; pairNum++)
	     {
		     TelCoColorCoder::ColorPair currentColorPair = TelCoColorCoder::GetColorFromPairNumber(pairNum);
		     if(pairNum < c_TWODIGITSTARTINGINDEX)
		     {
		         std::cout <<c_FOURWHITESPACES<<pairNum<<c_SEVENWHITESPACES<<currentColorPair.ToString()<< std::endl;
		     }
		     else
		     {
		         std::cout <<c_THREEWHITESPACES<<pairNum<<c_SEVENWHITESPACES<< currentColorPair.ToString()<< std::endl;
		     }
		     
	     }
     }

int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    PrintColorCodingReferenceManual();

    return 0;
}
