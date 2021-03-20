//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *btnHide;
	TButton *btnClose;
	TButton *btnFinish;
	TImage *imgPortrait;
	TButton *btnShow;
	void __fastcall btnShowClick(TObject *Sender);
	void __fastcall btnHideClick(TObject *Sender);
	void __fastcall btnCloseClick(TObject *Sender);
	void __fastcall btnFinishClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
