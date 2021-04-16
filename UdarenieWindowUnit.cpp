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
		StringGrid1->Cells[0][i]=IntToStr(j)+".¬ одном из приведЄнных ниже слов допущена ошибка в постановке ударени€:";
		StringGrid1->Cells[0][i+1]="Ќ≈¬≈–Ќќ выделена буква, обозначающа€ ударный гласный звук. ¬ыпишите это слово.";
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

	StringGrid1->Cells[1][0]="нќгт€";     //1
	StringGrid1->Cells[1][1]="плодонос»ть";
	StringGrid1->Cells[1][2]="надел»т";
	StringGrid1->Cells[1][3]="прир”ченный";
	StringGrid1->Cells[1][4]="дон≈льз€";

	StringGrid1->Cells[1][6]="нет новост≈й";   //2
	StringGrid1->Cells[1][7]="клалј";
	StringGrid1->Cells[1][8]="начјвшись";
	StringGrid1->Cells[1][9]="кормящий";
	StringGrid1->Cells[1][10]="пќчестей";

	StringGrid1->Cells[1][12]="зап®ртый";               //3
	StringGrid1->Cells[1][13]="поняв";
	StringGrid1->Cells[1][14]="добелј";
	StringGrid1->Cells[1][15]="дон≈льз€";
	StringGrid1->Cells[1][16]="оптќвый";

	StringGrid1->Cells[1][18]="лгалј ";           //4
	StringGrid1->Cells[1][19]="осв≈домитьс€ ";
	StringGrid1->Cells[1][20]="прибџв ";
	StringGrid1->Cells[1][21]="катјлог ";
	StringGrid1->Cells[1][22]="понявший";

	StringGrid1->Cells[1][24]="исч≈рпать ";                //5
	StringGrid1->Cells[1][25]="катјлог ";
	StringGrid1->Cells[1][26]="откјшл€нуть ";
	StringGrid1->Cells[1][27]="квартјл ";
	StringGrid1->Cells[1][28]="килом≈тр";

	StringGrid1->Cells[1][30]="зјн€ли ";             //6
	StringGrid1->Cells[1][31]="нам≈рение ";
	StringGrid1->Cells[1][32]="осведом»ть ";
	StringGrid1->Cells[1][33]="бјнты ";
	StringGrid1->Cells[1][34]="углуб»ть";

	StringGrid1->Cells[1][36]="ср≈дства ";
	StringGrid1->Cells[1][37]="начјвший ";            //7
	StringGrid1->Cells[1][38]="нјчатый ";
	StringGrid1->Cells[1][39]="пќдн€тый ( с земли)";
	StringGrid1->Cells[1][40]="дќживший (до ста лет)";

	StringGrid1->Cells[1][42]="диспјнсер ";            //8
	StringGrid1->Cells[1][43]="моза»чный ";
	StringGrid1->Cells[1][44]="ч≈рпать ";
	StringGrid1->Cells[1][45]="прибџв ";
	StringGrid1->Cells[1][46]="ум≈рший";

	StringGrid1->Cells[1][48]="озлќбить ";
	StringGrid1->Cells[1][49]="начатј ";   //9
	StringGrid1->Cells[1][50]="послалј ";
	StringGrid1->Cells[1][51]="сирќты ";
	StringGrid1->Cells[1][52]="отк”порил";

	StringGrid1->Cells[1][54]="шјрфы ";
	StringGrid1->Cells[1][55]="сл»вовый ";      //10
	StringGrid1->Cells[1][56]="опломб»ровать ";
	StringGrid1->Cells[1][57]="крас»вейший ";
	StringGrid1->Cells[1][58]="доскј";

	StringGrid1->Cells[1][60]="кормящий ";
	StringGrid1->Cells[1][61]="кранџ "; //11
	StringGrid1->Cells[1][62]="кровоточјщий ";
	StringGrid1->Cells[1][63]="обн€лјсь  ";
	StringGrid1->Cells[1][64]="подняв";

	StringGrid1->Cells[1][66]="подќшва ";       //12
	StringGrid1->Cells[1][67]="избалќванный ";
	StringGrid1->Cells[1][68]="непрјвы ";
	StringGrid1->Cells[1][69]="дозвон»мс€ ";
	StringGrid1->Cells[1][70]="огл€н®тс€";

	StringGrid1->Cells[1][72]="зјн€ло ";
	StringGrid1->Cells[1][73]="прибџть ";        //13
	StringGrid1->Cells[1][74]="сливќвый ";
	StringGrid1->Cells[1][75]="новост≈й ";
	StringGrid1->Cells[1][76]="прож»вший";

	StringGrid1->Cells[1][78]="насор»т ";
	StringGrid1->Cells[1][79]="дон≈льз€ ";    //14
	StringGrid1->Cells[1][80]="кремня ";
	StringGrid1->Cells[1][81]="столяр ";
	StringGrid1->Cells[1][82]="ќптовый";

	StringGrid1->Cells[1][84]="изќгнутый ";            //15
	StringGrid1->Cells[1][85]="зјсуха ";
	StringGrid1->Cells[1][86]="создалјсь ";
	StringGrid1->Cells[1][87]="крас»вее ";
	StringGrid1->Cells[1][88]="безуд≈ржный";

}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::CheckButtonClick(TObject *Sender)
{
	StringColumn3->ReadOnly=true;
	Button1->Enabled=true;
	Timer1->Enabled=false;

	int s=0;

	if (StringGrid1->Cells[2][0]=="прирученный") {
		s++;
		StringGrid1->Cells[2][1]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][1]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][6]=="клала") {
		s++;
		StringGrid1->Cells[2][7]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][7]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][12]=="запЄртый") {
		s++;
		StringGrid1->Cells[2][13]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][13]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][18]=="каталог") {
		s++;
		StringGrid1->Cells[2][19]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][19]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][24]=="каталог") {
		s++;
		StringGrid1->Cells[2][25]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][25]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][30]=="осведомить") {
		s++;
		StringGrid1->Cells[2][31]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][31]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][36]=="доживший") {
		s++;
		StringGrid1->Cells[2][37]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][37]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][42]=="диспансер") {
		s++;
		StringGrid1->Cells[2][43]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][43]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][48]=="послала") {
		s++;
		StringGrid1->Cells[2][49]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][49]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][54]=="опломбировать") {
		s++;
		StringGrid1->Cells[2][55]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][55]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][60]=="краны") {
		s++;
		StringGrid1->Cells[2][61]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][61]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][66]=="огл€нЄтс€") {
		s++;
		StringGrid1->Cells[2][67]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][67]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][72]=="сливовый") {
		s++;
		StringGrid1->Cells[2][73]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][73]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][78]=="оптовый") {
		s++;
		StringGrid1->Cells[2][79]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][79]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][84]=="безудержный") {
		s++;
		StringGrid1->Cells[2][85]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][85]="Ќ≈¬≈–Ќќ";

	CheckLabel->Text=IntToStr(s);
}
//---------------------------------------------------------------------------
void __fastcall TUdarenieForm::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[2][4]="прирученный";
	StringGrid1->Cells[2][10]="клала";
	StringGrid1->Cells[2][16]="запЄртый";
	StringGrid1->Cells[2][22]="каталог";
	StringGrid1->Cells[2][28]="каталог";
	StringGrid1->Cells[2][34]="осведомить";
	StringGrid1->Cells[2][40]="доживший";
	StringGrid1->Cells[2][46]="диспансер";
	StringGrid1->Cells[2][52]="послала";
	StringGrid1->Cells[2][58]="опломбировать";
	StringGrid1->Cells[2][64]="краны";
	StringGrid1->Cells[2][70]="огл€нЄтс€";
	StringGrid1->Cells[2][76]="сливовый";
	StringGrid1->Cells[2][82]="оптовый";
	StringGrid1->Cells[2][88]="безудержный";
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

		CheckLabel->Text="¬рем€ вышло \nЌажмите проверить";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------
