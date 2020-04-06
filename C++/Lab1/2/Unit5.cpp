//---------------------------------------------------------------------------


#pragma hdrstop

#include "Unit5.h"
#include "Unit1.h"

#include <math.h>
#include <vcl.h>

   //MyRectangle::MyRectangle(): Polygon(70,70,100,100)

   double MyRectangle::calc_square()
	 {
		double s = AB * BC;

		return s;
	 }

   double MyRectangle::calc_perimetr()
	 {
		 double p=(AB + BC) * 2;

		 return p;
	 }

   void MyRectangle::mass_centre(int &x0,int &y0)
	 {
		  x0=AB/2;
		  y0=BC/2;
	 }

   void MyRectangle::show(TCanvas *Canvas)
	 {
	   Canvas -> Pen -> Color=clYellow;
	   Canvas -> Brush ->Color=clYellow;
	   Canvas -> Rectangle(x-AB/2,y-BC/2,x+AB/2,y+BC/2);
	 }

   void MyRectangle::move_mass_centre(int x0,int y0)
	 {
		 x=x0;
		 y=y0;
	 }

   void MyRectangle::hide(TCanvas *Canvas)
	 {
	   Canvas -> Pen -> Color=clWhite;
	   Canvas -> Brush -> Color=clWhite;
	   Canvas -> Rectangle(x-AB/2,y-BC/2,x+AB/2,y+BC/2);
	 }

   void MyRectangle::move()
	 {
		 x+=5;
		 y+=3;
	 }

   void MyRectangle::reset()
	 {
		 x=0;
		 y=0;
	 }

   void MyRectangle::mashtab(int multiplcoef)
	 {
		 AB=AB*multiplcoef;
		 BC=BC*multiplcoef;
	 }

   void MyRectangle::change_parametrs(int M,int N)
	 {
		 AB=M;
		 BC=N;
	 }

   void MyRectangle::rotate(TCanvas *Canvas,float a)
	 {
		 //поворот с помощью матрицы поворота

		 Canvas -> Pen -> Color=clWhite;
		 Canvas -> Brush -> Color=clWhite;
		 Canvas -> Rectangle(x1,y1,x2,y2);

		 x1=x-AB/2;
		 x2=x+AB/2;
		 y1=y-BC/2;
		 y2=y+BC/2;

		 int x1old=x1;
		 int y1old=y1;
		 int x2old=x2;
		 int y2old=y2;

		 Canvas -> Pen -> Color=clYellow;
		 Canvas -> Brush -> Color=clYellow;
		 x1=((x1old) * cos(a) + (y1old) * sin(a));
		 y1=((x1old) * sin(a) + (y1old) * cos(a));
		 x2 = ((x2old) * cos(a) + (y2old) * sin(a));
		 y2=((x2old) * sin(a) + (y2old) * cos(a));
		 Canvas -> Rectangle(x1,y1,x2,y2);
	 }

   String MyRectangle::vyvod()
	 {
		 String str=(String)AB + (String)BC;

		 return str;
	 }
//---------------------------------------------------------------------------

#pragma package(smart_init)
