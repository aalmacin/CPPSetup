#include <iostream>
#include <sstream>
using namespace std;
namespace conv
{
  #ifndef AJ_STRING_CONVERTER_H_INCLUDED
  #define AJ_STRING_CONVERTER_H_INCLUDED
    int StringToNumber(string MyString);
  #endif

  int StringToNumber(string MyString)
  {
    istringstream converter(MyString); // Holds the string.
    int result;                        // Holds the integer result.

    converter >> result;
    return result;
  }
}
