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
//---------------------------------------------------------------------------
void __fastcall TForm1::btnShowClick(TObject *Sender)
{
	Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnHideClick(TObject *Sender)
{
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCloseClick(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnFinishClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
