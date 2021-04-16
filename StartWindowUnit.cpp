//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "StartWindowUnit.h"
#include "TestsWindowUnit.h"
#include "AuthorInfWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.GGlass.fmx", _PLAT_ANDROID)
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.LgXhdpiTb.fmx", _PLAT_ANDROID)
#pragma resource ("*.XLgXhdpiTb.fmx", _PLAT_ANDROID)

TStartForm *StartForm;
//---------------------------------------------------------------------------
__fastcall TStartForm::TStartForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TStartForm::CloseButtonClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TStartForm::StartButtonClick(TObject *Sender)
{
	TestsForm->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TStartForm::Button1MouseEnter(TObject *Sender)
{
	Label1->Text="Информация об авторе";
}
//---------------------------------------------------------------------------

void __fastcall TStartForm::Button1MouseLeave(TObject *Sender)
{
    Label1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TStartForm::Button1Click(TObject *Sender)
{
	AuthorInfForm->ShowModal();
}
//---------------------------------------------------------------------------

