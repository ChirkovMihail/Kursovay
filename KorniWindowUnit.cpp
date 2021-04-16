//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "KorniWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TKorniForm *KorniForm;
//---------------------------------------------------------------------------
__fastcall TKorniForm::TKorniForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKorniForm::CloseButtonClick(TObject *Sender)
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
void __fastcall TKorniForm::StartButtonClick(TObject *Sender)
{
    int i,j=1;
	for (i = 0; i < 24; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+".Укажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного ряда содержится безударная";
		StringGrid1->Cells[0][i+2]="непроверяемая гласная корня. Запишите номера ответов.";
		j++;
	}

	for (i = 24; i < 90; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+".Укажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного ряда содержится безударная";
		StringGrid1->Cells[0][i+2]="чередующаяся гласная корня. Запишите номера ответов.";
		j++;
	}

	for (i = 90; i < 120; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+".Укажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного ряда содержится безударная";
		StringGrid1->Cells[0][i+2]="проверяемая гласная корня. Запишите номера ответов.";
		j++;
	}

	for (i = 5; i < 120; i+=6) {
		  StringGrid1->Cells[0][i]="--------------------------------------------------------------------";
		  StringGrid1->Cells[1][i]="-------------------------------------------------------------------------";
		  StringGrid1->Cells[2][i]="--------------------";
		  StringGrid1->Cells[2][i-1]="--------------------";
		  StringGrid1->Cells[2][i-2]="--------------------";
		  StringGrid1->Cells[2][i-3]="--------------------";
		  StringGrid1->Cells[2][i-4]="--------------------";
	}

    Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=true;

	StringGrid1->Cells[1][0]="1) уберу, прелестный, подбородок";     //1  ,1
	StringGrid1->Cells[1][1]="2) виртуоз, картина, тарелка";
	StringGrid1->Cells[1][2]="3) витраж, заря, угореть";
	StringGrid1->Cells[1][3]="4) предварительный, ностальгия, фломастер";
	StringGrid1->Cells[1][4]="5) вентилятор, свисток, летательный (аппарат)";

	StringGrid1->Cells[1][6]="1) околдовать, галерея, делегировать (полномочия)";   //2 ,6
	StringGrid1->Cells[1][7]="2) скрипучий, колючий, выровнять (пол)";
	StringGrid1->Cells[1][8]="3) смочить (водой), зарастёт, (мороз) крепчал";
	StringGrid1->Cells[1][9]="4) камин, директор, нотариус";
	StringGrid1->Cells[1][10]="5) благотворительный, аннотация, заберу (домой)";

	StringGrid1->Cells[1][12]="1) трещать, мираж, предположение";               //3 ,18
	StringGrid1->Cells[1][13]="2) приоритет, палисадник, вестибюль";
	StringGrid1->Cells[1][14]="3) галерея, фантазия, винегрет";
	StringGrid1->Cells[1][15]="4) запереть, представлять, обижать (словом)";
	StringGrid1->Cells[1][16]="5) спиртовой (раствор), замереть, гардероб";

	StringGrid1->Cells[1][18]="1) компонент, лелеять, шедевр";           //4 ,19
	StringGrid1->Cells[1][19]="2) одичать, заниматься, перекликаться";
	StringGrid1->Cells[1][20]="3) энциклопедический, одряхлевший, присягать (родине)";
	StringGrid1->Cells[1][21]="4) околдовали, филармония, дирижировать";
	StringGrid1->Cells[1][22]="5) орхидея, одеколон, соберу";

	StringGrid1->Cells[1][24]="1) вырастил, выкосил (траву), пловчиха";  //5 ,3
	StringGrid1->Cells[1][25]="2) запереть, заря, изложение";
	StringGrid1->Cells[1][26]="3) выскочил, касание, поджигать";
	StringGrid1->Cells[1][27]="4) смирился, пригорюнился, творец";
	StringGrid1->Cells[1][28]="5) блистать, занесённый, выгореть";

	StringGrid1->Cells[1][30]="1) поплавок, склонение, озарять"; //6 ,7
	StringGrid1->Cells[1][31]="2) заниматься, обжигающий, предложение";
	StringGrid1->Cells[1][32]="3) аналогичный, потерять, разрастаться";
	StringGrid1->Cells[1][33]="4) стилизовать, забирать, касание";
	StringGrid1->Cells[1][34]="5) подскочить, отнимать, блистать";

	StringGrid1->Cells[1][36]="1) выскочка, блистательный, замирать";
	StringGrid1->Cells[1][37]="2) период, уберечь, замечательный";            //7  ,9
	StringGrid1->Cells[1][38]="3) расплавлять (металл), зоологический, примирить (врагов)";
	StringGrid1->Cells[1][39]="4) понятый (текст), выгорать, озарение";
	StringGrid1->Cells[1][40]="5) душераздирающий, (по) касательной, сложение (основ)";

	StringGrid1->Cells[1][42]="1) примечательный, вычитание, положение";            //8 ,10
	StringGrid1->Cells[1][43]="2) сберегать, обнимать, замереть";
	StringGrid1->Cells[1][44]="3) проскочить, непонимание, росток";
	StringGrid1->Cells[1][45]="4) выпирающий, вычет, занимательный";
	StringGrid1->Cells[1][46]="5) период, выбирать, озорничать";

	StringGrid1->Cells[1][48]="1) содержимое, водоросли, сочетаемость";
	StringGrid1->Cells[1][49]="2) поднимая (тяжести), запирать (дверь), почитать (старших)";   //9 ,11
	StringGrid1->Cells[1][50]="3) перескочить, запросить (документы), теребить (платок)";
	StringGrid1->Cells[1][51]="4) загорелись (глаза), приращение, разжимать";
	StringGrid1->Cells[1][52]="5) возвращает (долги), озарение, косые (лучи солнца)";

	StringGrid1->Cells[1][54]="1) макать (в молоко), уравнение";
	StringGrid1->Cells[1][55]="2) забирать, зоревать";      //10 ,12
	StringGrid1->Cells[1][56]="3) макароны, чертить";
	StringGrid1->Cells[1][57]="4) натюрморт, медаль";
	StringGrid1->Cells[1][58]="5) предсказание, дилетант";

	StringGrid1->Cells[1][60]="1) симметрия, гербарий, ледовый";
	StringGrid1->Cells[1][61]="2) блистающий, задирается, выращенный"; //11 ,13
	StringGrid1->Cells[1][62]="3) светает, нагромождать, папоротник";
	StringGrid1->Cells[1][63]="4) оплатить, подглядеть, фонарь";
	StringGrid1->Cells[1][64]="5) замирая, творит, вымокание (всходов)";

	StringGrid1->Cells[1][66]="1) эксперимент, преподавать, бечёвка";       //12 ,15
	StringGrid1->Cells[1][67]="2) опираясь, вырасти, наклониться";
	StringGrid1->Cells[1][68]="3) росток, угасать, бидон";
	StringGrid1->Cells[1][69]="4) соберёшь, безотлагательный, озарило";
	StringGrid1->Cells[1][70]="5) измерять, диагональ, велосипед";

	StringGrid1->Cells[1][72]="1) полагается, скачите, наклоняться";
	StringGrid1->Cells[1][73]="2) отрасль, горелка, расцветать";        //13  , 16
	StringGrid1->Cells[1][74]="3) разрядить (обстановку), прикоснуться, притворить (ворота)";
	StringGrid1->Cells[1][75]="4) снимать, сочетание, убирать";
	StringGrid1->Cells[1][76]="5) удерёт, блестеть, понимание";

	StringGrid1->Cells[1][78]="1) хлопотать, запереть (на замок), росток";
	StringGrid1->Cells[1][79]="2) заблестел, скакалка, собирать";    //14  ,17
	StringGrid1->Cells[1][80]="3) пожимающий, сочетание, почитать (старших)";
	StringGrid1->Cells[1][81]="4) взрослеть, горнолыжный, озарение";
	StringGrid1->Cells[1][82]="5) поплавок, задираться, изложить (суть проблемы)";

	StringGrid1->Cells[1][84]="1) стимулировать, сатирический, предполагать";            //15 ,20
	StringGrid1->Cells[1][85]="2) вычитание, озаре́ние, пробираться";
	StringGrid1->Cells[1][86]="3) эстетический, очистительный, хроникальный";
	StringGrid1->Cells[1][87]="4) горделивый, обогащать, вытирать";
	StringGrid1->Cells[1][88]="5) блистательный, зарни́ца, касательная (к окружности)";

	StringGrid1->Cells[1][90]="1) представлять, предназначение, угасать";
	StringGrid1->Cells[1][91]="2) предохранить,фантазия, вырасти";          //16  ,2
	StringGrid1->Cells[1][92]="3) приглашать, декорация, сиреневый";
	StringGrid1->Cells[1][93]="4) (спуск) с горы, арифметический, упрощать";
	StringGrid1->Cells[1][94]="5) преподавать, оснащение, стилист";

	StringGrid1->Cells[1][96]="1) раскраснеться, подсмотреть, ходовой";
	StringGrid1->Cells[1][97]="2) претензия, макулатура, приложение";    //17   ,4
	StringGrid1->Cells[1][98]="3) предлагать, зарница, обмакните (перо)";
	StringGrid1->Cells[1][99]="4) примирение, замечать (детали), поласкать (собаку)";
	StringGrid1->Cells[1][100]="5) убедительно, фиолетовый, наваждение";

	StringGrid1->Cells[1][102]="1) вплотную, лелеять, сковорода";            //18   ,5
	StringGrid1->Cells[1][103]="2) летать (в облаках), увядает (цветок), умолять (о помощи)";
	StringGrid1->Cells[1][104]="3) касаться, загореть, блестит";
	StringGrid1->Cells[1][105]="4) посвящение (любимой), грязнуля, расколоть (бревно)";
	StringGrid1->Cells[1][106]="5) прилагательное, мокасины, загорелые";

	StringGrid1->Cells[1][108]="1) удивительный, испещрённый, промокашка";
	StringGrid1->Cells[1][109]="2) трепетать, озаряя, гипотеза";            //19 , 8
	StringGrid1->Cells[1][110]="3) щебетание, увядающий (цветок), благословение";
	StringGrid1->Cells[1][111]="4) сближение, закоснелое (общество), скептический";
	StringGrid1->Cells[1][112]="5) перефразировать, полемичный, декоративный";

	StringGrid1->Cells[1][114]="1) раздираемый (противоречиями), улетучиться, кредит";
	StringGrid1->Cells[1][115]="2) олицетворение, преобразовать, выросли";   //20 ,14
	StringGrid1->Cells[1][116]="3) сетевой (шнур), умалять (значение), пятнистый";
	StringGrid1->Cells[1][117]="4) соберёт, абитуриент, поседеть (от горя)";
	StringGrid1->Cells[1][118]="5) отряхнуть, навевать (воспоминания), приласкать (щенка)";

}
//---------------------------------------------------------------------------
void __fastcall TKorniForm::CheckButtonClick(TObject *Sender)
{
    StringColumn3->ReadOnly=true;
	Button1->Enabled=true;

    int s=0;

	if (StringGrid1->Cells[2][0]=="24") {
		s++;
		StringGrid1->Cells[2][1]="ВЕРНО";
	}
	else StringGrid1->Cells[2][1]="НЕВЕРНО";

	if (StringGrid1->Cells[2][6]=="14") {
		s++;
		StringGrid1->Cells[2][7]="ВЕРНО";
	}
	else StringGrid1->Cells[2][7]="НЕВЕРНО";

	if (StringGrid1->Cells[2][12]=="23") {
		s++;
		StringGrid1->Cells[2][13]="ВЕРНО";
	}
	else StringGrid1->Cells[2][13]="НЕВЕРНО";

	if (StringGrid1->Cells[2][18]=="14") {
		s++;
		StringGrid1->Cells[2][19]="ВЕРНО";
	}
	else StringGrid1->Cells[2][19]="НЕВЕРНО";

	if (StringGrid1->Cells[2][24]=="23") {
		s++;
		StringGrid1->Cells[2][25]="ВЕРНО";
	}
	else StringGrid1->Cells[2][25]="НЕВЕРНО";

	if (StringGrid1->Cells[2][30]=="125") {
		s++;
		StringGrid1->Cells[2][31]="ВЕРНО";
	}
	else StringGrid1->Cells[2][31]="НЕВЕРНО";

	if (StringGrid1->Cells[2][36]=="145") {
		s++;
		StringGrid1->Cells[2][37]="ВЕРНО";
	}
	else StringGrid1->Cells[2][37]="НЕВЕРНО";

	if (StringGrid1->Cells[2][42]=="34") {
		s++;
		StringGrid1->Cells[2][43]="ВЕРНО";
	}
	else StringGrid1->Cells[2][43]="НЕВЕРНО";

	if (StringGrid1->Cells[2][48]=="24") {
		s++;
		StringGrid1->Cells[2][49]="ВЕРНО";
	}
	else StringGrid1->Cells[2][49]="НЕВЕРНО";

	if (StringGrid1->Cells[2][54]=="12") {
		s++;
		StringGrid1->Cells[2][55]="ВЕРНО";
	}
	else StringGrid1->Cells[2][55]="НЕВЕРНО";

	if (StringGrid1->Cells[2][60]=="25") {
		s++;
		StringGrid1->Cells[2][61]="ВЕРНО";
	}
	else StringGrid1->Cells[2][61]="НЕВЕРНО";

	if (StringGrid1->Cells[2][66]=="24") {
		s++;
		StringGrid1->Cells[2][67]="ВЕРНО";
	}
	else StringGrid1->Cells[2][67]="НЕВЕРНО";

	if (StringGrid1->Cells[2][72]=="145") {
		s++;
		StringGrid1->Cells[2][73]="ВЕРНО";
	}
	else StringGrid1->Cells[2][73]="НЕВЕРНО";

	if (StringGrid1->Cells[2][78]=="235") {
		s++;
		StringGrid1->Cells[2][79]="ВЕРНО";
	}
	else StringGrid1->Cells[2][79]="НЕВЕРНО";

	if (StringGrid1->Cells[2][84]=="25") {
		s++;
		StringGrid1->Cells[2][85]="ВЕРНО";
	}
	else StringGrid1->Cells[2][85]="НЕВЕРНО";

	if (StringGrid1->Cells[2][90]=="145") {
		s++;
		StringGrid1->Cells[2][91]="ВЕРНО";
	}
	else StringGrid1->Cells[2][91]="НЕВЕРНО";

	if (StringGrid1->Cells[2][96]=="14") {
		s++;
		StringGrid1->Cells[2][97]="ВЕРНО";
	}
	else StringGrid1->Cells[2][97]="НЕВЕРНО";

	if (StringGrid1->Cells[2][102]=="24") {
		s++;
		StringGrid1->Cells[2][103]="ВЕРНО";
	}
	else StringGrid1->Cells[2][103]="НЕВЕРНО";

	if (StringGrid1->Cells[2][108]=="345") {
		s++;
		StringGrid1->Cells[2][109]="ВЕРНО";
	}
	else StringGrid1->Cells[2][109]="НЕВЕРНО";

	if (StringGrid1->Cells[2][114]=="35") {
		s++;
		StringGrid1->Cells[2][115]="ВЕРНО";
	}
	else StringGrid1->Cells[2][115]="НЕВЕРНО";

	CheckLabel->Text=IntToStr(s);
	Timer1->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TKorniForm::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[2][4]="24";
	StringGrid1->Cells[2][10]="14";
	StringGrid1->Cells[2][16]="23";
	StringGrid1->Cells[2][22]="14";
	StringGrid1->Cells[2][28]="23";
	StringGrid1->Cells[2][34]="125";
	StringGrid1->Cells[2][40]="145";
	StringGrid1->Cells[2][46]="34";
	StringGrid1->Cells[2][52]="24";
	StringGrid1->Cells[2][58]="12";
	StringGrid1->Cells[2][64]="25";
	StringGrid1->Cells[2][70]="24";
	StringGrid1->Cells[2][76]="145";
	StringGrid1->Cells[2][82]="235";
	StringGrid1->Cells[2][88]="25";
	StringGrid1->Cells[2][94]="145";
	StringGrid1->Cells[2][100]="14";
	StringGrid1->Cells[2][106]="24";
	StringGrid1->Cells[2][112]="345";
	StringGrid1->Cells[2][118]="35";
}
//---------------------------------------------------------------------------
void __fastcall TKorniForm::Timer1Timer(TObject *Sender)
{
    Label3->Text=IntToStr(StrToInt(Label3->Text)+1);

	if (StrToInt(Label3->Text)%60==0) {
		Label4->Text=IntToStr(StrToInt(Label4->Text)+1);
		Label3->Text="0";
	}

    if (StrToInt(Label4->Text==15)) {

		CheckLabel->Text="Время вышло \nНажмите проверить";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------


