//---------------------------------------------------------------------------

#include <vcl.h>
#include <strstream.h>
#include <string>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include <Types.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
MyRectangle rect;
Circle ellipse;
kvadrat sqr;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(ComboBox1->ItemIndex==0)
	  {
		 rect.hide(Image1->Canvas);
		 rect.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==1)
	  {
		 sqr.hide(Image1->Canvas);
		 sqr.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==2)
	  {
		 ellipse.hide(Image1->Canvas);
		 ellipse.show(Image1->Canvas);
	  }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	ComboBox1->Items->Add("Прямоугольник");
	ComboBox1->Items->Add("Квадрат");
	ComboBox1->Items->Add("Круг");

	ComboBox1->ItemIndex=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if(ComboBox1->ItemIndex==0)
	  {
		  rect.hide(Image1->Canvas);
		  rect.move_mass_centre(150,150);
		  rect.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==1)
	  {
		  sqr.hide(Image1->Canvas);
		  sqr.move_mass_centre(100,100);
		  sqr.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==2)
	  {
		 ellipse.hide(Image1->Canvas);
		 ellipse.move_mass_centre(100,100);
		 ellipse.show(Image1->Canvas);
	  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Label2->Caption="";
  if(ComboBox1->ItemIndex==0)
	{
	   Label2->Caption = Label2->Caption + FloatToStrF(rect.calc_square(),ffFixed,5,2) + " " + rect.vyvod();

	}

  if(ComboBox1->ItemIndex==1)
	{
	   Label2->Caption = Label2->Caption + FloatToStrF(sqr.calc_square(),ffFixed,5,2) + " ";
	}

  if(ComboBox1->ItemIndex==2)
	{
	   Label2->Caption = Label2->Caption + FloatToStrF(ellipse.calc_square(),ffFixed,5,2) + " ";
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::TimerAllTimer(TObject *Sender)
{

   if(ComboBox1->ItemIndex==0)
	  {
		 rect.hide(Image1->Canvas);
		 rect.move();
		 rect.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==1)
	  {
		 sqr.hide(Image1->Canvas);
		 sqr.move();
		 sqr.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==2)
	  {
		 ellipse.hide(Image1->Canvas);
		 ellipse.move();
		 ellipse.show(Image1->Canvas);
	  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
   TimerAll->Enabled=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
   TimerAll->Enabled=false;

   Image1->Canvas->Brush->Color = clWhite;
   Image1->Canvas->Pen->Color = clWhite;
   Image1->Canvas->FillRect(Rect(0,0, Image1->Width, Image1->Height));
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button6Click(TObject *Sender)
{
   Label2->Caption="";
  if(ComboBox1->ItemIndex==0)
	{
	   Label2->Caption = Label2->Caption + FloatToStrF(rect.calc_perimetr(),ffFixed,5,2) + " ";
	}

  if(ComboBox1->ItemIndex==1)
	{
	   Label2->Caption = Label2->Caption + FloatToStrF(sqr.calc_perimetr(),ffFixed,5,2) + " ";
	}

  if(ComboBox1->ItemIndex==2)
	{
	   Label2->Caption = Label2->Caption + FloatToStrF(ellipse.calc_perimetr(),ffFixed,5,2) + " ";
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
   int z=0,f=0;

   Label2->Caption="";
  if(ComboBox1->ItemIndex==0)
	{
	   rect.mass_centre(z,f);
	   Label2->Caption = Label2->Caption + "("+IntToStr(z) + "; "+IntToStr(f)+")";
	}

  if(ComboBox1->ItemIndex==1)
	{
	   sqr.mass_centre(z,f);
	   Label2->Caption = Label2->Caption + "("+IntToStr(z) + "; "+IntToStr(f)+")";
	}

  if(ComboBox1->ItemIndex==2)
	{
	   ellipse.mass_centre(z,f);
	   Label2->Caption = Label2->Caption + "("+IntToStr(z) + "; "+IntToStr(f)+")";
	}
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
   if(ComboBox1->ItemIndex==0)
	  {
		  rect.hide(Image1->Canvas);
		  rect.mashtab(3);
		  rect.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==1)
	  {
		  sqr.hide(Image1->Canvas);
		  sqr.mashtab(3);
		  sqr.show(Image1->Canvas);
	  }

	if(ComboBox1->ItemIndex==2)
	  {
		 ellipse.hide(Image1->Canvas);
		 ellipse.mashtab(3);
		 ellipse.show(Image1->Canvas);
	  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
   int ed=StrToInt(Edit1->Text);
   int M,N;

   ellipse.hide(Image1->Canvas);
   ellipse.change_parametrs(ed,0);
   ellipse.show(Image1->Canvas);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{

   int a=StrToInt(Edit2->Text);
   int b=StrToInt(Edit3->Text);


   rect.hide(Image1->Canvas);
   rect.change_parametrs(a,b);
   rect.show(Image1->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
   int sr;

   sr=StrToInt(Edit4->Text);

   sqr.hide(Image1->Canvas);
   sqr.change_parametrs(sr,0);
   sqr.show(Image1->Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
  float a=90;

  //a=StrToFloat(Edit5->Text);
  //переводим в радианы
  a=a/57.3;
  if(ComboBox1->ItemIndex==0)
  {
	rect.hide(Image1->Canvas);
	rect.rotate(Image1->Canvas,a);
  }
}
//---------------------------------------------------------------------------

