#ifndef _CONSOLE_H
#define _CONSOLE_H

#ifdef WIN32

#include <windows.h>

#define TRACE(x) {OutputDebugString(x);}

#endif // WIN32

#ifdef linux

#define TRACE(x)

#endif


#endif