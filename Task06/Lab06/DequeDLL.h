#include "windows.h"
#pragma once
namespace nmspace
{
	class DequeDLL
	{
		public:
			static __declspec(dllexport) void WriteToFile(LPCSTR LPCStrDeque); // ���������� � ���� ���
			static __declspec(dllexport) char* ReadFromFile(); // ������ �� ����� ���
	};
}