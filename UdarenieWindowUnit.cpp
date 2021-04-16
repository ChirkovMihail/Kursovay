//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UdarenieWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TUdarenieForm *UdarenieForm;
//---------------------------------------------------------------------------
__fastcall TUdarenieForm::TUdarenieForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::CloseButtonClick(TObject *Sender)
{
	Close();

	int i;
	for (i = 0; i < 90; i++) {
		 StringGrid1->Cells[0][i]="";
		 StringGrid1->Cells[1][i]="";
		 StringGrid1->Cells[2][i]="";
	}
	Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::StartButtonClick(TObject *Sender)
{
	Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=true;

	int i,j=1;
	for (i = 0; i < 90; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+".� ����� �� ���������� ���� ���� �������� ������ � ���������� ��������:";
		StringGrid1->Cells[0][i+1]="������� �������� �����, ������������ ������� ������� ����. �������� ��� �����.";
		j++;
	}

	for (i = 5; i < 90; i+=6) {
		  StringGrid1->Cells[0][i]="----------------------------------------------------------------------------------------------------";
		  StringGrid1->Cells[1][i]="---------------------------";
		  StringGrid1->Cells[2][i]="-------------------------";
		  StringGrid1->Cells[2][i-1]="-------------------------";
		  StringGrid1->Cells[2][i-2]="-------------------------";
		  StringGrid1->Cells[2][i-3]="-------------------------";
		  StringGrid1->Cells[2][i-4]="-------------------------";
	}

	StringGrid1->Cells[1][0]="�����";     //1
	StringGrid1->Cells[1][1]="�����������";
	StringGrid1->Cells[1][2]="�������";
	StringGrid1->Cells[1][3]="�����������";
	StringGrid1->Cells[1][4]="��������";

	StringGrid1->Cells[1][6]="��� ��������";   //2
	StringGrid1->Cells[1][7]="�����";
	StringGrid1->Cells[1][8]="���������";
	StringGrid1->Cells[1][9]="��������";
	StringGrid1->Cells[1][10]="��������";

	StringGrid1->Cells[1][12]="�������";               //3
	StringGrid1->Cells[1][13]="�����";
	StringGrid1->Cells[1][14]="������";
	StringGrid1->Cells[1][15]="��������";
	StringGrid1->Cells[1][16]="�������";

	StringGrid1->Cells[1][18]="����� ";           //4
	StringGrid1->Cells[1][19]="������������ ";
	StringGrid1->Cells[1][20]="������ ";
	StringGrid1->Cells[1][21]="������� ";
	StringGrid1->Cells[1][22]="��������";

	StringGrid1->Cells[1][24]="��������� ";                //5
	StringGrid1->Cells[1][25]="������� ";
	StringGrid1->Cells[1][26]="����������� ";
	StringGrid1->Cells[1][27]="������� ";
	StringGrid1->Cells[1][28]="��������";

	StringGrid1->Cells[1][30]="������ ";             //6
	StringGrid1->Cells[1][31]="��������� ";
	StringGrid1->Cells[1][32]="���������� ";
	StringGrid1->Cells[1][33]="����� ";
	StringGrid1->Cells[1][34]="��������";

	StringGrid1->Cells[1][36]="�������� ";
	StringGrid1->Cells[1][37]="�������� ";            //7
	StringGrid1->Cells[1][38]="������� ";
	StringGrid1->Cells[1][39]="�������� ( � �����)";
	StringGrid1->Cells[1][40]="�������� (�� ��� ���)";

	StringGrid1->Cells[1][42]="��������� ";            //8
	StringGrid1->Cells[1][43]="��������� ";
	StringGrid1->Cells[1][44]="������� ";
	StringGrid1->Cells[1][45]="������ ";
	StringGrid1->Cells[1][46]="�������";

	StringGrid1->Cells[1][48]="�������� ";
	StringGrid1->Cells[1][49]="������ ";   //9
	StringGrid1->Cells[1][50]="������� ";
	StringGrid1->Cells[1][51]="������ ";
	StringGrid1->Cells[1][52]="���������";

	StringGrid1->Cells[1][54]="����� ";
	StringGrid1->Cells[1][55]="�������� ";      //10
	StringGrid1->Cells[1][56]="������������� ";
	StringGrid1->Cells[1][57]="����������� ";
	StringGrid1->Cells[1][58]="�����";

	StringGrid1->Cells[1][60]="�������� ";
	StringGrid1->Cells[1][61]="����� "; //11
	StringGrid1->Cells[1][62]="������������ ";
	StringGrid1->Cells[1][63]="��������  ";
	StringGrid1->Cells[1][64]="������";

	StringGrid1->Cells[1][66]="������� ";       //12
	StringGrid1->Cells[1][67]="������������ ";
	StringGrid1->Cells[1][68]="������� ";
	StringGrid1->Cells[1][69]="���������� ";
	StringGrid1->Cells[1][70]="��������";

	StringGrid1->Cells[1][72]="������ ";
	StringGrid1->Cells[1][73]="������� ";        //13
	StringGrid1->Cells[1][74]="�������� ";
	StringGrid1->Cells[1][75]="�������� ";
	StringGrid1->Cells[1][76]="���������";

	StringGrid1->Cells[1][78]="������� ";
	StringGrid1->Cells[1][79]="�������� ";    //14
	StringGrid1->Cells[1][80]="������ ";
	StringGrid1->Cells[1][81]="������ ";
	StringGrid1->Cells[1][82]="�������";

	StringGrid1->Cells[1][84]="��������� ";            //15
	StringGrid1->Cells[1][85]="������ ";
	StringGrid1->Cells[1][86]="��������� ";
	StringGrid1->Cells[1][87]="�������� ";
	StringGrid1->Cells[1][88]="�����������";

}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::CheckButtonClick(TObject *Sender)
{
	StringColumn3->ReadOnly=true;
	Button1->Enabled=true;
	Timer1->Enabled=false;

	int s=0;

	if (StringGrid1->Cells[2][0]=="�����������") {
		s++;
		StringGrid1->Cells[2][1]="�����";
	}
	else StringGrid1->Cells[2][1]="�������";

	if (StringGrid1->Cells[2][6]=="�����") {
		s++;
		StringGrid1->Cells[2][7]="�����";
	}
	else StringGrid1->Cells[2][7]="�������";

	if (StringGrid1->Cells[2][12]=="�������") {
		s++;
		StringGrid1->Cells[2][13]="�����";
	}
	else StringGrid1->Cells[2][13]="�������";

	if (StringGrid1->Cells[2][18]=="�������") {
		s++;
		StringGrid1->Cells[2][19]="�����";
	}
	else StringGrid1->Cells[2][19]="�������";

	if (StringGrid1->Cells[2][24]=="�������") {
		s++;
		StringGrid1->Cells[2][25]="�����";
	}
	else StringGrid1->Cells[2][25]="�������";

	if (StringGrid1->Cells[2][30]=="����������") {
		s++;
		StringGrid1->Cells[2][31]="�����";
	}
	else StringGrid1->Cells[2][31]="�������";

	if (StringGrid1->Cells[2][36]=="��������") {
		s++;
		StringGrid1->Cells[2][37]="�����";
	}
	else StringGrid1->Cells[2][37]="�������";

	if (StringGrid1->Cells[2][42]=="���������") {
		s++;
		StringGrid1->Cells[2][43]="�����";
	}
	else StringGrid1->Cells[2][43]="�������";

	if (StringGrid1->Cells[2][48]=="�������") {
		s++;
		StringGrid1->Cells[2][49]="�����";
	}
	else StringGrid1->Cells[2][49]="�������";

	if (StringGrid1->Cells[2][54]=="�������������") {
		s++;
		StringGrid1->Cells[2][55]="�����";
	}
	else StringGrid1->Cells[2][55]="�������";

	if (StringGrid1->Cells[2][60]=="�����") {
		s++;
		StringGrid1->Cells[2][61]="�����";
	}
	else StringGrid1->Cells[2][61]="�������";

	if (StringGrid1->Cells[2][66]=="��������") {
		s++;
		StringGrid1->Cells[2][67]="�����";
	}
	else StringGrid1->Cells[2][67]="�������";

	if (StringGrid1->Cells[2][72]=="��������") {
		s++;
		StringGrid1->Cells[2][73]="�����";
	}
	else StringGrid1->Cells[2][73]="�������";

	if (StringGrid1->Cells[2][78]=="�������") {
		s++;
		StringGrid1->Cells[2][79]="�����";
	}
	else StringGrid1->Cells[2][79]="�������";

	if (StringGrid1->Cells[2][84]=="�����������") {
		s++;
		StringGrid1->Cells[2][85]="�����";
	}
	else StringGrid1->Cells[2][85]="�������";

	CheckLabel->Text=IntToStr(s);
}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[2][4]="�����������";
	StringGrid1->Cells[2][10]="�����";
	StringGrid1->Cells[2][16]="�������";
	StringGrid1->Cells[2][22]="�������";
	StringGrid1->Cells[2][28]="�������";
	StringGrid1->Cells[2][34]="����������";
	StringGrid1->Cells[2][40]="��������";
	StringGrid1->Cells[2][46]="���������";
	StringGrid1->Cells[2][52]="�������";
	StringGrid1->Cells[2][58]="�������������";
	StringGrid1->Cells[2][64]="�����";
	StringGrid1->Cells[2][70]="��������";
	StringGrid1->Cells[2][76]="��������";
	StringGrid1->Cells[2][82]="�������";
	StringGrid1->Cells[2][88]="�����������";
}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::Timer1Timer(TObject *Sender)
{
	Label3->Text=IntToStr(StrToInt(Label3->Text)+1);

	if (StrToInt(Label3->Text)%60==0) {
		Label4->Text=IntToStr(StrToInt(Label4->Text)+1);
        Label3->Text="0";
	}

	if (StrToInt(Label4->Text==10)) {

		CheckLabel->Text="����� ����� \n������� ���������";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------
