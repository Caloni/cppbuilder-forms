//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btnShowClick(TObject *Sender)
{
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btnHideClick(TObject *Sender)
{
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btnCloseClick(TObject *Sender)
{
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::btnFinishClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
