#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MyDll __declspec(dllimport)
#endif


extern "C" MyDll int Add(int a, int b);

extern "C" MyDll int Sub(int a, int b);

extern "C" MyDll int Mult(int a, int b);

extern "C" MyDll float Div(float a, float b);

extern "C" MyDll int Pow(int a, int b);
	
extern "C" MyDll int Fact(int a);