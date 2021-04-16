//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "SuffiksyWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TSuffiksyForm *SuffiksyForm;
//---------------------------------------------------------------------------
__fastcall TSuffiksyForm::TSuffiksyForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSuffiksyForm::CloseButtonClick(TObject *Sender)
{
	Close();

	int i;
	for (i = 0; i < 120; i++) {
		 StringGrid1->Cells[0][i]="";
		 StringGrid1->Cells[1][i]="";
		 StringGrid1->Cells[2][i]="";
	}
    Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TSuffiksyForm::StartButtonClick(TObject *Sender)
{
	 int i,j=1;
	 for (i = 5; i < 120; i+=6) {
		  StringGrid1->Cells[0][i]="-----------------------------------------------------------------------------";
		  StringGrid1->Cells[1][i]="----------------------------------------------------------------------------------";
		  StringGrid1->Cells[2][i]="--------------------";
		  StringGrid1->Cells[2][i-1]="--------------------";
		  StringGrid1->Cells[2][i-2]="--------------------";
		  StringGrid1->Cells[2][i-3]="--------------------";
		  StringGrid1->Cells[2][i-4]="--------------------";
	 }

	 for (i = 0; i < 120; i+=6) {
		  StringGrid1->Cells[0][i]=IntToStr(j)+". ������� �������� �������, � ������� �� ���� ������ ������";
		  StringGrid1->Cells[0][i+1]="���� ��������� ���� � �� �� �����. �������� ������ �������.";
		  j++;
	 }
	 Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=true;

	StringGrid1->Cells[1][0]="1) �����..���, �����..������";     //1
	StringGrid1->Cells[1][1]="2) �����..����, ������..���";
	StringGrid1->Cells[1][2]="3) �����..������, ����..���";
	StringGrid1->Cells[1][3]="4) �����..���, ���..����";
	StringGrid1->Cells[1][4]="5) �����..���, �������..���";

	StringGrid1->Cells[1][6]="1) �����..�����, �����..���";   //2
	StringGrid1->Cells[1][7]="2) ���..���, ���..����";
	StringGrid1->Cells[1][8]="3) �����..����, ���..�����";
	StringGrid1->Cells[1][9]="4) �����..���, �����..�";
	StringGrid1->Cells[1][10]="5) �������..������, ����..���";

	StringGrid1->Cells[1][12]="1) �����..��� (���), ����..��� (������)";               //3
	StringGrid1->Cells[1][13]="2) (����) ������..���, ����..���� (����������)";
	StringGrid1->Cells[1][14]="3) ���..���� (������), �������..�� (�������)";
	StringGrid1->Cells[1][15]="4) ����������..��� (�������), ����������..���� (��������)";
	StringGrid1->Cells[1][16]="5) (�����) ������..�, ���..��� (������)";

	StringGrid1->Cells[1][18]="1) �������..������, ����..���";           //4
	StringGrid1->Cells[1][19]="2) �������..���, ����..�����";
	StringGrid1->Cells[1][20]="3) ����..����, �����..��";
	StringGrid1->Cells[1][21]="4) ������..���, �����..����";
	StringGrid1->Cells[1][22]="5) ��������..���, ���..���";

	StringGrid1->Cells[1][24]="1) ���..�����, ����..������";                //5
	StringGrid1->Cells[1][25]="2) ����..���, ����..���� (����������)";
	StringGrid1->Cells[1][26]="3) �����..��� (�������), ������..";
	StringGrid1->Cells[1][27]="4) �����..���, ������..���";
	StringGrid1->Cells[1][28]="5) �����..����, ����..��� (������)";

	StringGrid1->Cells[1][30]="1) ������..����, �����..���";             //6
	StringGrid1->Cells[1][31]="2) ������..���; ���..���";
	StringGrid1->Cells[1][32]="3) ��..����, �������..����";
	StringGrid1->Cells[1][33]="4) ���..����, ����..����";
	StringGrid1->Cells[1][34]="5) ��������..��, ������..����";

	StringGrid1->Cells[1][36]="1) �������..����, �����..�������";
	StringGrid1->Cells[1][37]="2) ����..����, ������..���";            //7
	StringGrid1->Cells[1][38]="3) ������..���, ������..����";
	StringGrid1->Cells[1][39]="4) ������..���, ���..�����";
	StringGrid1->Cells[1][40]="5) �����..�����, ����..��";

	StringGrid1->Cells[1][42]="1) �����..���, ����..���";            //8
	StringGrid1->Cells[1][43]="2) �����..����, �����..�";
	StringGrid1->Cells[1][44]="3) �������..���, ������..�";
	StringGrid1->Cells[1][45]="4) ����..���, ������..�����";
	StringGrid1->Cells[1][46]="5) ����..����, �����..����";

	StringGrid1->Cells[1][48]="1) �����..����, ������..���";
	StringGrid1->Cells[1][49]="2) �������..���, ���..���";   //9
	StringGrid1->Cells[1][50]="3) ���������..���, �������..� (� ��������)";
	StringGrid1->Cells[1][51]="4) ������.., �������..";
	StringGrid1->Cells[1][52]="5) �����..���, ���..�����";

	StringGrid1->Cells[1][54]="1) �����..����, �����..�";
	StringGrid1->Cells[1][55]="2) ��������..����, �����..��";      //10
	StringGrid1->Cells[1][56]="3) ������..�����, ����..���";
	StringGrid1->Cells[1][57]="4) �����..���, �������..����";
	StringGrid1->Cells[1][58]="5) ��������..������, ���..��";

	StringGrid1->Cells[1][60]="1) �������..����, �����..���";
	StringGrid1->Cells[1][61]="2) �����..���, �������..���"; //11
	StringGrid1->Cells[1][62]="3) ����..��� (��������), ����..��� (��������)";
	StringGrid1->Cells[1][63]="4) ������..����, �����..����";
	StringGrid1->Cells[1][64]="5) ����..����, �������..�";

	StringGrid1->Cells[1][66]="1) �����..���, ���..��";       //12
	StringGrid1->Cells[1][67]="2) ����..���, ���..�";
	StringGrid1->Cells[1][68]="3) �������..���, ���..���";
	StringGrid1->Cells[1][69]="4) ���������..����, ����..���";
	StringGrid1->Cells[1][70]="5) �����..���, ���..���";

	StringGrid1->Cells[1][72]="1) ����..����, ������..���";
	StringGrid1->Cells[1][73]="2) �������..���, ������..��� (�������)";        //13
	StringGrid1->Cells[1][74]="3) �����..��, ������..������";
	StringGrid1->Cells[1][75]="4) �������..������, ������..���";
	StringGrid1->Cells[1][76]="5) ���������..���, �������..";

	StringGrid1->Cells[1][78]="1) ���������..���, �����..����";
	StringGrid1->Cells[1][79]="2) �����..������, �����..����";    //14
	StringGrid1->Cells[1][80]="3) ������..���, ������..���";
	StringGrid1->Cells[1][81]="4) ��������..����, ������..���";
	StringGrid1->Cells[1][82]="5) �������..���, ���..����";

	StringGrid1->Cells[1][84]="1) ����..���, ������..��";            //15
	StringGrid1->Cells[1][85]="2) �����..�����, ���..���";
	StringGrid1->Cells[1][86]="3) ����..������, ��..���� (�����)";
	StringGrid1->Cells[1][87]="4) �����..������, �������..����";
	StringGrid1->Cells[1][88]="5) �����..���, ���..���";

	StringGrid1->Cells[1][90]="1) �������..������, ����..���";
	StringGrid1->Cells[1][91]="2) �����..������, ���..���";          //16
	StringGrid1->Cells[1][92]="3) ������..�����, �����..��";
	StringGrid1->Cells[1][93]="4) ������..������, ����..����";
	StringGrid1->Cells[1][94]="5) �����..���, �����..��";

	StringGrid1->Cells[1][96]="1) ������..�, �����..����";
	StringGrid1->Cells[1][97]="2) �����..���� (������), �����..������";    //17
	StringGrid1->Cells[1][98]="3) ����������..���, �����..������";
	StringGrid1->Cells[1][99]="4) ������..��� (���������), �����.. (�������)";
	StringGrid1->Cells[1][100]="5) �����..���, �����..��� (�����)";

	StringGrid1->Cells[1][102]="1) �����..���, ��������..���";            //18
	StringGrid1->Cells[1][103]="2) �����..������, �����..���";
	StringGrid1->Cells[1][104]="3) �����..�����, ������..���";
	StringGrid1->Cells[1][105]="4) �������..������, ���..����";
	StringGrid1->Cells[1][106]="5) ������..���, �����..������";

	StringGrid1->Cells[1][108]="1) �������..���, �����..����";
	StringGrid1->Cells[1][109]="2) ������..��, �����..�����";            //19
	StringGrid1->Cells[1][110]="3) �����..�����, �����..����";
	StringGrid1->Cells[1][111]="4) ������..����, �������..���";
	StringGrid1->Cells[1][112]="5) �����..�����, (��������) �����..";

	StringGrid1->Cells[1][114]="1) ������..����, �����..���";
	StringGrid1->Cells[1][115]="2) ������..���, �����..���";   //20
	StringGrid1->Cells[1][116]="3) ������..���, ��..����";
	StringGrid1->Cells[1][117]="4) ����..��, ���..��";
	StringGrid1->Cells[1][118]="5) �����..�����, ����..���";


}
//---------------------------------------------------------------------------
void __fastcall TSuffiksyForm::CheckButtonClick(TObject *Sender)
{
	int s=0;

	if (StringGrid1->Cells[2][0]=="15") {
		s++;
		StringGrid1->Cells[2][1]="�����";
	}
	else StringGrid1->Cells[2][1]="�������";

	if (StringGrid1->Cells[2][6]=="24") {
		s++;
		StringGrid1->Cells[2][7]="�����";
	}
	else StringGrid1->Cells[2][7]="�������";

	if (StringGrid1->Cells[2][12]=="24") {
		s++;
		StringGrid1->Cells[2][13]="�����";
	}
	else StringGrid1->Cells[2][13]="�������";

	if (StringGrid1->Cells[2][18]=="12") {
		s++;
		StringGrid1->Cells[2][19]="�����";
	}
	else StringGrid1->Cells[2][19]="�������";

	if (StringGrid1->Cells[2][24]=="135") {
		s++;
		StringGrid1->Cells[2][25]="�����";
	}
	else StringGrid1->Cells[2][25]="�������";

	if (StringGrid1->Cells[2][30]=="14") {
		s++;
		StringGrid1->Cells[2][31]="�����";
	}
	else StringGrid1->Cells[2][31]="�������";

	if (StringGrid1->Cells[2][36]=="35") {
		s++;
		StringGrid1->Cells[2][37]="�����";
	}
	else StringGrid1->Cells[2][37]="�������";

	if (StringGrid1->Cells[2][42]=="15") {
		s++;
		StringGrid1->Cells[2][43]="�����";
	}
	else StringGrid1->Cells[2][43]="�������";

	if (StringGrid1->Cells[2][48]=="235") {
		s++;
		StringGrid1->Cells[2][49]="�����";
	}
	else StringGrid1->Cells[2][49]="�������";

	if (StringGrid1->Cells[2][54]=="34") {
		s++;
		StringGrid1->Cells[2][55]="�����";
	}
	else StringGrid1->Cells[2][55]="�������";

	if (StringGrid1->Cells[2][60]=="235") {
		s++;
		StringGrid1->Cells[2][61]="�����";
	}
	else StringGrid1->Cells[2][61]="�������";

	if (StringGrid1->Cells[2][66]=="23") {
		s++;
		StringGrid1->Cells[2][67]="�����";
	}
	else StringGrid1->Cells[2][67]="�������";

	if (StringGrid1->Cells[2][72]=="24") {
		s++;
		StringGrid1->Cells[2][73]="�����";
	}
	else StringGrid1->Cells[2][73]="�������";

	if (StringGrid1->Cells[2][78]=="23") {
		s++;
		StringGrid1->Cells[2][79]="�����";
	}
	else StringGrid1->Cells[2][79]="�������";

	if (StringGrid1->Cells[2][84]=="25") {
		s++;
		StringGrid1->Cells[2][85]="�����";
	}
	else StringGrid1->Cells[2][85]="�������";

	if (StringGrid1->Cells[2][90]=="25") {
		s++;
		StringGrid1->Cells[2][91]="�����";
	}
	else StringGrid1->Cells[2][91]="�������";

	if (StringGrid1->Cells[2][96]=="134") {
		s++;
		StringGrid1->Cells[2][97]="�����";
	}
	else StringGrid1->Cells[2][97]="�������";

	if (StringGrid1->Cells[2][102]=="15") {
		s++;
		StringGrid1->Cells[2][103]="�����";
	}
	else StringGrid1->Cells[2][103]="�������";

	if (StringGrid1->Cells[2][108]=="345") {
		s++;
		StringGrid1->Cells[2][109]="�����";
	}
	else StringGrid1->Cells[2][109]="�������";

	if (StringGrid1->Cells[2][114]=="14") {
		s++;
		StringGrid1->Cells[2][115]="�����";
	}
	else StringGrid1->Cells[2][115]="�������";

	CheckLabel->Text=IntToStr(s);
	StringColumn3->ReadOnly=true;
	Button1->Enabled=true;
	Timer1->Enabled=false;

}
//---------------------------------------------------------------------------
void __fastcall TSuffiksyForm::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[2][4]="15";
	StringGrid1->Cells[2][10]="24";
	StringGrid1->Cells[2][16]="24";
	StringGrid1->Cells[2][22]="12";
	StringGrid1->Cells[2][28]="135";
	StringGrid1->Cells[2][34]="14";
	StringGrid1->Cells[2][40]="35";
	StringGrid1->Cells[2][46]="15";
	StringGrid1->Cells[2][52]="235";
	StringGrid1->Cells[2][58]="34";
	StringGrid1->Cells[2][64]="235";
	StringGrid1->Cells[2][70]="23";
	StringGrid1->Cells[2][76]="24";
	StringGrid1->Cells[2][82]="23";
	StringGrid1->Cells[2][88]="25";
	StringGrid1->Cells[2][94]="25";
	StringGrid1->Cells[2][100]="134";
	StringGrid1->Cells[2][106]="15";
	StringGrid1->Cells[2][112]="345";
	StringGrid1->Cells[2][118]="14";
}
//---------------------------------------------------------------------------
void __fastcall TSuffiksyForm::Timer1Timer(TObject *Sender)
{
	Label3->Text=IntToStr(StrToInt(Label3->Text)+1);

	if (StrToInt(Label3->Text)%60==0) {
		Label4->Text=IntToStr(StrToInt(Label4->Text)+1);
		Label3->Text="0";
	}

    if (StrToInt(Label4->Text==15)) {

		CheckLabel->Text="����� ����� \n������� ���������";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------


