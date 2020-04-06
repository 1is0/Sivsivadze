//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
#include <math.h>

	   double Circle::calc_perimetr()
		 {
			 double PI=3.14;
			 double p=2 * PI * r1;

			 return p;
		 }

	   double Circle::calc_square()
		 {
			 double PI=3.14;
			 double s=PI * pow(r1,2);

			 return s;
		 }

	   void Circle::mass_centre(int &x0,int &y0)
		 {
			 x0=x;
			 y0=y;
		 }

	   void Circle::show(TCanvas *Canvas)
		 {
			Canvas -> Pen -> Color=clGreen;
			Canvas -> Brush ->Color=clGreen;
			Canvas -> Ellipse(x-r1,y+r1,x+r1,y-r1);
		 }

	   void Circle::move_mass_centre(int x0,int y0)
		 {
			 x=x0;
			 y=y0;
		 }

	   void Circle::hide(TCanvas *Canvas)
		 {
			Canvas -> Pen -> Color=clWhite;
			Canvas -> Brush -> Color=clWhite;
			Canvas -> Ellipse(x-r1,y+r1,x+r1,y-r1);
		 }

	   void Circle::move()
		 {
			 x+=5;
			 y+=3;
		 }

	   void Circle::reset()//функция для возвращения к начальным параметрам
		 {
			 x=-10;
			 y=-10;
		 }

	   void Circle::mashtab(int multiplcoef)
		 {
			 r1=r1*multiplcoef;
		 }

	   void Circle::change_parametrs(int M,int N)
		 {
			 r1=M;

		 }

	   void Circle::rotate(TCanvas *Canvas,float a)
		 {

		 }
//---------------------------------------------------------------------------

#pragma package(smart_init)
