namespace TelCoColorCoder
{
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    const char* const MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    const char* const MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "State"
    };
    //Constants are declared for inserting whitespaces accordingly for proper formatting
    const std::string threeSpaces = "    ";
    const std::string twoSpaces = "  ";
    const std::string singleSpace = " ";


    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            std::string ToString();
    };

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorCodingReferenceManual();
    }
