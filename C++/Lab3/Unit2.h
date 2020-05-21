//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <string>
using namespace std;
#include <vector>
#endif
//---------------------------------------------------------------------------
struct Flight
{
   int nubmer;
	AnsiString type;
	AnsiString point;
	AnsiString time;

	Flight *next;
	Flight *prev;
	Flight(AnsiString t, AnsiString p, AnsiString ti, int n) : nubmer(n), type(t), point(p),
	time(ti), next(NULL), prev(NULL){};

};
class MyList
{
	public:

	   Flight* head;
	   Flight* tail;
		void Add(Flight *item);
		void Remove(int num);
		Flight* SearchPoint(AnsiString point);
		Flight* Search(int num);
};
