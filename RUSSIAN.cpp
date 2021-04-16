//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("StartWindowUnit.cpp", StartForm);
USEFORM("SuffiksyWindowUnit.cpp", SuffiksyForm);
USEFORM("TestsWindowUnit.cpp", TestsForm);
USEFORM("UdarenieWindowUnit.cpp", UdarenieForm);
USEFORM("UdarenWindowUnit.cpp", UdarenForm);
USEFORM("KorniWindowUnit.cpp", KorniForm);
USEFORM("PristavkiWindowUnit.cpp", PristavkiForm);
USEFORM("PristavWindowUnit.cpp", PristavForm);
USEFORM("AuthorInfWindowUnit.cpp", AuthorInfForm);
USEFORM("AllTestWindowUnit.cpp", AllTestForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TStartForm), &StartForm);
		Application->CreateForm(__classid(TTestsForm), &TestsForm);
		Application->CreateForm(__classid(TPristavkiForm), &PristavkiForm);
		Application->CreateForm(__classid(TSuffiksyForm), &SuffiksyForm);
		Application->CreateForm(__classid(TUdarenieForm), &UdarenieForm);
		Application->CreateForm(__classid(TKorniForm), &KorniForm);
		Application->CreateForm(__classid(TAuthorInfForm), &AuthorInfForm);
		Application->CreateForm(__classid(TAllTestForm), &AllTestForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
