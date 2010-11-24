
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the HELLOLIB_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// HELLOLIB_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifdef HELLOLIB_EXPORTS
#define HELLOLIB_API __declspec(dllexport)
#else
#define HELLOLIB_API __declspec(dllimport)
#endif

HELLOLIB_API char* Hello_World(void);