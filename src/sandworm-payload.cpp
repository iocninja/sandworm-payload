#include <Windows.h>

#include "xLibMaliciousApi.h"
#include "xOsApi.h"



#define X_EXTERN_DLL_EXPORT			extern "C" __declspec(dllexport)

#define X_WALLPAPER_FILE_NAME		X_OBFUSCATED_STRING_W(L"F:\\*encrypt.me.txt")



BOOL WINAPI DllMain(_In_ HINSTANCE hinstDLL, _In_ DWORD fdwReason, _In_ LPVOID lpvReserved)
{
	return true;
}

X_EXTERN_DLL_EXPORT void Execute()
{
	X_USER32_CALL(SystemParametersInfo((SPI_SETDESKWALLPAPER, 0, L"d:/flower1.jpg", SPIF_UPDATEINIFILE);

	X_USER32_CALL(MessageBoxW)()
}