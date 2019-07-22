/*
*********************************************************
* @file       main.cpp
* @brief      The main entry of libextcpp.dll
* @author     dragon-archer <dragon-archer@outlook.com>
* @since      v0.1
* @license    The MIT License
*             Copyright (C) 2019 dragon-archer
*********************************************************
*/
#include "pch.h"

// Only compile this file under the Windows OS
#if defined(_WINDOWS) || defined(_WIN32) || defined(_WIN64) || defined(WIN32) || defined(WIN64) || defined(WINRT)

// Windows Header
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch(ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
	}
	return TRUE;
}

#endif // Windows OS
