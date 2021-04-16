//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AuthorInfWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TAuthorInfForm *AuthorInfForm;
//---------------------------------------------------------------------------
__fastcall TAuthorInfForm::TAuthorInfForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAuthorInfForm::Button1Click(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

