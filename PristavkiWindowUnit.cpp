//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "PristavkiWindowUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TPristavkiForm *PristavkiForm;
//---------------------------------------------------------------------------
__fastcall TPristavkiForm::TPristavkiForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPristavkiForm::??????Click(TObject *Sender)
{
	Label3->Text="0";
	Label4->Text="0";
	Timer1->Enabled=true;

	StringGrid1->Cells[0][0]="1. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][1]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][0]="1) ??..????????, ??..?????????, ??..??????????";
	StringGrid1->Cells[1][1]="2) ??..???????, ??..????, ???..????????";
	StringGrid1->Cells[1][2]="3) ???..??????, ????..?????, ???..???????";
	StringGrid1->Cells[1][3]="4) ?..???????, ?..???, ??..???";
	StringGrid1->Cells[1][4]="5) ???..?????, ???..??????, ???..??????";

	StringGrid1->Cells[0][5]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][5]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][5]="--------------------";

	StringGrid1->Cells[0][6]="2. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][7]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][6]="1) ??..?????????, ??..???????, ??..??????????";
	StringGrid1->Cells[1][7]="2) ??..???????????, ??..?????????? ,?..????";
	StringGrid1->Cells[1][8]="3) ?..????????, ???..???????, ??..???????";
	StringGrid1->Cells[1][9]="4) ??..????????, ???..????, ??..??";
	StringGrid1->Cells[1][10]="5) ?..??????, ???..????????, ?..??????";

	StringGrid1->Cells[0][11]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][11]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][11]="--------------------";

	StringGrid1->Cells[0][12]="3. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][13]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][12]="1) ??..???????, ??..????? (???????), ??..????????";
	StringGrid1->Cells[1][13]="2) ??..??????????, ??..???????, ?..????????";
	StringGrid1->Cells[1][14]="3) ???..????, ?????..?????, ?..????";
	StringGrid1->Cells[1][15]="4) ?..?????? (???????), ??..????????, ??..??????";
	StringGrid1->Cells[1][16]="5) ??..?????, ???..??????, ?..?????";

	StringGrid1->Cells[0][17]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][17]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][17]="--------------------";

	StringGrid1->Cells[0][18]="4. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][19]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][18]="1) ??..?????, ??..????????????, ?????..?????????";
	StringGrid1->Cells[1][19]="2) ?..??????????, ?..???????, ?..?????";
	StringGrid1->Cells[1][20]="3) ?..???????, ??..?????????, ?..????";
	StringGrid1->Cells[1][21]="4) ?..??????, ??..?????????, ??..?????????";
	StringGrid1->Cells[1][22]="5) ??..??????, ???..?????????, ?..????";

	StringGrid1->Cells[0][23]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][23]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][23]="--------------------";

	StringGrid1->Cells[0][24]="5. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][25]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][24]="1) ??..???????? (?????), ??..??????????? (????? ????), ??..?????????";
	StringGrid1->Cells[1][25]="2) ?..???????? (?? ??????), ??..????????? (????), ??..??????";
	StringGrid1->Cells[1][26]="3) ?..?????? (? ?????), ??..?????????, ???????..???????";
	StringGrid1->Cells[1][27]="4) ?????..???, ???..????, ??..?????";
	StringGrid1->Cells[1][28]="5) ?..????? (????), ?..??????, ?..?????????";

	StringGrid1->Cells[0][29]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][29]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][29]="--------------------";

	StringGrid1->Cells[0][30]="6. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][31]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][30]="1) ?..?????????, ???..?????????, ?..???????";
	StringGrid1->Cells[1][31]="2) ??..???????, ??..???????, ??? ??..????";
	StringGrid1->Cells[1][32]="3) ?..????????, ??..????????, ??..????????";
	StringGrid1->Cells[1][33]="4) ??..???????, ?..??????, ?..?????";
	StringGrid1->Cells[1][34]="5) ??..??????, ??..???????, ??..???????";

	StringGrid1->Cells[0][35]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][35]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][35]="--------------------";

	StringGrid1->Cells[0][36]="7. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][37]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][36]="1) ??..???????, ????..???, ??..?????????";
	StringGrid1->Cells[1][37]="2) ?..????, ???..???, ?..???????";
	StringGrid1->Cells[1][38]="3) ??..????????, ???..???????, ?..?????";
	StringGrid1->Cells[1][39]="4) ????..???????, ??..???????, ??..??????";
	StringGrid1->Cells[1][40]="5) ??..??????, ?????..???????????, ?..??????";

	StringGrid1->Cells[0][41]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][41]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][41]="--------------------";

	StringGrid1->Cells[0][42]="8. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][43]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][42]="1) ??..???????, ??..????????, ??..?????????? (??????)";
	StringGrid1->Cells[1][43]="2) ???..?????, ?..?????, ???..???????";
	StringGrid1->Cells[1][44]="3) ??..??????, ??..?????????, ?..???????";
	StringGrid1->Cells[1][45]="4) ??..????????, ??..???????, ??..??????????";
	StringGrid1->Cells[1][46]="5) ???..??????, ?..??????, ?..?????";

	StringGrid1->Cells[0][47]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][47]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][47]="--------------------";

	StringGrid1->Cells[0][48]="9. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][49]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][48]="1) ?..???, ???..?????????, ??..???????";
	StringGrid1->Cells[1][49]="2) ??..???????, ?..????????, ??..???????";
	StringGrid1->Cells[1][50]="3) ??..?????????, ??..?????, ??..???????????";
	StringGrid1->Cells[1][51]="4) ?..???????, ???..?????, ??..?????";
	StringGrid1->Cells[1][52]="5) ???..??????, ?..??????????, ?..???????";

	StringGrid1->Cells[0][53]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][53]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][53]="--------------------";

	StringGrid1->Cells[0][54]="10. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][55]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][54]="1) ??..???????? (?? ??????????), ??..?????, ????..??????? (????????)";
	StringGrid1->Cells[1][55]="2) ?..???? (?? ??????????), ??..?????? (????), ??..??????";
	StringGrid1->Cells[1][56]="3) ???..??, ?..????, ?..???";
	StringGrid1->Cells[1][57]="4) ??..???????, ??..????????, ?..???????";
	StringGrid1->Cells[1][58]="5) ???..??, ????..????????????, ?????..???????????????";

	StringGrid1->Cells[0][59]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][59]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][59]="--------------------";

	StringGrid1->Cells[0][60]="11. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][61]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][60]="1) ??..?????, ??..?????, ??..?????";
	StringGrid1->Cells[1][61]="2) ????..???, ??..???????????, ??..???????";
	StringGrid1->Cells[1][62]="3) ?????..??????, ??..???????????, ??..??????";
	StringGrid1->Cells[1][63]="4) ?..???????, ???..?????, ??..?????";
	StringGrid1->Cells[1][64]="5) ??..???????, ??..??????, ??..????????";

	StringGrid1->Cells[0][65]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][65]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][65]="--------------------";

	StringGrid1->Cells[0][66]="12. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][67]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][66]="1) ?????..??????, ????..?????????, ??..????";
	StringGrid1->Cells[1][67]="2) ??..???????????, ??..?????????, ??..???????????????";
	StringGrid1->Cells[1][68]="3) (?????????) ??..?????, ??..????????, ????..???????";
	StringGrid1->Cells[1][69]="4) ?..??????, ??????..???????, ????..???????";
	StringGrid1->Cells[1][70]="5) ??..???????, ?..?????????, ?..????????????";

	StringGrid1->Cells[0][71]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][71]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][71]="--------------------";

	StringGrid1->Cells[0][72]="13. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][73]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][72]="1) ??..???????, ??..????????, ??..??????? (?????)";
	StringGrid1->Cells[1][73]="2) ?..?????, ??..????????, ?..??????";
	StringGrid1->Cells[1][74]="3) ????..?????????????, ???..??????, ??..??????";
	StringGrid1->Cells[1][75]="4) ????..??????, ?..?????????, ?..??????";
	StringGrid1->Cells[1][76]="5) ??..?????????, ??..???????????, ??..?????";

	StringGrid1->Cells[0][77]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][77]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][77]="--------------------";

	StringGrid1->Cells[0][78]="14. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][79]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][78]="1) ??..?????????, ??..??????? (????????), ??..?????";
	StringGrid1->Cells[1][79]="2) ??..?????????, ???..??????, ??..??????";
	StringGrid1->Cells[1][80]="3) ?..?????????????, ???..??????; ?..????";
	StringGrid1->Cells[1][81]="4) ?..??????????, ???..?, ?..???";
	StringGrid1->Cells[1][82]="5) ???..?????, ?..???????, ?..??????";

	StringGrid1->Cells[0][83]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][83]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][83]="--------------------";

	StringGrid1->Cells[0][84]="15. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][85]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][84]="1) ???..???????????, ?..???????, ??..???????";
	StringGrid1->Cells[1][85]="2) ???..????????, ?..?????, ?..???????";
	StringGrid1->Cells[1][86]="3) ???..???????, ?..???????, ?..????";
	StringGrid1->Cells[1][87]="4) ?????..??????, ????..?????????, ??..???????";
	StringGrid1->Cells[1][88]="5) ????..?????????, ????..????????????, ????..???????";

	StringGrid1->Cells[0][89]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][89]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][89]="--------------------";

	StringGrid1->Cells[0][90]="16. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][91]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][90]="1) ??..????????, ??..?????????, ?..???????";
	StringGrid1->Cells[1][91]="2) ?..?????????????, ???..?????, ?..????????";
	StringGrid1->Cells[1][92]="3) ?????..????????, ???..???????????, ????..?????";
	StringGrid1->Cells[1][93]="4) ??..????????? (?????), ??..??????, ??..???? (????????)";
	StringGrid1->Cells[1][94]="5) ??..????????, ??..????, ???..???????";

	StringGrid1->Cells[0][95]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][95]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][95]="--------------------";

	StringGrid1->Cells[0][96]="17. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][97]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][99]="1) ??..?????????, ??..?????????, ??..????????";
	StringGrid1->Cells[1][97]="2) ??..??????, ?..???, ?..?????????????";
	StringGrid1->Cells[1][98]="3) ???..??????, ??..???????, ?????..?????????";
	StringGrid1->Cells[1][99]="4) ??..???????, ??..??????, ??..???????? (????)";
	StringGrid1->Cells[1][100]="5) ????..???????, ???..?, ????..?????";

	StringGrid1->Cells[0][101]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][101]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][101]="--------------------";

	StringGrid1->Cells[0][102]="18. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][103]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][102]="1) ??..????????, ??..????????, ??..??????";
	StringGrid1->Cells[1][103]="2) ??..???????, ?..????????, ?..?????";
	StringGrid1->Cells[1][104]="3) ??..???????, ?..???????, ?..????????";
	StringGrid1->Cells[1][105]="4) ??..?????, ?..????, ???..???";
	StringGrid1->Cells[1][106]="5) ??..?????, ???..??????,?..???????";

	StringGrid1->Cells[0][107]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][107]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][107]="--------------------";

	StringGrid1->Cells[0][108]="19. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][109]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][108]="1) ??..???????, ?..???????, ?..????????";
	StringGrid1->Cells[1][109]="2) ??..???????, ?..?????????, ??..?????";
	StringGrid1->Cells[1][110]="3) ???..??????, ??..?????, ?????..?????????";
	StringGrid1->Cells[1][111]="4) ??..?????, ??..????????????, ??..??????";
	StringGrid1->Cells[1][112]="5) ???..????????, ??..??????, ?..??";

	StringGrid1->Cells[0][113]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][113]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][113]="--------------------";

	StringGrid1->Cells[0][114]="20. ??????? ???????? ???????, ? ??????? ?? ???? ?????? ??????";
	StringGrid1->Cells[0][115]="???? ????????? ???? ? ?? ?? ?????. ???????? ?????? ???????.";
	StringGrid1->Cells[1][114]="1) ??..??????????, ??..??????????, ??..?????????";
	StringGrid1->Cells[1][115]="2) ?????..????????????, ?..????, ????..???????";
	StringGrid1->Cells[1][116]="3) ?..???????, ??..???????, ???..?????";
	StringGrid1->Cells[1][117]="4) ????..???, ?..????-??????, ??..???????";
	StringGrid1->Cells[1][118]="5) ??..?????, ???..???????????, ?????..?????????";

	StringGrid1->Cells[0][119]="-----------------------------------------------------------------------------";
	StringGrid1->Cells[1][119]="-----------------------------------------------------------------------------------------------------";
	StringGrid1->Cells[2][119]="--------------------";

	int i;
	for (i = 5; i < 120; i+=6) {
		  StringGrid1->Cells[0][i]="-----------------------------------------------------------------------------";
		  StringGrid1->Cells[1][i]="---------------------------------------------------------------------------------";
		  StringGrid1->Cells[2][i]="--------------------";
		  StringGrid1->Cells[2][i-1]="--------------------";
		  StringGrid1->Cells[2][i-2]="--------------------";
		  StringGrid1->Cells[2][i-3]="--------------------";
		  StringGrid1->Cells[2][i-4]="--------------------";
	}
}
//---------------------------------------------------------------------------
void __fastcall TPristavkiForm::???????Click(TObject *Sender)
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
void __fastcall TPristavkiForm::CheckButtonClick(TObject *Sender)
{
	Timer1->Enabled=false;
    StringColumn3->ReadOnly=true;

	int s=0;

	if (StringGrid1->Cells[2][0]=="13") {
		s++;
		StringGrid1->Cells[2][1]="?????";
	}
	else StringGrid1->Cells[2][1]="???????";

	if (StringGrid1->Cells[2][6]=="34") {
		s++;
		StringGrid1->Cells[2][7]="?????";
	}
	else StringGrid1->Cells[2][7]="???????";

	if (StringGrid1->Cells[2][12]=="15") {
		s++;
		StringGrid1->Cells[2][13]="?????";
	}
	else StringGrid1->Cells[2][13]="???????";

	if (StringGrid1->Cells[2][18]=="23") {
		s++;
		StringGrid1->Cells[2][19]="?????";
	}
	else StringGrid1->Cells[2][19]="???????";

	if (StringGrid1->Cells[2][24]=="123") {
		s++;
		StringGrid1->Cells[2][25]="?????";
	}
	else StringGrid1->Cells[2][25]="???????";

	if (StringGrid1->Cells[2][30]=="25") {
		s++;
		StringGrid1->Cells[2][31]="?????";
	}
	else StringGrid1->Cells[2][31]="???????";

	if (StringGrid1->Cells[2][36]=="24") {
		s++;
		StringGrid1->Cells[2][37]="?????";
	}
	else StringGrid1->Cells[2][37]="???????";

	if (StringGrid1->Cells[2][42]=="15") {
		s++;
		StringGrid1->Cells[2][43]="?????";
	}
	else StringGrid1->Cells[2][43]="???????";

	if (StringGrid1->Cells[2][48]=="13") {
		s++;
		StringGrid1->Cells[2][49]="?????";
	}
	else StringGrid1->Cells[2][49]="???????";

	if (StringGrid1->Cells[2][54]=="14") {
		s++;
		StringGrid1->Cells[2][55]="?????";
	}
	else StringGrid1->Cells[2][55]="???????";

	if (StringGrid1->Cells[2][60]=="35") {
		s++;
		StringGrid1->Cells[2][61]="?????";
	}
	else StringGrid1->Cells[2][61]="???????";

	if (StringGrid1->Cells[2][66]=="124") {
		s++;
		StringGrid1->Cells[2][67]="?????";
	}
	else StringGrid1->Cells[2][67]="???????";

	if (StringGrid1->Cells[2][72]=="45") {
		s++;
		StringGrid1->Cells[2][73]="?????";
	}
	else StringGrid1->Cells[2][73]="???????";

	if (StringGrid1->Cells[2][78]=="23") {
		s++;
		StringGrid1->Cells[2][79]="?????";
	}
	else StringGrid1->Cells[2][79]="???????";

	if (StringGrid1->Cells[2][84]=="23") {
		s++;
		StringGrid1->Cells[2][85]="?????";
	}
	else StringGrid1->Cells[2][85]="???????";

	if (StringGrid1->Cells[2][90]=="125") {
		s++;
		StringGrid1->Cells[2][91]="?????";
	}
	else StringGrid1->Cells[2][91]="???????";

	if (StringGrid1->Cells[2][96]=="123") {
		s++;
		StringGrid1->Cells[2][97]="?????";
	}
	else StringGrid1->Cells[2][97]="???????";

	if (StringGrid1->Cells[2][102]=="14") {
		s++;
		StringGrid1->Cells[2][103]="?????";
	}
	else StringGrid1->Cells[2][103]="???????";

	if (StringGrid1->Cells[2][108]=="23") {
		s++;
		StringGrid1->Cells[2][109]="?????";
	}
	else StringGrid1->Cells[2][109]="???????";

	if (StringGrid1->Cells[2][114]=="124") {
		s++;
		StringGrid1->Cells[2][115]="?????";
	}
	else StringGrid1->Cells[2][115]="???????";

	CheckLabel->Text=IntToStr(s);
	Button1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TPristavkiForm::Button1Click(TObject *Sender)
{
	StringGrid1->Cells[2][4]="13";
	StringGrid1->Cells[2][10]="23";
	StringGrid1->Cells[2][16]="15";
	StringGrid1->Cells[2][22]="23";
	StringGrid1->Cells[2][28]="123";
	StringGrid1->Cells[2][34]="25";
	StringGrid1->Cells[2][40]="24";
	StringGrid1->Cells[2][46]="15";
	StringGrid1->Cells[2][52]="13";
	StringGrid1->Cells[2][58]="14";
	StringGrid1->Cells[2][64]="35";
	StringGrid1->Cells[2][70]="124";
	StringGrid1->Cells[2][76]="45";
	StringGrid1->Cells[2][82]="23";
	StringGrid1->Cells[2][88]="23";
	StringGrid1->Cells[2][94]="125";
	StringGrid1->Cells[2][100]="123";
	StringGrid1->Cells[2][106]="14";
	StringGrid1->Cells[2][112]="23";
	StringGrid1->Cells[2][118]="124";
}
//---------------------------------------------------------------------------
void __fastcall TPristavkiForm::Timer1Timer(TObject *Sender)
{
	Label3->Text=IntToStr(StrToInt(Label3->Text)+1);

	if (StrToInt(Label3->Text)%60==0) {
		Label4->Text=IntToStr(StrToInt(Label4->Text)+1);
		Label3->Text="0";
	}

	if (StrToInt(Label4->Text==15)) {

		CheckLabel->Text="????? ????? \n??????? ?????????";
		Timer1->Enabled=false;
		StringColumn3->ReadOnly=true;
	}
}
//---------------------------------------------------------------------------



