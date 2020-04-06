//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H

#include "Unit5.h"

class kvadrat : public MyRectangle
  {
    public:

	  double calc_square();

	  double calc_perimetr();

	  void mass_centre(int &x0,int &y0);

	  void move_mass_centre(int x0,int y0);

	  void show(TCanvas *Canvas);

	  void hide(TCanvas *Canvas);

	  void move();

	  void reset();

	  void mashtab(int multiplcoef);

	  void change_parametrs(int M,int N);
  };

//---------------------------------------------------------------------------
#endif
