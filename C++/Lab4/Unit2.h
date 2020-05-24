//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H

#include <string>
#include <dstring.h>
using namespace std;
class myFunctions
{
public:
AnsiString Convertmy(AnsiString a);
bool isFunc(char a);
int getPriority(char a);
float calculate(AnsiString inp, float a, float b, float c, float d, float e);
float calcMath(float a, float b, char digit);
};
//---------------------------------------------------------------------------
#endif
