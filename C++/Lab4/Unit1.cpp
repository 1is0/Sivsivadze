//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include <stack>
#include <dstring.h>
#include<list>
#include<stdlib.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


	int myFunctions::getPriority(char a)
	{
		switch (a)
		{
		case '(':
		{
				return 0;

			}
		case ')':
		 {
				return 1;
			}
		case '+':
		case '-':
		 {
				return 2;
			}
		case '*':
		case '/':
		{
				return 3;
			}
		case '^':
		 {
				return 4;
			}
		}
	}

bool myFunctions::isFunc(char a)
{

		if (a == '+' || a == '-' || a == '/' || a == '*' || a == '^' ||
			a == '(' || a == ')') {
			return true;
		}
		else {
			return false;

		}
}





    float myFunctions::calculate(AnsiString inp, float a, float b, float c, float d, float e) {
		list<char>digitList;
		list<float>floatList;
		floatList.push_back(a);
		floatList.push_back(b);
		floatList.push_back(c);
		floatList.push_back(d);
		floatList.push_back(e);

		for(int i = 1; i <= inp.Length(); i++)
		{
		   if (isFunc(inp[i])) {
				digitList.push_back(inp[i]);
			}
        }

	
		float temp1, temp2, res;
		while (floatList.size() != 1) {
			temp1 = floatList.front();
			floatList.pop_front();
			temp2 = floatList.front();
			floatList.pop_front();
			floatList.push_front(calcMath(temp1, temp2, digitList.front()));
			digitList.pop_front();
		}
		return floatList.front();
	}




float myFunctions::calcMath(float a, float b, char digit)
{
		switch (digit) {
		case '+': {
				return a + b;
			}
		case '-': {
				return a - b;
			}
		case '*': {
				return a * b;
			}
		case '/': {
				return a / b;
			}
		case '^': {
				return powf(a, b);
			}
		}
}

AnsiString myFunctions::Convertmy(AnsiString a)
{
    AnsiString output = "";
		stack<char>st;
		for (int i = 1; i <= a.Length(); i++)
		 {
			if (!isFunc(a[i]))
			{

				output += a[i];
			}
			else if (a[i] == '(')
			{
				st.push('(');
			}
			else if (a[i] == ')') {
				while (st.top() != '(')
				{

					output += st.top();
					st.pop();
				}
				st.pop();
			}
			else
			{
				if (st.empty())
				{
					st.push(a[i]);
					continue;
				}
				else
					while (!st.empty() && getPriority(a[i]) <=
						getPriority(st.top())) {

						output += st.top();
						st.pop();

					}
				st.push(a[i]);
			}

		}
		while (!st.empty()) {
			output += st.top();
			st.pop();
		}
		return output;
}



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  myFunctions *func = new myFunctions();
  Edit7->Text = func->Convertmy(Edit1->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Edit1 -> Text = "(a+b)*(c+d)/e";
	Edit2-> Text = 0.8;
	Edit3-> Text = 4.1;
	Edit4 -> Text = 7.9;
	Edit5 -> Text = 6.2;
	Edit6 -> Text = 3.5;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	 myFunctions *func = new myFunctions();
	 Edit8->Text =func->calculate(Edit7->Text,StrToFloat(Edit2-> Text),
	  StrToFloat(Edit3-> Text),StrToFloat(Edit4 -> Text),
	  StrToFloat(Edit5 -> Text),StrToFloat(Edit6 -> Text));
}
//---------------------------------------------------------------------------
