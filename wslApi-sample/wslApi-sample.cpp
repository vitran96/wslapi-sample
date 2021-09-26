#include "WslApiLoader.h"

//#include <WinSock2.h>
//#include <Windows.h>
//#include <winapifamily.h>
//#include <wslapi.h>

#include <iostream>

int main()
{
	try
	{
		std::wstring distributionName = L"Ubuntu-18.04";
		//BOOL test = WslIsDistributionRegistered(distributionName.c_str());
		WslApiLoader apiLoader(distributionName);
		auto isResigtered = apiLoader.WslIsDistributionRegistered();
		std::wcout << distributionName << " installed? - " << isResigtered << std::endl;
		return 0;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return 1;
	}
}
