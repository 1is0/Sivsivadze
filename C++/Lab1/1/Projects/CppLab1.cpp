//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "CppLab1.h"
#include <Windows.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
Car car;
MRectangle pivo;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}


//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
car.Draw();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button2Click(TObject *Sender)
{
for(int i = 0; i < 50; i++)
{
  car.CarMove(4,0);
  Sleep(20);
  car.MCanvaClear();
  car.Draw();
}




}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
if(car.isSvetit)
{
   car.isSvetit = false;
}
else
{
car.isSvetit = true;
}
   car.MCanvaClear();
   car.Draw();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
	 if(car.doorIsOpen)
{
   car.doorIsOpen = false;
}
else
{
car.doorIsOpen = true;
}
   car.MCanvaClear();
   car.Draw();
}
//---------------------------------------------------------------------------

