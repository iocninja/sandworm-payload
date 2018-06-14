#include <Windows.h>

#include "xLibMaliciousApi.h"
#include "xOsApi.h"



#define X_EXTERN_DLL_EXPORT			extern "C" __declspec(dllexport)

#define X_ENCRYPTION_PATH_PATTERN	X_OBFUSCATED_STRING_W(L"F:\\*encrypt.me.txt")



BOOL WINAPI DllMain(_In_ HINSTANCE hinstDLL, _In_ DWORD fdwReason, _In_ LPVOID lpvReserved)
{
	return true;
}

X_EXTERN_DLL_EXPORT void Execute()
{
	WIN32_FIND_DATA wfd;

	X_KERNEL32_CALL(FindFirstFileW)(X_ENCRYPTION_PATH_PATTERN, &wfd);



}