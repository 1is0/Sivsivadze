//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
MyList*List1 = new MyList();
//---------------------------------------------------------------------------
int total = 0;
int counter = 0;
void MyList::Add(Flight* new_item) {
	if (!head)
		head = new_item;
	else
		tail->next = new_item;
	tail = new_item;

}

Flight* MyList::Search(int num) {

	Flight* current = List1->head;
	while (current) {
		if (current-> nubmer == num)
			return current;
		current = current->next;
	};

	return NULL;
}




Flight* MyList::SearchPoint(AnsiString point) {

	Flight* current = List1->head;
	while (current) {
		if (current-> point == point)
			return current;
		current = current->next;
	};

	return NULL;
}

void MyList::Remove(int num) {
	if (!List1->head) {
		ShowMessage("Â ñïèñêå íåò ýëåìåíòîâ");
		return;
	}
	else if (num == List1->head->nubmer) {
		Flight* old_item = List1->head;
		List1->head = head->next;
		delete old_item;
		return;
	}
	else {
		Flight* prev = List1->head;
		Flight* current = List1->head->next;
		for (int i = 1; current; i++) {
			if (num == current->nubmer) {
				if (!current->next)
					tail = prev;

				prev->next = current->next;
				delete current;
				return;
			}
			prev = current;
			current = current->next;
		}
	}
}


void __fastcall TForm1::ComboBox1Change(TObject *Sender)
{
if(ComboBox1 -> Text == "Добавить рейс")
{
	Edit1->Visible = true;
	Edit2->Visible = true;
	Edit3->Visible = true;
	Label1->Visible = true;
	Label2->Visible = true;
	Label3->Visible = true;
    ComboBox2->Visible = false;
	Button1->Visible = true;
	ComboBox3->Visible = false;
    Button2->Visible = false;

}
if(ComboBox1 -> Text == "Вывод рейса по номеру")
{
	Edit1->Visible = true;
	Edit2->Visible = true;
	Edit3->Visible = true;
	Label1->Visible = true;
	Label2->Visible = true;
	Label3->Visible = true;
    ComboBox2->Visible = true;
	Button1->Visible = false;
	ComboBox3->Visible = false;
	Button2->Visible = false;

}
if(ComboBox1 -> Text == "Отмена рейса")
{
	ComboBox2->Visible = false;
	ComboBox3->Visible = true;
	Edit1->Visible = false;
	Edit2->Visible = false;
	Edit3->Visible = false;
	Label1->Visible = false;
	Label2->Visible = false;
	Label3->Visible = false;
	Button1->Visible = false;
	Button2->Visible = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	AnsiString a ,b ,c;
	a = Edit1->Text;
	b = Edit2->Text;
	c = Edit3->Text;
	total++;
    counter++;
	Flight *flight = new Flight(a, b, c , total);
	List1->Add(flight);
	Edit1->Clear();
	Edit2->Clear();
    Edit3->Clear();
	ComboBox2->Items->Add(total);
    ComboBox3->Items->Add(total);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox2Change(TObject *Sender)
{
	int num = StrToInt(ComboBox2->Text);
	Flight* find = List1->Search(num);
	Edit1->Text = find -> type;
	Edit2->Text = find ->point;
	Edit3->Text = find -> time;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ComboBox3Change(TObject *Sender)
{
	Button2->Visible = True;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	 AnsiString s = ComboBox3->Text;
	 List1->Remove(StrToInt(ComboBox3->Text));
	 for(int i = 0; i < counter; i++)
	{
	   ComboBox3->ItemIndex = i;
	   if(s == ComboBox3->Text)
	   {
		   ComboBox3->Items->Delete(i);
           ComboBox2->Items->Delete(i);
           counter--;
       }
	}

	 Button2->Visible = false;
}
//---------------------------------------------------------------------------

