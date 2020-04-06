//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit6.h"
#include <math.h>

   double kvadrat::calc_square()
	 {
		 double s=pow(AB,2);

		 return s;
	 }

   double kvadrat::calc_perimetr()
	 {
		 double p=AB * 4;

		 return p;
	 }

   void kvadrat::mass_centre(int &x0,int &y0)
	 {
		x0=AB/2;
		y0=AB/2;
	 }

   void kvadrat::move_mass_centre(int x0,int y0)
	 {
		 x=x0;
		 y=y0;
	 }

   void kvadrat::show(TCanvas *Canvas)
	 {
		Canvas -> Pen -> Color=clRed;
		Canvas -> Brush ->Color=clRed;
		Canvas -> Rectangle(x-AB/2,y-AB/2,x+AB/2,y+AB/2);
	 }

   void kvadrat::hide(TCanvas *Canvas)
	 {
		Canvas -> Pen -> Color=clWhite;
		Canvas -> Brush -> Color=clWhite;
		Canvas -> Rectangle(x-AB/2,y-AB/2,x+AB/2,y+AB/2);
	 }

   void kvadrat::move()
	 {
		 x+=5;
		 y+=3;
	 }

   void kvadrat::reset()
	 {
		 x=0;
		 y=0;
	 }

   void kvadrat::mashtab(int multiplcoef)
	 {
		 AB=AB*multiplcoef;
	 }

   void kvadrat::change_parametrs(int M,int N)
	 {
         AB=M;
     }
//---------------------------------------------------------------------------

#pragma package(smart_init)
