//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonClick(TObject *Sender)
{
int tkey, ind, nums_cnt;
try
{
   nums_cnt = (Edit1->Text).ToInt();
   for(int i = 0; i < nums_cnt; i++)
   {
	  tkey = rand();
	  myHash.AddMyNode(hashTable, tkey);
	  ind = myHash.HashTableFunc(tkey);
	  Memo1->Lines->Add("Key: " + (AnsiString)hashTable[myHash.HashTableFunc(tkey)]->key +
	   " Index in hash table: " + ind);
   }
}
catch(EConvertError&)
{
    Application->MessageBox(String("Amount must be integer").c_str(), MB_OK);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
try
	{
		int key = (EditKey->Text).ToInt();
		AnsiString string;
		if(myHash.SearchMyNode(hashTable, key) != nullptr) string = "Was found";
		else string = "Wasn't found";
        Label6->Caption = string;
	}
	catch(EConvertError&)
	{
		Application->MessageBox(String("Key can not be a symbol").c_str(), MB_OK);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
try
	{
		Label6->Caption = "";
		int tkey = (EditKey->Text).ToInt();
		while(myHash.SearchMyNode(hashTable, tkey) != nullptr)
		{
		  myHash.DelMyNode(hashTable, tkey);
		}
		Memo1->Lines->Clear();
		for(int i = 0; i < tabSize; i++)
		{
		   if(hashTable[i] != nullptr)
		   {
			  for(NewNode * ptr = hashTable[i]; ptr!=NULL;ptr=ptr->next)
			  {
				 Memo1->Lines->Add("Key: " + (AnsiString)ptr->key + " Index in hash table: " + i);
			  }
		   }
		}
	}
	catch(EConvertError&)
	{
		Application->MessageBox(String("Key can not be a symbol").c_str(), MB_OK);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Edit2->Text = myHash.PrintCount(hashTable);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
srand(time(NULL));
}
//---------------------------------------------------------------------------
