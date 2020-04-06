//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H

#include <vcl.h>

class Figure
  {
	  public:

		int x;
		int y;

		Figure()
		  {
			  x=0;
			  y=0;
		  }

		virtual double calc_square() =0;

		virtual double calc_perimetr() =0;

		virtual void mass_centre(int &x0,int &y0) =0;

		virtual void move_mass_centre(int x0,int y0) =0;

		virtual void move() =0;

		virtual void reset() =0;

		virtual void mashtab(int multiplcoef) =0; //multiplkoef-multiplication coefficient-коэффициент масштабирования

		virtual void change_parametrs(int M,int N) =0;

		virtual void rotate(TCanvas *Canvas,float a) =0;

		virtual String vyvod() {}
  };
//---------------------------------------------------------------------------
#endif
