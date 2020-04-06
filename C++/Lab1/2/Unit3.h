//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H

#include "Unit2.h"
#include <vcl.h>

class Circle : public Figure
  {
	 public:
	 float r1;//радиус круга

	 Circle():Figure()//конструктор
	   {
		   r1=30;
		   x=100;
		   y=100;
	   }

	   double calc_perimetr();

	   double calc_square();

	   void mass_centre(int &x0,int &y0);

	   void move_mass_centre(int x0,int y0);

	   void show(TCanvas *Canvas);

	   void hide(TCanvas *Canvas);

	   void move();

	   void reset();

	   void mashtab(int multiplcoef);

	   void change_parametrs(int M,int N);

	   void rotate(TCanvas *Canvas,float a);
  };

//---------------------------------------------------------------------------
#endif
