//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AllTestWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TAllTestForm *AllTestForm;
//---------------------------------------------------------------------------
__fastcall TAllTestForm::TAllTestForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAllTestForm::CloseButtonClick(TObject *Sender)
{
	Close();

	int i;
	for (i = 0; i < 240; i++) {
		 StringGrid1->Cells[0][i]="";
		 StringGrid1->Cells[1][i]="";
		 StringGrid1->Cells[2][i]="";
	}
    Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TAllTestForm::StartButtonClick(TObject *Sender)
{
    Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=true;

	int i,j=1;
	for (i = 5; i < 240; i+=6) {
		  StringGrid1->Cells[0][i]="------------------------------------------------------";
		  StringGrid1->Cells[1][i]="----------------------------------------------------------------------------------";
		  StringGrid1->Cells[2][i]="--------------------------";
		  StringGrid1->Cells[2][i-1]="--------------------------";
		  StringGrid1->Cells[2][i-2]="--------------------------";
		  StringGrid1->Cells[2][i-3]="--------------------------";
		  StringGrid1->Cells[2][i-4]="--------------------------";
	}

	for (i = 0; i < 60; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ������� �������� �������, � �������";
		StringGrid1->Cells[0][i+1]="�� ���� ������ ������ ���� ��������� ���� � ";
		StringGrid1->Cells[0][i+2]="�� �� �����. �������� ������ �������.";
		j++;
	}

	for (i = 60; i < 120; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". � ����� �� ���������� ���� ����";
		StringGrid1->Cells[0][i+1]="�������� ������ � ���������� ��������:";
		StringGrid1->Cells[0][i+2]="������� �������� �����, ������������ ";
		StringGrid1->Cells[0][i+3]="������� ������� ����. �������� ��� �����.";
		j++;
	}

	for (i = 120; i < 144; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ������� �������� �������, � �������";
		StringGrid1->Cells[0][i+1]="�� ���� ������ ������ ���� ";
		StringGrid1->Cells[0][i+2]="���������� ���������� ������������ ";
		StringGrid1->Cells[0][i+3]="������� �����. �������� ������ �������.";
		j++;
	}

	for (i = 144; i < 162; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ������� �������� �������, � �������";
		StringGrid1->Cells[0][i+1]="�� ���� ������ ������ ���� ";
		StringGrid1->Cells[0][i+2]="���������� ���������� ����������� ";
		StringGrid1->Cells[0][i+3]="������� �����. �������� ������ �������.";
		j++;
	}

	for (i = 162; i < 180; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ������� �������� �������, � �������";
		StringGrid1->Cells[0][i+1]="�� ���� ������ ������ ���� ";
		StringGrid1->Cells[0][i+2]="���������� ���������� ������������� ";
		StringGrid1->Cells[0][i+3]="������� �����. �������� ������ �������.";
		j++;
	}

	for (i = 180; i < 240; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ������� �������� �������, � �������";
		StringGrid1->Cells[0][i+1]="�� ���� ������ ������ ���� ��������� ���� � ";
		StringGrid1->Cells[0][i+2]="�� �� �����. �������� ������ �������.";
		j++;
	}

	StringGrid1->Cells[1][0]="1) �����..����, �����..�";     //1
	StringGrid1->Cells[1][1]="2) ��������..����, �����..��";
	StringGrid1->Cells[1][2]="3) ������..�����, ����..���";
	StringGrid1->Cells[1][3]="4) �����..���, �������..����";
	StringGrid1->Cells[1][4]="5) ��������..������, ���..��";

	StringGrid1->Cells[1][6]="1) ������..����, ������..����";   //2
	StringGrid1->Cells[1][7]="2) ������..����, ����..���";
	StringGrid1->Cells[1][8]="3) ���������..������, ���..���";
	StringGrid1->Cells[1][9]="4) (�����������) �������..�, ������..���� ������";
	StringGrid1->Cells[1][10]="5) ��������..��� (��������), ���������..���";

	StringGrid1->Cells[1][12]="1) ����..����, �����..���";               //3
	StringGrid1->Cells[1][13]="2) ����..���, ���..��";
	StringGrid1->Cells[1][14]="3) ����..���, ������..�";
	StringGrid1->Cells[1][15]="4) ����..���, ����..��";
	StringGrid1->Cells[1][16]="5) ������..���, ������..���";

	StringGrid1->Cells[1][18]="1) �����..���, ��������..���";           //4
	StringGrid1->Cells[1][19]="2) �����..������, �����..���";
	StringGrid1->Cells[1][20]="3) �����..�����, ������..���";
	StringGrid1->Cells[1][21]="4) �������..������, ���..����";
	StringGrid1->Cells[1][22]="5) ������..���, �����..������";

	StringGrid1->Cells[1][24]="1) ����..���, ������..��";                //5
	StringGrid1->Cells[1][25]="2) �����..�����, ���..���";
	StringGrid1->Cells[1][26]="3) ����..������, ��..���� (�����)";
	StringGrid1->Cells[1][27]="4) �����..������, �������..����";
	StringGrid1->Cells[1][28]="5) �����..���, ���..���";

	StringGrid1->Cells[1][30]="1) ������..��, �����..��";             //6
	StringGrid1->Cells[1][31]="2) ������..����, ���..����";
	StringGrid1->Cells[1][32]="3) �����..���, ����..���";
	StringGrid1->Cells[1][33]="4) ����..���, �����..�����";
	StringGrid1->Cells[1][34]="5) �����..�, �������..���";

	StringGrid1->Cells[1][36]="1) ������..�, �����..����";
	StringGrid1->Cells[1][37]="2) �����..���� (������), �����..������";            //7
	StringGrid1->Cells[1][38]="3) ����������..���, �����..������";
	StringGrid1->Cells[1][39]="4) ������..��� (���������), �����.. (�������)";
	StringGrid1->Cells[1][40]="5) �����..���, �����..��� (�����)";

	StringGrid1->Cells[1][42]="1) ������..����, ����..��";            //8
	StringGrid1->Cells[1][43]="2) ����..���, �����..��";
	StringGrid1->Cells[1][44]="3) ����..���, ����..�";
	StringGrid1->Cells[1][45]="4) ���..�����, �����..�";
	StringGrid1->Cells[1][46]="5) �����..�����, ���..���";

	StringGrid1->Cells[1][48]="1) ������..���, �����..�����";
	StringGrid1->Cells[1][49]="2) �����..���, �������..���";   //9
	StringGrid1->Cells[1][50]="3) ����..�����, �����..������";
	StringGrid1->Cells[1][51]="4) ����..������, ��..���";
	StringGrid1->Cells[1][52]="5) ����..������, ������..���";

	StringGrid1->Cells[1][54]="1) �����..���, ���..��";
	StringGrid1->Cells[1][55]="2) ����..���, ���..�";      //10
	StringGrid1->Cells[1][56]="3) �������..���, ���..���";
	StringGrid1->Cells[1][57]="4) ���������..����, ����..���";
	StringGrid1->Cells[1][58]="5) �����..���, ���..���";

	StringGrid1->Cells[1][60]="�������";
	StringGrid1->Cells[1][61]="�����"; //1
	StringGrid1->Cells[1][62]="�������";
	StringGrid1->Cells[1][63]="������";
	StringGrid1->Cells[1][64]="�����";

	StringGrid1->Cells[1][66]="���������";       //2
	StringGrid1->Cells[1][67]="��������";
	StringGrid1->Cells[1][68]="������";
	StringGrid1->Cells[1][69]="�����������";
	StringGrid1->Cells[1][70]="��������";

	StringGrid1->Cells[1][72]="���������";
	StringGrid1->Cells[1][73]="����������";        //3
	StringGrid1->Cells[1][74]="��������";
	StringGrid1->Cells[1][75]="��������";
	StringGrid1->Cells[1][76]="��������";

	StringGrid1->Cells[1][78]="�����������";
	StringGrid1->Cells[1][79]="�����";    //4
	StringGrid1->Cells[1][80]="�����";
	StringGrid1->Cells[1][81]="�������";
	StringGrid1->Cells[1][82]="��������";

	StringGrid1->Cells[1][84]="����";            //5
	StringGrid1->Cells[1][85]="�������";
	StringGrid1->Cells[1][86]="�������";
	StringGrid1->Cells[1][87]="��������";
	StringGrid1->Cells[1][88]="���������";

	StringGrid1->Cells[1][90]="�����";
	StringGrid1->Cells[1][91]="����� (�����)";          //6
	StringGrid1->Cells[1][92]="������";
	StringGrid1->Cells[1][93]="�������";
	StringGrid1->Cells[1][94]="������������";

	StringGrid1->Cells[1][96]="�������";
	StringGrid1->Cells[1][97]="������";    //7
	StringGrid1->Cells[1][98]="�����";
	StringGrid1->Cells[1][99]="�����";
	StringGrid1->Cells[1][100]="����������";

	StringGrid1->Cells[1][102]="�������";            //8
	StringGrid1->Cells[1][103]="���������";
	StringGrid1->Cells[1][104]="�������";
	StringGrid1->Cells[1][105]="�����";
	StringGrid1->Cells[1][106]="�����";

	StringGrid1->Cells[1][108]="���������";
	StringGrid1->Cells[1][109]="��������";            //9
	StringGrid1->Cells[1][110]="��������";
	StringGrid1->Cells[1][111]="��������";
	StringGrid1->Cells[1][112]="�����������";

	StringGrid1->Cells[1][114]="�������";
	StringGrid1->Cells[1][115]="����������";   //10
	StringGrid1->Cells[1][116]="�������";
	StringGrid1->Cells[1][117]="���������";
	StringGrid1->Cells[1][118]="�����";

	StringGrid1->Cells[1][120]="1) ��������, ���������, �������";
	StringGrid1->Cells[1][121]="2) ����������, ����������, �����������"; //1 ,2
	StringGrid1->Cells[1][122]="3) �����������, ��������, ������������";
	StringGrid1->Cells[1][123]="4) �����������, ��������, �������";
	StringGrid1->Cells[1][124]="5) ����������, ��������, ��������";

	StringGrid1->Cells[1][126]="1) ���������, ������, �������"; //2 ,5
	StringGrid1->Cells[1][127]="2) ������������, �������, ����������";
	StringGrid1->Cells[1][128]="3) ���������, ��������� (�����������), �������";
	StringGrid1->Cells[1][129]="4) ���������, �������, �������������";
	StringGrid1->Cells[1][130]="5) �����, ��������, ���������";

	StringGrid1->Cells[1][132]="1) �����������, �����������, �������";
	StringGrid1->Cells[1][133]="2) ��������, �������, �����������";        //3 ,8
	StringGrid1->Cells[1][134]="3) ������, �������, �����";
	StringGrid1->Cells[1][135]="4) �������, ����������������, �������";
	StringGrid1->Cells[1][136]="5) ��������, ���������, ���������";

	StringGrid1->Cells[1][138]="1) ��������, ������� (�����), ��������";
	StringGrid1->Cells[1][139]="2) ��������, ����, ���������";    //4  ,11
	StringGrid1->Cells[1][140]="3) ��������, �������, ���������";
	StringGrid1->Cells[1][141]="4) ��������, ������������, ������";
	StringGrid1->Cells[1][142]="5) ��������, ���������, ��������";

	StringGrid1->Cells[1][144]="1) �������������, �����������, �������";            //5.1
	StringGrid1->Cells[1][145]="2) ���������, ����������, ����������";
	StringGrid1->Cells[1][146]="3) ����������, �������, ��������� (����)";
	StringGrid1->Cells[1][147]="4) ����������, �������� (������), ��������� (������)";
	StringGrid1->Cells[1][148]="5) �����������, ����������, ����������";

	StringGrid1->Cells[1][150]="1) �������, ��������, ���������";
	StringGrid1->Cells[1][151]="2) �������� (�����), ���������, ���������";          //6.6
	StringGrid1->Cells[1][152]="3) ������� (�����), ��������������, ���������";
	StringGrid1->Cells[1][153]="4) ���������, ���������, �����������";
	StringGrid1->Cells[1][154]="5) ���������, ��������������, �����������";

	StringGrid1->Cells[1][156]="1) ���������, �������, ��������";
	StringGrid1->Cells[1][157]="2) ��������������, �������, �������";    //7 .9
	StringGrid1->Cells[1][158]="3) ����������, ��������� (�������), ������� (�����)";
	StringGrid1->Cells[1][159]="4) ������������, ��������, ���������";
	StringGrid1->Cells[1][160]="5) ������, �����������, ���������";

	StringGrid1->Cells[1][162]="1) ���������, �������, �������������";   //8.4
	StringGrid1->Cells[1][163]="2) ����������, ��������, (�����) ���������";
	StringGrid1->Cells[1][164]="3) ������������, ���������, ���������";
	StringGrid1->Cells[1][165]="4) ������, ������, ������";
	StringGrid1->Cells[1][166]="5) �������, ��������, �������� (���������)";

	StringGrid1->Cells[1][168]="1) ����������, ������������, ��������";
	StringGrid1->Cells[1][169]="2) ���������, �����������, �������";  //9.7
	StringGrid1->Cells[1][170]="3) ��������, �������, ���������";
	StringGrid1->Cells[1][171]="4) ���������, ��������, ���������";
	StringGrid1->Cells[1][172]="5) ������������, �����������, �������������";

	StringGrid1->Cells[1][174]="1) ������������, ������������, �������";
	StringGrid1->Cells[1][175]="2) ���������, ������������, �����";   //10 .10
	StringGrid1->Cells[1][176]="3) ��������, ���������, ��������";
	StringGrid1->Cells[1][177]="4) ����������, �����������, �������� (� �������)";
	StringGrid1->Cells[1][178]="5) �����������, ���������, ������� (��������)";

	StringGrid1->Cells[1][180]="1) ��..�������, ��..��������, ��..���������� (������)";
	StringGrid1->Cells[1][181]="2) ���..�����, �..�����, ���..�������"; //1
	StringGrid1->Cells[1][182]="3) ��..������, ��..���������, �..�������";
	StringGrid1->Cells[1][183]="4) ��..��������, ��..�������, ��..����������";
	StringGrid1->Cells[1][184]="5) ���..������, �..������, �..�����";

	StringGrid1->Cells[1][186]="1) ���..�����, �..�������, �..��������";       //2
	StringGrid1->Cells[1][187]="2) �..����, �����..���, �..��";
	StringGrid1->Cells[1][188]="3) ��..�������, ��..�������, ��..��������";
	StringGrid1->Cells[1][189]="4) ��..�����������, ��..���������, ��..����";
	StringGrid1->Cells[1][190]="5) ���..���, ��..��������, ��..��������";

	StringGrid1->Cells[1][192]="1) ��..������� (��� ������), ��..����, ����..��������";
	StringGrid1->Cells[1][193]="2) �..��� (�� ����), �..�� (�� ����), ������..�";        //3
	StringGrid1->Cells[1][194]="3) �����..�������������, ��..�����, ��..����";
	StringGrid1->Cells[1][195]="4) ���..������, ��..������, ���..�����";
	StringGrid1->Cells[1][196]="5) ��..������, ��..���������, ��..�����";

	StringGrid1->Cells[1][198]="1. ��..�����, �..���������, �..����������";
	StringGrid1->Cells[1][199]="2. ���..�����, ���..�������, ���..�������";    //4
	StringGrid1->Cells[1][200]="3. ��..����������, ��..����������, ��..���������";
	StringGrid1->Cells[1][201]="4. ��..���������, �..������, ..�������";
	StringGrid1->Cells[1][202]="5. �..�������, ���..����������, ..������������";

	StringGrid1->Cells[1][204]="1) ��..��������� (���������), �..��������, �..�������";            //5
	StringGrid1->Cells[1][205]="2) ���..�����, ���..��, ��..���";
	StringGrid1->Cells[1][206]="3) ��..�����, ��..�������, ��..�������";
	StringGrid1->Cells[1][207]="4) ���..�����, �����..���������, ��..����";
	StringGrid1->Cells[1][208]="5) ��..����������, ��..��������, ��..������� (�����)";

	StringGrid1->Cells[1][210]="1) ��..����, ��..������������, �����..���������";
	StringGrid1->Cells[1][211]="2) �..����������, �..�������, �..�����";          //6
	StringGrid1->Cells[1][212]="3) �..�������, ��..���������, �..����";
	StringGrid1->Cells[1][213]="4) �..������, ��..���������, ��..���������";
	StringGrid1->Cells[1][214]="5) ��..������, ���..���������, �..���";

	StringGrid1->Cells[1][216]="1) �..���, ���..���������, ��..�������";
	StringGrid1->Cells[1][217]="2) ��..�������, �..��������, ��..�������";    //7
	StringGrid1->Cells[1][218]="3) ��..���������, ��..�����, ��..�����������";
	StringGrid1->Cells[1][219]="4) �..�������, ���..�����, ��..�����";
	StringGrid1->Cells[1][220]="5) ���..������, �..����������, �..�������";

	StringGrid1->Cells[1][222]="1) ��..�����, ��..�������, ��..����������";            //8
	StringGrid1->Cells[1][223]="2) ��..��������, ��..������, ��..���";
	StringGrid1->Cells[1][224]="3) ���..�����, ��..���, ���..�����";
	StringGrid1->Cells[1][225]="4) �..�������, ���..��������, �..������";
	StringGrid1->Cells[1][226]="5) ���..�������, ����..�������, ���..�����";

	StringGrid1->Cells[1][228]="1) ��..������, �..���, �..��������";
	StringGrid1->Cells[1][229]="2) ��..����������, ��..�������, ��..�����"; //9  .10
	StringGrid1->Cells[1][230]="3) �..���, ���..�����, ��..��������";
	StringGrid1->Cells[1][231]="4) ��..�������, �..�������, ��..�����";
	StringGrid1->Cells[1][232]="5) ��..�����, �..������, ��..��������";

	StringGrid1->Cells[1][234]="1) ��..����������, ��..����������, ��..���������";
	StringGrid1->Cells[1][235]="2) �����..������������, �..����, ����..�������";   //10  .11
	StringGrid1->Cells[1][236]="3) �..�������, ��..�������, ���..�����";
	StringGrid1->Cells[1][237]="4) ����..���, �..����-������, ��..�������";
	StringGrid1->Cells[1][238]="5) ��..�����, ���..�����������, �����..���������";

}
//---------------------------------------------------------------------------

void __fastcall TAllTestForm::CheckButtonClick(TObject *Sender)
{
    StringColumn3->ReadOnly=true;
	Button1->Enabled=true;
    Timer1->Enabled=false;

	int s=0;

	if (StringGrid1->Cells[2][0]=="34") {
		s++;
		StringGrid1->Cells[2][1]="�����";
	}
	else StringGrid1->Cells[2][1]="�������";

	if (StringGrid1->Cells[2][6]=="2345") {
		s++;
		StringGrid1->Cells[2][7]="�����";
	}
	else StringGrid1->Cells[2][7]="�������";

	if (StringGrid1->Cells[2][12]=="123") {
		s++;
		StringGrid1->Cells[2][13]="�����";
	}
	else StringGrid1->Cells[2][13]="�������";

	if (StringGrid1->Cells[2][18]=="15") {
		s++;
		StringGrid1->Cells[2][19]="�����";
	}
	else StringGrid1->Cells[2][19]="�������";

	if (StringGrid1->Cells[2][24]=="25") {
		s++;
		StringGrid1->Cells[2][25]="�����";
	}
	else StringGrid1->Cells[2][25]="�������";

	if (StringGrid1->Cells[2][30]=="23") {
		s++;
		StringGrid1->Cells[2][31]="�����";
	}
	else StringGrid1->Cells[2][31]="�������";

	if (StringGrid1->Cells[2][36]=="134") {
		s++;
		StringGrid1->Cells[2][37]="�����";
	}
	else StringGrid1->Cells[2][37]="�������";

	if (StringGrid1->Cells[2][42]=="15") {
		s++;
		StringGrid1->Cells[2][43]="�����";
	}
	else StringGrid1->Cells[2][43]="�������";

	if (StringGrid1->Cells[2][48]=="345") {
		s++;
		StringGrid1->Cells[2][49]="�����";
	}
	else StringGrid1->Cells[2][49]="�������";

	if (StringGrid1->Cells[2][54]=="23") {
		s++;
		StringGrid1->Cells[2][55]="�����";
	}
	else StringGrid1->Cells[2][55]="�������";




	if (StringGrid1->Cells[2][60]=="�������") {
		s++;
		StringGrid1->Cells[2][61]="�����";
	}
	else StringGrid1->Cells[2][61]="�������";

	if (StringGrid1->Cells[2][66]=="���������") {
		s++;
		StringGrid1->Cells[2][67]="�����";
	}
	else StringGrid1->Cells[2][67]="�������";

	if (StringGrid1->Cells[2][72]=="��������") {
		s++;
		StringGrid1->Cells[2][73]="�����";
	}
	else StringGrid1->Cells[2][73]="�������";

	if (StringGrid1->Cells[2][78]=="��������") {
		s++;
		StringGrid1->Cells[2][79]="�����";
	}
	else StringGrid1->Cells[2][79]="�������";

	if (StringGrid1->Cells[2][84]=="�������") {
		s++;
		StringGrid1->Cells[2][85]="�����";
	}
	else StringGrid1->Cells[2][85]="�������";

	if (StringGrid1->Cells[2][90]=="�����") {
		s++;
		StringGrid1->Cells[2][91]="�����";
	}
	else StringGrid1->Cells[2][91]="�������";

	if (StringGrid1->Cells[2][96]=="������") {
		s++;
		StringGrid1->Cells[2][97]="�����";
	}
	else StringGrid1->Cells[2][97]="�������";

	if (StringGrid1->Cells[2][102]=="���������") {
		s++;
		StringGrid1->Cells[2][103]="�����";
	}
	else StringGrid1->Cells[2][103]="�������";

	if (StringGrid1->Cells[2][108]=="��������") {
		s++;
		StringGrid1->Cells[2][109]="�����";
	}
	else StringGrid1->Cells[2][109]="�������";

	if (StringGrid1->Cells[2][114]=="�������") {
		s++;
		StringGrid1->Cells[2][115]="�����";
	}
	else StringGrid1->Cells[2][115]="�������";




	if (StringGrid1->Cells[2][120]=="125") {
		s++;
		StringGrid1->Cells[2][121]="�����";
	}
	else StringGrid1->Cells[2][121]="�������";

	if (StringGrid1->Cells[2][126]=="35") {
		s++;
		StringGrid1->Cells[2][127]="�����";
	}
	else StringGrid1->Cells[2][127]="�������";

	if (StringGrid1->Cells[2][132]=="24") {
		s++;
		StringGrid1->Cells[2][133]="�����";
	}
	else StringGrid1->Cells[2][133]="�������";

	if (StringGrid1->Cells[2][138]=="23") {
		s++;
		StringGrid1->Cells[2][139]="�����";
	}
	else StringGrid1->Cells[2][139]="�������";

	if (StringGrid1->Cells[2][144]=="14") {
		s++;
		StringGrid1->Cells[2][145]="�����";
	}
	else StringGrid1->Cells[2][145]="�������";

	if (StringGrid1->Cells[2][150]=="12") {
		s++;
		StringGrid1->Cells[2][151]="�����";
	}
	else StringGrid1->Cells[2][151]="�������";

	if (StringGrid1->Cells[2][156]=="35") {
		s++;
		StringGrid1->Cells[2][157]="�����";
	}
	else StringGrid1->Cells[2][157]="�������";

	if (StringGrid1->Cells[2][162]=="14") {
		s++;
		StringGrid1->Cells[2][163]="�����";
	}
	else StringGrid1->Cells[2][163]="�������";

	if (StringGrid1->Cells[2][168]=="14") {
		s++;
		StringGrid1->Cells[2][169]="�����";
	}
	else StringGrid1->Cells[2][169]="�������";

	if (StringGrid1->Cells[2][174]=="13") {
		s++;
		StringGrid1->Cells[2][175]="�����";
	}
	else StringGrid1->Cells[2][175]="�������";



	if (StringGrid1->Cells[2][180]=="15") {
		s++;
		StringGrid1->Cells[2][181]="�����";
	}
	else StringGrid1->Cells[2][181]="�������";

	if (StringGrid1->Cells[2][186]=="23") {
		s++;
		StringGrid1->Cells[2][187]="�����";
	}
	else StringGrid1->Cells[2][187]="�������";

	if (StringGrid1->Cells[2][192]=="135") {
		s++;
		StringGrid1->Cells[2][193]="�����";
	}
	else StringGrid1->Cells[2][193]="�������";

	if (StringGrid1->Cells[2][198]=="23") {
		s++;
		StringGrid1->Cells[2][199]="�����";
	}
	else StringGrid1->Cells[2][199]="�������";

	if (StringGrid1->Cells[2][204]=="25") {
		s++;
		StringGrid1->Cells[2][205]="�����";
	}
	else StringGrid1->Cells[2][205]="�������";

	if (StringGrid1->Cells[2][210]=="23") {
		s++;
		StringGrid1->Cells[2][211]="�����";
	}
	else StringGrid1->Cells[2][211]="�������";

	if (StringGrid1->Cells[2][216]=="13") {
		s++;
		StringGrid1->Cells[2][217]="�����";
	}
	else StringGrid1->Cells[2][217]="�������";

	if (StringGrid1->Cells[2][222]=="12") {
		s++;
		StringGrid1->Cells[2][223]="�����";
	}
	else StringGrid1->Cells[2][223]="�������";

	if (StringGrid1->Cells[2][228]=="14") {
		s++;
		StringGrid1->Cells[2][229]="�����";
	}
	else StringGrid1->Cells[2][229]="�������";

	if (StringGrid1->Cells[2][234]=="124") {
		s++;
		StringGrid1->Cells[2][235]="�����";
	}
	else StringGrid1->Cells[2][235]="�������";

	CheckLabel->Text=IntToStr(s);
}
//---------------------------------------------------------------------------

void __fastcall TAllTestForm::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[2][4]="34";
	StringGrid1->Cells[2][10]="2345";
	StringGrid1->Cells[2][16]="123";
	StringGrid1->Cells[2][22]="15";
	StringGrid1->Cells[2][28]="25";
	StringGrid1->Cells[2][34]="23";
	StringGrid1->Cells[2][40]="134";
	StringGrid1->Cells[2][46]="15";
	StringGrid1->Cells[2][52]="435";
	StringGrid1->Cells[2][58]="23";

	StringGrid1->Cells[2][64]="�������";
	StringGrid1->Cells[2][70]="���������";
	StringGrid1->Cells[2][76]="��������";
	StringGrid1->Cells[2][82]="�����������";
	StringGrid1->Cells[2][88]="�������";
	StringGrid1->Cells[2][94]="�����";
	StringGrid1->Cells[2][100]="������";
	StringGrid1->Cells[2][106]="���������";
	StringGrid1->Cells[2][112]="��������";
	StringGrid1->Cells[2][118]="�������";

	StringGrid1->Cells[2][124]="125";
	StringGrid1->Cells[2][130]="35";
	StringGrid1->Cells[2][136]="24";
	StringGrid1->Cells[2][142]="23";
	StringGrid1->Cells[2][148]="14";
	StringGrid1->Cells[2][154]="12";
	StringGrid1->Cells[2][160]="35";
	StringGrid1->Cells[2][166]="14";
	StringGrid1->Cells[2][172]="14";
	StringGrid1->Cells[2][178]="13";

	StringGrid1->Cells[2][184]="125";
	StringGrid1->Cells[2][190]="35";
	StringGrid1->Cells[2][196]="24";
	StringGrid1->Cells[2][202]="23";
	StringGrid1->Cells[2][208]="14";
	StringGrid1->Cells[2][214]="12";
	StringGrid1->Cells[2][220]="35";
	StringGrid1->Cells[2][226]="14";
	StringGrid1->Cells[2][232]="14";
	StringGrid1->Cells[2][238]="13";
}
//---------------------------------------------------------------------------

void __fastcall TAllTestForm::Timer1Timer(TObject *Sender)
{
	Label3->Text=IntToStr(StrToInt(Label3->Text)+1);

		if (StrToInt(Label3->Text)%60==0) {
			Label4->Text=IntToStr(StrToInt(Label4->Text)+1);
			Label3->Text="0";
		}

		if (StrToInt(Label4->Text==25)) {

		CheckLabel->Text="����� ����� \n������� ���������";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------
