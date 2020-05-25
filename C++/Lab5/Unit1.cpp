//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
queue *object = new queue();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
int size = StrToInt(Edit1->Text);
    randomize();
int a;
for(int i = 0; i < size; i++)
{   a = random(1000);
	if(random(2) == 1)
	{
	object->insert(a);
	ListBox1->Items->Add(a);
	}
	else
	{
	   object->insert(-a);
	ListBox1->Items->Add(-a);
	}


}
queue *object1 = new queue();
for(int i = 1; i < size +1; i++)
	{
		if(object->qu[i] >= 0)
		{
			object1->insert(object->getValue());
			ListBox2->Items->Add(object->qu[i]);
		}
	}
}
//---------------------------------------------------------------------------
