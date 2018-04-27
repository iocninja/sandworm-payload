#include <Windows.h>

#include "xLibMaliciousApi.h"
#include "xOsApi.h"



#define X_EXTERN_DLL_EXPORT extern "C" __declspec(dllexport)



BOOL WINAPI DllMain(_In_ HINSTANCE hinstDLL, _In_ DWORD fdwReason, _In_ LPVOID lpvReserved)
{
	return true;
}

X_EXTERN_DLL_EXPORT void Execute()
{
	MessageBox(NULL, L"sandworm-payload", L"sandworm-payload", MB_OK);
}