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
		StringGrid1->Cells[0][i]=IntToStr(j)+". ”кажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного р€да пропущена одна и ";
		StringGrid1->Cells[0][i+2]="та же буква. «апишите номера ответов.";
		j++;
	}

	for (i = 60; i < 120; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ¬ одном из приведЄнных ниже слов";
		StringGrid1->Cells[0][i+1]="допущена ошибка в постановке ударени€:";
		StringGrid1->Cells[0][i+2]="Ќ≈¬≈–Ќќ выделена буква, обозначающа€ ";
		StringGrid1->Cells[0][i+3]="ударный гласный звук. ¬ыпишите это слово.";
		j++;
	}

	for (i = 120; i < 144; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ”кажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного р€да ";
		StringGrid1->Cells[0][i+2]="содержитс€ безударна€ чередующа€с€ ";
		StringGrid1->Cells[0][i+3]="гласна€ корн€. «апишите номера ответов.";
		j++;
	}

	for (i = 144; i < 162; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ”кажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного р€да ";
		StringGrid1->Cells[0][i+2]="содержитс€ безударна€ провер€ема€ ";
		StringGrid1->Cells[0][i+3]="гласна€ корн€. «апишите номера ответов.";
		j++;
	}

	for (i = 162; i < 180; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ”кажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного р€да ";
		StringGrid1->Cells[0][i+2]="содержитс€ безударна€ непровер€ема€ ";
		StringGrid1->Cells[0][i+3]="гласна€ корн€. «апишите номера ответов.";
		j++;
	}

	for (i = 180; i < 240; i+=6) {
		StringGrid1->Cells[0][i]=IntToStr(j)+". ”кажите варианты ответов, в которых";
		StringGrid1->Cells[0][i+1]="во всех словах одного р€да пропущена одна и ";
		StringGrid1->Cells[0][i+2]="та же буква. «апишите номера ответов.";
		j++;
	}

	StringGrid1->Cells[1][0]="1) устра..вать, бараш..к";     //1
	StringGrid1->Cells[1][1]="2) приукраш..вать, письм..цо";
	StringGrid1->Cells[1][2]="3) догадл..вость, крас..вый";
	StringGrid1->Cells[1][3]="4) въедл..вый, подбадр..вать";
	StringGrid1->Cells[1][4]="5) подразум..вающий, луж..ца";

	StringGrid1->Cells[1][6]="1) потреб..вать, выклад..вать";   //2
	StringGrid1->Cells[1][7]="2) преусп..вать, эмал..вый";
	StringGrid1->Cells[1][8]="3) раскрепощ..нность, ноч..вка";
	StringGrid1->Cells[1][9]="4) (хрустальный) графинч..к, пружин..стое кресло";
	StringGrid1->Cells[1][10]="5) изворотл..вый (торговец), выздоравл..ва€";

	StringGrid1->Cells[1][12]="1) удва..вать, лестн..чка";               //3
	StringGrid1->Cells[1][13]="2) груш..вый, нищ..та";
	StringGrid1->Cells[1][14]="3) обид..лс€, мотылЄч..к";
	StringGrid1->Cells[1][15]="4) локт..вой, пр€м..та";
	StringGrid1->Cells[1][16]="5) фланел..вый, заносч..вый";

	StringGrid1->Cells[1][18]="1) усидч..вый, переменч..вый";           //4
	StringGrid1->Cells[1][19]="2) отстЄг..вавший, гл€нц..вый";
	StringGrid1->Cells[1][20]="3) щегол..ватый, находч..вый";
	StringGrid1->Cells[1][21]="4) прислуш..ватьс€, гор..вать";
	StringGrid1->Cells[1][22]="5) заносч..вый, отапл..ваемый";

	StringGrid1->Cells[1][24]="1) ткан..вый, отчЄтл..во";                //5
	StringGrid1->Cells[1][25]="2) застр..вание, сол..вой";
	StringGrid1->Cells[1][26]="3) трав..нистый, им..нной (билет)";
	StringGrid1->Cells[1][27]="4) навед..ватьс€, аплодир..вали";
	StringGrid1->Cells[1][28]="5) камыш..вый, нож..вка";

	StringGrid1->Cells[1][30]="1) находч..во, разве..ть";             //6
	StringGrid1->Cells[1][31]="2) достра..вать, кле..вший";
	StringGrid1->Cells[1][32]="3) никел..вый, реша..мый";
	StringGrid1->Cells[1][33]="4) наде..лс€, дешЄв..нький";
	StringGrid1->Cells[1][34]="5) винов..н, талантл..вый";

	StringGrid1->Cells[1][36]="1) звоноч..к, ослаб..вать";
	StringGrid1->Cells[1][37]="2) щетин..ста€ (борода), заноч..вавший";            //7
	StringGrid1->Cells[1][38]="3) предприимч..вый, раска..ватьс€";
	StringGrid1->Cells[1][39]="4) образц..вое (поведение), гор€ч.. (спорить)";
	StringGrid1->Cells[1][40]="5) натри..вый, удушл..вый (запах)";

	StringGrid1->Cells[1][42]="1) удоста..вать, масл..це";            //8
	StringGrid1->Cells[1][43]="2) отво..вав, плать..це";
	StringGrid1->Cells[1][44]="3) локт..вой, ключ..к";
	StringGrid1->Cells[1][45]="4) угр..ватый, досто..н";
	StringGrid1->Cells[1][46]="5) дешев..нький, баш..нка";

	StringGrid1->Cells[1][48]="1) фланел..вый, красн..ватый";
	StringGrid1->Cells[1][49]="2) овлад..ва€, крупитч..тый";   //9
	StringGrid1->Cells[1][50]="3) хитр..нький, восьм..ричный";
	StringGrid1->Cells[1][51]="4) затм..вающий, со..вый";
	StringGrid1->Cells[1][52]="5) удва..вавший, податл..вый";

	StringGrid1->Cells[1][54]="1) вышаг..ва€, нищ..та";
	StringGrid1->Cells[1][55]="2) эмал..вый, зно..н";      //10
	StringGrid1->Cells[1][56]="3) насмешл..вый, лен..вый";
	StringGrid1->Cells[1][57]="4) накрахмал..вший, врем..чко";
	StringGrid1->Cells[1][58]="5) делов..тый, пес..нка";

	StringGrid1->Cells[1][60]="вр”чишь";
	StringGrid1->Cells[1][61]="крјны"; //1
	StringGrid1->Cells[1][62]="дќверху";
	StringGrid1->Cells[1][63]="налилј";
	StringGrid1->Cells[1][64]="в≈рба";

	StringGrid1->Cells[1][66]="принуд»ть";       //2
	StringGrid1->Cells[1][67]="углуб»ть";
	StringGrid1->Cells[1][68]="ерет»к";
	StringGrid1->Cells[1][69]="плодонос»ть";
	StringGrid1->Cells[1][70]="дон≈льз€";

	StringGrid1->Cells[1][72]="аэропќрты";
	StringGrid1->Cells[1][73]="ќтрочество";        //3
	StringGrid1->Cells[1][74]="пќн€вший";
	StringGrid1->Cells[1][75]="накрен»т";
	StringGrid1->Cells[1][76]="начјвший";

	StringGrid1->Cells[1][78]="прир”ченный";
	StringGrid1->Cells[1][79]="бјнты";    //4
	StringGrid1->Cells[1][80]="деф»с";
	StringGrid1->Cells[1][81]="эксп≈рт";
	StringGrid1->Cells[1][82]="ист≈кший";

	StringGrid1->Cells[1][84]="»ксы";            //5
	StringGrid1->Cells[1][85]="насор»т";
	StringGrid1->Cells[1][86]="кр≈мень";
	StringGrid1->Cells[1][87]="наж»вший";
	StringGrid1->Cells[1][88]="диспанс≈р";

	StringGrid1->Cells[1][90]="созџв";
	StringGrid1->Cells[1][91]="ќтзыв (посла)";          //6
	StringGrid1->Cells[1][92]="добелј";
	StringGrid1->Cells[1][93]="оптќвый";
	StringGrid1->Cells[1][94]="тубдиспанс≈р";

	StringGrid1->Cells[1][96]="позвалј";
	StringGrid1->Cells[1][97]="принял";    //7
	StringGrid1->Cells[1][98]="начјв";
	StringGrid1->Cells[1][99]="тќрты";
	StringGrid1->Cells[1][100]="ќтрочество";

	StringGrid1->Cells[1][102]="кќнусов";            //8
	StringGrid1->Cells[1][103]="намер≈ние";
	StringGrid1->Cells[1][104]="ч≈рпать";
	StringGrid1->Cells[1][105]="нед”г";
	StringGrid1->Cells[1][106]="цыгјн";

	StringGrid1->Cells[1][108]="»конопись";
	StringGrid1->Cells[1][109]="сливќвый";            //9
	StringGrid1->Cells[1][110]="пќгнутый";
	StringGrid1->Cells[1][111]="гр”шевый";
	StringGrid1->Cells[1][112]="кровоточ»ть";

	StringGrid1->Cells[1][114]="начјтый";
	StringGrid1->Cells[1][115]="отозвалјсь";   //10
	StringGrid1->Cells[1][116]="дќверху";
	StringGrid1->Cells[1][117]="моза»чный";
	StringGrid1->Cells[1][118]="нед”г";

	StringGrid1->Cells[1][120]="1) поплавок, склонение, озар€ть";
	StringGrid1->Cells[1][121]="2) заниматьс€, обжигающий, предложение"; //1 ,2
	StringGrid1->Cells[1][122]="3) аналогичный, потер€ть, разрастатьс€";
	StringGrid1->Cells[1][123]="4) стилизовать, забирать, касание";
	StringGrid1->Cells[1][124]="5) подскочить, отнимать, блистать";

	StringGrid1->Cells[1][126]="1) гастроном, тр€сти, делегат"; //2 ,5
	StringGrid1->Cells[1][127]="2) регулировать, кабинет, дисциплина";
	StringGrid1->Cells[1][128]="3) понимание, выровн€ть (поверхность), поросль";
	StringGrid1->Cells[1][129]="4) результат, храбрец, ослепительный";
	StringGrid1->Cells[1][130]="5) вырос, вычитать, опиратьс€";

	StringGrid1->Cells[1][132]="1) эксперимент, преподавать, бечЄвка";
	StringGrid1->Cells[1][133]="2) опира€сь, вырасти, наклонитьс€";        //3 ,8
	StringGrid1->Cells[1][134]="3) росток, угасать, бидон";
	StringGrid1->Cells[1][135]="4) соберЄшь, безотлагательный, озарило";
	StringGrid1->Cells[1][136]="5) измер€ть, диагональ, велосипед";

	StringGrid1->Cells[1][138]="1) вырастил, выкосил (траву), пловчиха";
	StringGrid1->Cells[1][139]="2) запереть, зар€, изложение";    //4  ,11
	StringGrid1->Cells[1][140]="3) выскочил, касание, поджигать";
	StringGrid1->Cells[1][141]="4) смирилс€, пригорюнилс€, творец";
	StringGrid1->Cells[1][142]="5) блистать, занесЄнный, выгореть";

	StringGrid1->Cells[1][144]="1) раскраснетьс€, подсмотреть, ходовой";            //5.1
	StringGrid1->Cells[1][145]="2) претензи€, макулатура, приложение";
	StringGrid1->Cells[1][146]="3) предлагать, зарница, обмакните (перо)";
	StringGrid1->Cells[1][147]="4) примирение, замечать (детали), поласкать (собаку)";
	StringGrid1->Cells[1][148]="5) убедительно, фиолетовый, наваждение";

	StringGrid1->Cells[1][150]="1) одичать, издалека, задрожать";
	StringGrid1->Cells[1][151]="2) оплатить (заказ), оснащение, способный";          //6.6
	StringGrid1->Cells[1][152]="3) скосить (траву), полемизировать, подгорать";
	StringGrid1->Cells[1][153]="4) протереть, дерев€шка, благородный";
	StringGrid1->Cells[1][154]="5) утешитель, фантастический, касательна€";

	StringGrid1->Cells[1][156]="1) заклинать, реакци€, полагать";
	StringGrid1->Cells[1][157]="2) профориентаци€, доброта, ветеран";    //7 .9
	StringGrid1->Cells[1][158]="3) загл€денье, пример€ть (галстук), полева€ (кухн€)";
	StringGrid1->Cells[1][159]="4) внимательный, дипломат, президент";
	StringGrid1->Cells[1][160]="5) города, насмехатьс€, скрипуча€";

	StringGrid1->Cells[1][162]="1) вестибюль, инженер, интеллигенци€";   //8.4
	StringGrid1->Cells[1][163]="2) осквернить, винегрет, (глаза) слипались";
	StringGrid1->Cells[1][164]="3) предполагать, побледнел, вытвор€ть";
	StringGrid1->Cells[1][165]="4) фонтан, балкон, каблук";
	StringGrid1->Cells[1][166]="5) равнина, ровесник, запивать (лекарство)";

	StringGrid1->Cells[1][168]="1) аристократ, министерство, дивизион";
	StringGrid1->Cells[1][169]="2) озар€тьс€, просмотреть, мор€чок";  //9.7
	StringGrid1->Cells[1][170]="3) выскочка, деревь€, выстелить";
	StringGrid1->Cells[1][171]="4) приоритет, горизонт, стратеги€";
	StringGrid1->Cells[1][172]="5) расстилаетс€, прикасатьс€, умиротворение";

	StringGrid1->Cells[1][174]="1) авиакомпани€, импровизаци€, балагур";
	StringGrid1->Cells[1][175]="2) озаритьс€, простиратьс€, горит";   //10 .10
	StringGrid1->Cells[1][176]="3) оппонент, дискусси€, ватрушка";
	StringGrid1->Cells[1][177]="4) строжайший, приземлЄнный, посветил (в темноте)";
	StringGrid1->Cells[1][178]="5) сложившийс€, тотальный, умал€ть (значение)";

	StringGrid1->Cells[1][180]="1) об..гретьс€, пр..питанный, пр..сматривать (статью)";
	StringGrid1->Cells[1][181]="2) про..грать, с..змала, дез..нфекци€"; //1
	StringGrid1->Cells[1][182]="3) ра..мешать, бе..численный, и..чезнуть";
	StringGrid1->Cells[1][183]="4) пр..старелый, пр..открыть, пр..вокзальный";
	StringGrid1->Cells[1][184]="5) нед..варить, п..краска, п..дкова";

	StringGrid1->Cells[1][186]="1) под..брать, н..дорвать, с..действие";       //2
	StringGrid1->Cells[1][187]="2) р..€ный, валер..€на, л..Єт";
	StringGrid1->Cells[1][188]="3) пр..равн€ть, пр..брежный, пр..стегнуть";
	StringGrid1->Cells[1][189]="4) бе..характерный, ра..бросанный, ра..трЄпа";
	StringGrid1->Cells[1][190]="5) нао..рез, на..кусывать, по..ставл€ть";

	StringGrid1->Cells[1][192]="1) пр..способь (дл€ работы), пр..крыл, непр..хотливый";
	StringGrid1->Cells[1][193]="2) в..езд (во двор), б..ют (по щеке), помест..е";        //3
	StringGrid1->Cells[1][194]="3) сверх..нтеллигентный, по..скать, вз..мать";
	StringGrid1->Cells[1][195]="4) опр..кинуть, пр..родина, под..брать";
	StringGrid1->Cells[1][196]="5) ра..шифруй, бе..человечно, не..жатый";

	StringGrid1->Cells[1][198]="1. вд..гонку, з..копчЄнный, п..трескивает";
	StringGrid1->Cells[1][199]="2. под..есаул, меж..€русный, под..€зычный";    //4
	StringGrid1->Cells[1][200]="3. пр..норовитьс€, пр..нар€женный, пр..строенный";
	StringGrid1->Cells[1][201]="4. ра..тревожить, и..бежать, ..двинуть";
	StringGrid1->Cells[1][202]="5. п..мчатьс€, нер..сположение, ..тпраздновать";

	StringGrid1->Cells[1][204]="1) не..хваченный (переписью), р..зместить, п..дметать";            //5
	StringGrid1->Cells[1][205]="2) раз..Ємный, под..Єм, об..ект";
	StringGrid1->Cells[1][206]="3) не..жатый, бе..дорожье, бе..заботно";
	StringGrid1->Cells[1][207]="4) под..скать, сверх..нтересный, вз..мать";
	StringGrid1->Cells[1][208]="5) пр..обретатель, пр..чудливый, пр..ход€щий (домой)";

	StringGrid1->Cells[1][210]="1) пр..обрЄл, пр..образователь, сверх..нтересный";
	StringGrid1->Cells[1][211]="2) п..дсказывать, п..никнуть, д..ехать";          //6
	StringGrid1->Cells[1][212]="3) п..едестал, ал..тернатива, б..ютс€";
	StringGrid1->Cells[1][213]="4) и..древле, не..держанный, не..добровать";
	StringGrid1->Cells[1][214]="5) оп..знание, нер..створимый, п..йдЄм";

	StringGrid1->Cells[1][216]="1) п..иск, неп..ддающийс€, от..двинуть";
	StringGrid1->Cells[1][217]="2) ра..бросать, и..пуганный, бе..вольный";    //7
	StringGrid1->Cells[1][218]="3) пр..следовать, пр..милый, пр..смыкающийс€";
	StringGrid1->Cells[1][219]="4) с..еденный, сер..Єзный, ад..ютант";
	StringGrid1->Cells[1][220]="5) нап..следок, н..слаждатьс€, д..братьс€";

	StringGrid1->Cells[1][222]="1) пр..горок, пр..тихнуть, пр..норовитьс€";            //8
	StringGrid1->Cells[1][223]="2) бе..конечный, ра..кроить, ра..чЄт";
	StringGrid1->Cells[1][224]="3) зав..южить, об..ект, под..строй";
	StringGrid1->Cells[1][225]="4) п..дбежать, пор..скрутить, д..лепить";
	StringGrid1->Cells[1][226]="5) без..сходный, двух..гольный, под..скать";

	StringGrid1->Cells[1][228]="1) пр..верить, д..йти, в..спитание";
	StringGrid1->Cells[1][229]="2) пр..интересный, пр..брежный, пр..сесть"; //9  .10
	StringGrid1->Cells[1][230]="3) в..езд, зав..южить, от..€вленный";
	StringGrid1->Cells[1][231]="4) бе..тактный, в..пыхнуть, во..стать";
	StringGrid1->Cells[1][232]="5) по..делка, о..тепель, на..смотрщик";

	StringGrid1->Cells[1][234]="1) пр..образовать, пр..непри€тный, пр..следовать";
	StringGrid1->Cells[1][235]="2) сверх..естественный, с..Ємка, двух..€русный";   //10  .11
	StringGrid1->Cells[1][236]="3) п..никнуть, пр..дедушка, поз..вчера";
	StringGrid1->Cells[1][237]="4) чере..чур, и..син€-чЄрный, бе..крайний";
	StringGrid1->Cells[1][238]="5) вз..скать, без..нициативный, сверх..зысканный";

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
		StringGrid1->Cells[2][1]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][1]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][6]=="2345") {
		s++;
		StringGrid1->Cells[2][7]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][7]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][12]=="123") {
		s++;
		StringGrid1->Cells[2][13]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][13]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][18]=="15") {
		s++;
		StringGrid1->Cells[2][19]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][19]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][24]=="25") {
		s++;
		StringGrid1->Cells[2][25]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][25]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][30]=="23") {
		s++;
		StringGrid1->Cells[2][31]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][31]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][36]=="134") {
		s++;
		StringGrid1->Cells[2][37]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][37]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][42]=="15") {
		s++;
		StringGrid1->Cells[2][43]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][43]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][48]=="345") {
		s++;
		StringGrid1->Cells[2][49]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][49]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][54]=="23") {
		s++;
		StringGrid1->Cells[2][55]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][55]="Ќ≈¬≈–Ќќ";




	if (StringGrid1->Cells[2][60]=="вручишь") {
		s++;
		StringGrid1->Cells[2][61]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][61]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][66]=="принудить") {
		s++;
		StringGrid1->Cells[2][67]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][67]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][72]=="пон€вший") {
		s++;
		StringGrid1->Cells[2][73]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][73]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][78]=="пон€вший") {
		s++;
		StringGrid1->Cells[2][79]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][79]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][84]=="кремень") {
		s++;
		StringGrid1->Cells[2][85]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][85]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][90]=="отзыв") {
		s++;
		StringGrid1->Cells[2][91]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][91]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][96]=="прин€л") {
		s++;
		StringGrid1->Cells[2][97]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][97]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][102]=="намерение") {
		s++;
		StringGrid1->Cells[2][103]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][103]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][108]=="сливовый") {
		s++;
		StringGrid1->Cells[2][109]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][109]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][114]=="начатый") {
		s++;
		StringGrid1->Cells[2][115]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][115]="Ќ≈¬≈–Ќќ";




	if (StringGrid1->Cells[2][120]=="125") {
		s++;
		StringGrid1->Cells[2][121]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][121]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][126]=="35") {
		s++;
		StringGrid1->Cells[2][127]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][127]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][132]=="24") {
		s++;
		StringGrid1->Cells[2][133]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][133]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][138]=="23") {
		s++;
		StringGrid1->Cells[2][139]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][139]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][144]=="14") {
		s++;
		StringGrid1->Cells[2][145]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][145]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][150]=="12") {
		s++;
		StringGrid1->Cells[2][151]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][151]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][156]=="35") {
		s++;
		StringGrid1->Cells[2][157]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][157]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][162]=="14") {
		s++;
		StringGrid1->Cells[2][163]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][163]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][168]=="14") {
		s++;
		StringGrid1->Cells[2][169]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][169]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][174]=="13") {
		s++;
		StringGrid1->Cells[2][175]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][175]="Ќ≈¬≈–Ќќ";



	if (StringGrid1->Cells[2][180]=="15") {
		s++;
		StringGrid1->Cells[2][181]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][181]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][186]=="23") {
		s++;
		StringGrid1->Cells[2][187]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][187]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][192]=="135") {
		s++;
		StringGrid1->Cells[2][193]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][193]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][198]=="23") {
		s++;
		StringGrid1->Cells[2][199]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][199]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][204]=="25") {
		s++;
		StringGrid1->Cells[2][205]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][205]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][210]=="23") {
		s++;
		StringGrid1->Cells[2][211]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][211]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][216]=="13") {
		s++;
		StringGrid1->Cells[2][217]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][217]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][222]=="12") {
		s++;
		StringGrid1->Cells[2][223]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][223]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][228]=="14") {
		s++;
		StringGrid1->Cells[2][229]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][229]="Ќ≈¬≈–Ќќ";

	if (StringGrid1->Cells[2][234]=="124") {
		s++;
		StringGrid1->Cells[2][235]="¬≈–Ќќ";
	}
	else StringGrid1->Cells[2][235]="Ќ≈¬≈–Ќќ";

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

	StringGrid1->Cells[2][64]="вручишь";
	StringGrid1->Cells[2][70]="принудить";
	StringGrid1->Cells[2][76]="пон€вший";
	StringGrid1->Cells[2][82]="прирученный";
	StringGrid1->Cells[2][88]="кремень";
	StringGrid1->Cells[2][94]="отзыв";
	StringGrid1->Cells[2][100]="прин€л";
	StringGrid1->Cells[2][106]="намерение";
	StringGrid1->Cells[2][112]="сливовый";
	StringGrid1->Cells[2][118]="начатый";

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

		CheckLabel->Text="¬рем€ вышло \nЌажмите проверить";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------
