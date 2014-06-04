#include "stdafx.h"

int main(int argc, char* argv[])
{
	cv::Mat image;
	image.create(cv::Size(640, 480), CV_8UC3);

	for (int y = 0; y < image.rows; ++y) {
		uchar *p = image.ptr<uchar>(y);
		for (int x = 0; x < image.cols; ++x) {
			*(p++) = rand() % 256;
			*(p++) = rand() % 256;
			*(p++) = rand() % 256;
		}
	}

	cv::imshow("image", image);

	int c = cv::waitKey(0);

	cv::destroyAllWindows();

	return 0;
}

