//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
#include "Unit4.h"
#include <vcl.h>
class MyRectangle:public Polygon
{
	public:
		double AB;
		double BC;
		int x1,y1,x2,y2;

		MyRectangle()
		{
			AB=40;
			BC=30;
			x=50;
			y=50;
			x1=x-AB/2;
			x2=x+AB/2;
			y1=y-BC/2;
			y2=y+BC/2;
		}

		double calc_square();

		double calc_perimetr();

		void mass_centre(int &x0,int &y0);

		void show(TCanvas *Canvas);

		void move_mass_centre(int x0,int y0);

		void hide(TCanvas *Canvas);

		void move();

		void reset();

		void mashtab(int multiplcoef);

		void change_parametrs(int M,int N);

		void rotate(TCanvas *Canvas,float a);

		String vyvod();
};

//---------------------------------------------------------------------------
#endif
