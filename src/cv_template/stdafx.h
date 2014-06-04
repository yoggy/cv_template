#pragma once

#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <stdio.h>
#include <stdlib.h>

// opencv
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#if _DEBUG
	#pragma comment(lib, "opencv_core249d.lib")
	#pragma comment(lib, "opencv_imgproc249d.lib")
	#pragma comment(lib, "opencv_highgui249d.lib")
#else
	#pragma comment(lib, "opencv_core249.lib")
	#pragma comment(lib, "opencv_imgproc249.lib")
	#pragma comment(lib, "opencv_highgui249.lib")
#endif
