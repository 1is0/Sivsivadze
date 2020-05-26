//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <iomanip>
#include"Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
NewTree* ThisTree = new NewTree();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
try
	{
		int tkey = (EditNewNodeKey->Text).ToInt();
		Edit1->Text = ThisTree->findByKey(tkey);
	}
	catch(EConvertError&)
	{
	Application->MessageBox(String("Неверный ввод!").c_str(), String("Ошибка!").c_str(), MB_OK);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	 try
	{
		int tkey = (EditNewNodeKey->Text).ToInt();
		ThisTree->delNode(tkey);
		ThisTree->showTree(TreeView);
	}
	catch(EConvertError&)
	{
		Application->MessageBox(String("Неверный ввод!").c_str(), String("Ошибка!").c_str(), MB_OK);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
try
	{
		int tkey = (EditNewNodeKey->Text).ToInt();
		ThisTree->addNode(tkey);
		ThisTree->showTree(TreeView);
	}
	catch(EConvertError&)
	{
		Application->MessageBox(String("Неверный ввод!").c_str(), String("Ошибка!").c_str(), MB_OK);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	ThisTree->delTree();
    TreeView->Items->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
  ThisTree->delForTask();
  TreeView->Items->Clear();
  ThisTree->showTree(TreeView);
}
//---------------------------------------------------------------------------
