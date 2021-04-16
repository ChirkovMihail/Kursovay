//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "TestsWindowUnit.h"
#include "UdarenieWindowUnit.h"
//#include "PristavWindowUnit.h"
#include "PristavkiWindowUnit.h"
#include "SuffiksyWindowUnit.h"
#include "KorniWindowUnit.h"
#include "AllTestWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)

TTestsForm *TestsForm;
//---------------------------------------------------------------------------
__fastcall TTestsForm::TTestsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTestsForm::CloseButtonClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TTestsForm::Button1Click(TObject *Sender)
{
	UdarenieForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTestsForm::Button2Click(TObject *Sender)
{
   //	PristavForm->ShowModal();
   PristavkiForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTestsForm::Button3Click(TObject *Sender)
{
	SuffiksyForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTestsForm::Button4Click(TObject *Sender)
{
	KorniForm->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TTestsForm::Button5Click(TObject *Sender)
{
	AllTestForm->ShowModal();
}
//---------------------------------------------------------------------------

