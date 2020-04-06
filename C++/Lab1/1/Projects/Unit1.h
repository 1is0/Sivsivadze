//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
#include "CppLab1.h"
class MRectangle
{
	public:
	int XSize = 100;
    int YSize = 50;
	int XCoord = 200;
	int YCoord = 150;
	bool isSvetit = false;
	bool doorIsOpen = false;
	TPoint triangle[3] = {TPoint(318,190),TPoint(418,250),TPoint(418,90)};
	TPoint doorOpen[5] ={TPoint(280,199),TPoint(280 ,175), TPoint(265,150), TPoint(245,150), TPoint(245,199)};
	TPoint doorClosed[5] ={TPoint(280,199),TPoint(280,175), TPoint(255,150), TPoint(225,150), TPoint(225,199)};
	void CarMove(int a, int b)
	{
		XCoord += a;
		YCoord += b;
		triangle[0].X +=a;
		triangle[1].X +=a;
		triangle[2].X +=a;
		triangle[0].Y +=b;
		triangle[1].Y +=b;
		triangle[2].Y +=b;

		doorOpen[0].X +=a;
		doorOpen[1].X +=a;
		doorOpen[2].X +=a;
		doorOpen[3].X +=a;
		doorOpen[4].X +=a;

		doorOpen[0].Y +=b;
		doorOpen[1].Y +=b;
		doorOpen[2].Y +=b;
		doorOpen[3].Y +=b;
		doorOpen[4].Y +=b;

		doorClosed[0].X +=a;
		doorClosed[1].X +=a;
		doorClosed[2].X +=a;
		doorClosed[3].X +=a;
		doorClosed[4].X +=a;

		doorClosed[0].Y +=b;
		doorClosed[1].Y +=b;
		doorClosed[2].Y +=b;
		doorClosed[3].Y +=b;
		doorClosed[4].Y +=b;

		return;
	}
    public:
	void Draw()
	{
		Form2->Canvas->Pen->Color = clBlack;
		Form2->Canvas->Brush->Color = clRed;
		Form2->Canvas->Rectangle(XCoord, YCoord, XCoord + XSize, YCoord + YSize);
		Form2->Canvas->Brush->Color = clYellow;
		Form2->Canvas->Rectangle(XCoord + XSize - 1, YCoord + 30, XCoord + XSize + 20 - 1, YCoord + 50);
		Form2->Canvas->Brush->Color = clBlack;
		Form2->Canvas->Ellipse(XCoord - 15, YCoord + YSize - 15, XCoord + 15, YCoord + YSize + 15);
		Form2->Canvas->Ellipse(XCoord + XSize - 15, YCoord + YSize - 15, XCoord + XSize + 15, YCoord + YSize + 15);
		Form2->Canvas->Brush->Color = clGreen;
		if(doorIsOpen)
		{
		  Form2->Canvas->Polygon(doorOpen,4);
		}
		else
		{
			  Form2->Canvas->Polygon(doorClosed,4);
		}
		if(isSvetit)
		{
		Form2->Canvas->Brush->Color = clBlue;
		Form2->Canvas->Polygon(triangle,2);
		}

	}
	void MCanvaClear()
	{
	   Form2->Canvas->Pen->Color = clWhite;
	   Form2->Canvas->Brush->Color = clWhite;
	   Form2->Canvas->Rectangle(0, 0, 1920, 1080);
    }
};




//---------------------------------------------------------------------------
#endif
