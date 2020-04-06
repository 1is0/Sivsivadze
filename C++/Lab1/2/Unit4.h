//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
#include "Unit2.h"
class Polygon:public Figure
  {
    public:
	  double x1;
	  double y1;
	  double x2;
	  double y2;


	  Polygon():Figure()//конструктор
		{
		   x1=10;
		   y1=10;
		   x2=100;
		   y2=100;
		}

  };

//---------------------------------------------------------------------------
#endif
