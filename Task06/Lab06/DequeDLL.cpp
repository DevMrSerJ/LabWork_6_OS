// DequeDLL.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include <list>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

#include "DequeDLL.h"

namespace nmspace
{
	char bufferDequeStr[250];
	DWORD bufferDWORD;

	char * ReadFromFile()
	{
		HANDLE hFile;

		hFile = CreateFile("DequeFile.txt", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		ReadFile(hFile, bufferDequeStr, 250, &bufferDWORD, NULL);

		CloseHandle(hFile);

		return bufferDequeStr;
	}


	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);

	const char* bufferConstChar;
	char bufferCharArr[4];
	LPCWSTR bufferLPCWSTR;

	void DequeDLL::WriteToFile(LPCSTR LPCStrDeque)
	{
		HANDLE hFile;

		hFile = CreateFile("DequeFile.txt", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		WriteFile(hFile, LPCStrDeque, strlen(LPCStrDeque), &bufferDWORD, NULL);

		CloseHandle(hFile);
	}
}
