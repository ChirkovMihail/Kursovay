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
		  StringGrid1->Cells[0][i]=IntToStr(j)+". Укажите варианты ответов, в которых во всех словах одного";
		  StringGrid1->Cells[0][i+1]="ряда пропущена одна и та же буква. Запишите номера ответов.";
		  j++;
	 }
	 Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=true;

	StringGrid1->Cells[1][0]="1) удушл..вый, отшуч..ваться";     //1
	StringGrid1->Cells[1][1]="2) разве..ться, услужл..вый";
	StringGrid1->Cells[1][2]="3) десят..ричный, крут..зна";
	StringGrid1->Cells[1][3]="4) застёг..вая, вор..вать";
	StringGrid1->Cells[1][4]="5) улыбч..вый, застенч..вый";

	StringGrid1->Cells[1][6]="1) усидч..вость, текуч..сть";   //2
	StringGrid1->Cells[1][7]="2) пут..вой, зор..нька";
	StringGrid1->Cells[1][8]="3) налаж..вать, син..ватый";
	StringGrid1->Cells[1][9]="4) отпуг..вая, шалаш..к";
	StringGrid1->Cells[1][10]="5) расклан..вшийся, крив..зна";

	StringGrid1->Cells[1][12]="1) канад..кий (клён), ткац..кий (станок)";               //3
	StringGrid1->Cells[1][13]="2) (звон) бубенч..ков, осва..вать (территорию)";
	StringGrid1->Cells[1][14]="3) бич..вать (пороки), обесточ..ли (квартал)";
	StringGrid1->Cells[1][15]="4) предприимч..вый (человек), сосредоточ..вать (внимание)";
	StringGrid1->Cells[1][16]="5) (милый) добряч..к, суш..ные (фрукты)";

	StringGrid1->Cells[1][18]="1) претерп..вающий, замш..вый";           //4
	StringGrid1->Cells[1][19]="2) каракул..вый, остр..нький";
	StringGrid1->Cells[1][20]="3) леле..вший, извил..на";
	StringGrid1->Cells[1][21]="4) милост..вый, измуч..нный";
	StringGrid1->Cells[1][22]="5) разбрызг..вая, тюл..вый";

	StringGrid1->Cells[1][24]="1) син..ватый, обур..ваемый";                //5
	StringGrid1->Cells[1][25]="2) плюш..вый, азот..стые (соединения)";
	StringGrid1->Cells[1][26]="3) сводч..тый (потолок), сначал..";
	StringGrid1->Cells[1][27]="4) абхаз..кий, скольз..кий";
	StringGrid1->Cells[1][28]="5) завед..вать, парч..вое (платье)";

	StringGrid1->Cells[1][30]="1) накапл..вать, улыбч..вый";             //6
	StringGrid1->Cells[1][31]="2) податл..вый; нул..вой";
	StringGrid1->Cells[1][32]="3) се..вший, перекле..вать";
	StringGrid1->Cells[1][33]="4) сид..вший, потч..вать";
	StringGrid1->Cells[1][34]="5) выздоров..ть, смекал..стый";

	StringGrid1->Cells[1][36]="1) огранич..вать, отказ..вайтесь";
	StringGrid1->Cells[1][37]="2) толк..вать, милост..вый";            //7
	StringGrid1->Cells[1][38]="3) затейл..вый, постук..вает";
	StringGrid1->Cells[1][39]="4) заманч..вый, бел..нький";
	StringGrid1->Cells[1][40]="5) усидч..вость, книж..ца";

	StringGrid1->Cells[1][42]="1) фасол..вый, дожд..вой";            //8
	StringGrid1->Cells[1][43]="2) высме..вать, мороз..ц";
	StringGrid1->Cells[1][44]="3) насмешл..вый, платоч..к";
	StringGrid1->Cells[1][45]="4) сонл..вый, молодц..ватый";
	StringGrid1->Cells[1][46]="5) удва..вать, болот..стый";

	StringGrid1->Cells[1][48]="1) застр..вать, милост..вый";
	StringGrid1->Cells[1][49]="2) белорус..кий, рус..кий";   //9
	StringGrid1->Cells[1][50]="3) гуттаперч..вый, обеззуб..л (к старости)";
	StringGrid1->Cells[1][51]="4) издавн.., засветл..";
	StringGrid1->Cells[1][52]="5) форел..вый, син..ватый";

	StringGrid1->Cells[1][54]="1) устра..вать, бараш..к";
	StringGrid1->Cells[1][55]="2) приукраш..вать, письм..цо";      //10
	StringGrid1->Cells[1][56]="3) догадл..вость, крас..вый";
	StringGrid1->Cells[1][57]="4) въедл..вый, подбадр..вать";
	StringGrid1->Cells[1][58]="5) подразум..вающий, луж..ца";

	StringGrid1->Cells[1][60]="1) подчёрк..вать, фасол..вый";
	StringGrid1->Cells[1][61]="2) солом..нка, разборч..вый"; //11
	StringGrid1->Cells[1][62]="3) нефт..ная (скважина), ветр..ная (мельница)";
	StringGrid1->Cells[1][63]="4) недоум..вать, устра..вать";
	StringGrid1->Cells[1][64]="5) затм..вать, подароч..к";

	StringGrid1->Cells[1][66]="1) вышаг..вая, нищ..та";       //12
	StringGrid1->Cells[1][67]="2) эмал..вый, зно..н";
	StringGrid1->Cells[1][68]="3) насмешл..вый, лен..вый";
	StringGrid1->Cells[1][69]="4) накрахмал..вший, врем..чко";
	StringGrid1->Cells[1][70]="5) делов..тый, пес..нка";

	StringGrid1->Cells[1][72]="1) одол..вать, податл..вый";
	StringGrid1->Cells[1][73]="2) раскашл..лся, берест..ная (грамота)";        //13
	StringGrid1->Cells[1][74]="3) пальт..цо, удоста..вавший";
	StringGrid1->Cells[1][75]="4) обезбол..вающее, уступч..вый";
	StringGrid1->Cells[1][76]="5) двустворч..тый, замертв..";

	StringGrid1->Cells[1][78]="1) неразборч..вый, овлад..вать";
	StringGrid1->Cells[1][79]="2) высме..вающий, отапл..вать";    //14
	StringGrid1->Cells[1][80]="3) заботл..вый, заманч..вый";
	StringGrid1->Cells[1][81]="4) запечатл..вать, милост..вый";
	StringGrid1->Cells[1][82]="5) завистл..вый, коч..вать";

	StringGrid1->Cells[1][84]="1) ткан..вый, отчётл..во";            //15
	StringGrid1->Cells[1][85]="2) застр..вание, сол..вой";
	StringGrid1->Cells[1][86]="3) трав..нистый, им..нной (билет)";
	StringGrid1->Cells[1][87]="4) навед..ваться, аплодир..вали";
	StringGrid1->Cells[1][88]="5) камыш..вый, нож..вка";

	StringGrid1->Cells[1][90]="1) претерп..вающий, замш..вый";
	StringGrid1->Cells[1][91]="2) забол..вающий, нищ..нка";          //16
	StringGrid1->Cells[1][92]="3) доходч..вость, стрем..ни";
	StringGrid1->Cells[1][93]="4) вздраг..вающий, потч..вать";
	StringGrid1->Cells[1][94]="5) сбивч..вый, имень..це";

	StringGrid1->Cells[1][96]="1) звоноч..к, ослаб..вать";
	StringGrid1->Cells[1][97]="2) щетин..стая (борода), заноч..вавший";    //17
	StringGrid1->Cells[1][98]="3) предприимч..вый, раска..ваться";
	StringGrid1->Cells[1][99]="4) образц..вое (поведение), горяч.. (спорить)";
	StringGrid1->Cells[1][100]="5) натри..вый, удушл..вый (запах)";

	StringGrid1->Cells[1][102]="1) усидч..вый, переменч..вый";            //18
	StringGrid1->Cells[1][103]="2) отстёг..вавший, глянц..вый";
	StringGrid1->Cells[1][104]="3) щегол..ватый, находч..вый";
	StringGrid1->Cells[1][105]="4) прислуш..ваться, гор..вать";
	StringGrid1->Cells[1][106]="5) заносч..вый, отапл..ваемый";

	StringGrid1->Cells[1][108]="1) претерп..вая, вывеш..вать";
	StringGrid1->Cells[1][109]="2) кокетл..во, молод..нький";            //19
	StringGrid1->Cells[1][110]="3) ноздр..ватый, ослаб..вать";
	StringGrid1->Cells[1][111]="4) застра..вать, завистл..вый";
	StringGrid1->Cells[1][112]="5) сладк..ватый, (сдвинуть) вправ..";

	StringGrid1->Cells[1][114]="1) выкрик..вать, горош..нка";
	StringGrid1->Cells[1][115]="2) повизг..вая, глянц..вый";   //20
	StringGrid1->Cells[1][116]="3) неряшл..вый, во..вать";
	StringGrid1->Cells[1][117]="4) книж..ца, дом..ще";
	StringGrid1->Cells[1][118]="5) сирен..ватый, юрод..вый";


}
//---------------------------------------------------------------------------
void __fastcall TSuffiksyForm::CheckButtonClick(TObject *Sender)
{
	int s=0;

	if (StringGrid1->Cells[2][0]=="15") {
		s++;
		StringGrid1->Cells[2][1]="ВЕРНО";
	}
	else StringGrid1->Cells[2][1]="НЕВЕРНО";

	if (StringGrid1->Cells[2][6]=="24") {
		s++;
		StringGrid1->Cells[2][7]="ВЕРНО";
	}
	else StringGrid1->Cells[2][7]="НЕВЕРНО";

	if (StringGrid1->Cells[2][12]=="24") {
		s++;
		StringGrid1->Cells[2][13]="ВЕРНО";
	}
	else StringGrid1->Cells[2][13]="НЕВЕРНО";

	if (StringGrid1->Cells[2][18]=="12") {
		s++;
		StringGrid1->Cells[2][19]="ВЕРНО";
	}
	else StringGrid1->Cells[2][19]="НЕВЕРНО";

	if (StringGrid1->Cells[2][24]=="135") {
		s++;
		StringGrid1->Cells[2][25]="ВЕРНО";
	}
	else StringGrid1->Cells[2][25]="НЕВЕРНО";

	if (StringGrid1->Cells[2][30]=="14") {
		s++;
		StringGrid1->Cells[2][31]="ВЕРНО";
	}
	else StringGrid1->Cells[2][31]="НЕВЕРНО";

	if (StringGrid1->Cells[2][36]=="35") {
		s++;
		StringGrid1->Cells[2][37]="ВЕРНО";
	}
	else StringGrid1->Cells[2][37]="НЕВЕРНО";

	if (StringGrid1->Cells[2][42]=="15") {
		s++;
		StringGrid1->Cells[2][43]="ВЕРНО";
	}
	else StringGrid1->Cells[2][43]="НЕВЕРНО";

	if (StringGrid1->Cells[2][48]=="235") {
		s++;
		StringGrid1->Cells[2][49]="ВЕРНО";
	}
	else StringGrid1->Cells[2][49]="НЕВЕРНО";

	if (StringGrid1->Cells[2][54]=="34") {
		s++;
		StringGrid1->Cells[2][55]="ВЕРНО";
	}
	else StringGrid1->Cells[2][55]="НЕВЕРНО";

	if (StringGrid1->Cells[2][60]=="235") {
		s++;
		StringGrid1->Cells[2][61]="ВЕРНО";
	}
	else StringGrid1->Cells[2][61]="НЕВЕРНО";

	if (StringGrid1->Cells[2][66]=="23") {
		s++;
		StringGrid1->Cells[2][67]="ВЕРНО";
	}
	else StringGrid1->Cells[2][67]="НЕВЕРНО";

	if (StringGrid1->Cells[2][72]=="24") {
		s++;
		StringGrid1->Cells[2][73]="ВЕРНО";
	}
	else StringGrid1->Cells[2][73]="НЕВЕРНО";

	if (StringGrid1->Cells[2][78]=="23") {
		s++;
		StringGrid1->Cells[2][79]="ВЕРНО";
	}
	else StringGrid1->Cells[2][79]="НЕВЕРНО";

	if (StringGrid1->Cells[2][84]=="25") {
		s++;
		StringGrid1->Cells[2][85]="ВЕРНО";
	}
	else StringGrid1->Cells[2][85]="НЕВЕРНО";

	if (StringGrid1->Cells[2][90]=="25") {
		s++;
		StringGrid1->Cells[2][91]="ВЕРНО";
	}
	else StringGrid1->Cells[2][91]="НЕВЕРНО";

	if (StringGrid1->Cells[2][96]=="134") {
		s++;
		StringGrid1->Cells[2][97]="ВЕРНО";
	}
	else StringGrid1->Cells[2][97]="НЕВЕРНО";

	if (StringGrid1->Cells[2][102]=="15") {
		s++;
		StringGrid1->Cells[2][103]="ВЕРНО";
	}
	else StringGrid1->Cells[2][103]="НЕВЕРНО";

	if (StringGrid1->Cells[2][108]=="345") {
		s++;
		StringGrid1->Cells[2][109]="ВЕРНО";
	}
	else StringGrid1->Cells[2][109]="НЕВЕРНО";

	if (StringGrid1->Cells[2][114]=="14") {
		s++;
		StringGrid1->Cells[2][115]="ВЕРНО";
	}
	else StringGrid1->Cells[2][115]="НЕВЕРНО";

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

		CheckLabel->Text="Время вышло \nНажмите проверить";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------


