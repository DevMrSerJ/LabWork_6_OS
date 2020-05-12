#include "windows.h"
#pragma once
namespace nmspace
{
	class DequeDLL
	{
		public:
			static __declspec(dllexport) void WriteToFile(LPCSTR LPCStrDeque); // Записывает в файл дэк
			static __declspec(dllexport) char* ReadFromFile(); // Читает из файла дэк
	};
}