//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
#include "Unit2.h"
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TEdit *Edit1;
	TButton *Button;
	TLabel *Label6;
	TButton *Button2;
	TEdit *EditKey;
	TButton *Button3;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button1;
	TEdit *Edit2;
	void __fastcall ButtonClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	ForTask myHash;
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
