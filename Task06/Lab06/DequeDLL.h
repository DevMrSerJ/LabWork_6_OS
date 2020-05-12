#include "windows.h"
#pragma once

#ifdef MDEQUEDLL_EXPORTS
#define DEQUEDLL_API __declspec(dllexport)
#else
#define DEQUEDLL_API __declspec(dllimport)
#endif

namespace nmspace
{
	extern "C" DEQUEDLL_API char* ReadFromFile(); // Читает из файла дэк

	class DequeDLL
	{
		public:
			static __declspec(dllexport) void WriteToFile(LPCSTR LPCStrDeque); // Записывает в файл дэк
			
	};
}