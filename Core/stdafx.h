// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#ifdef _WIN32
#define NOMINMAX 
#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
#include <Windows.h>
#endif


#include <thread>
#include <memory>
#include <atomic>
#include <mutex>
#include <chrono>
#include <deque>
#include <queue>
#include <functional>
#include <condition_variable>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <string>



// TODO: reference additional headers your program requires here
