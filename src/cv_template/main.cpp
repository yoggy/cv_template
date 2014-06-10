#include "stdafx.h"
#include "capture_utils.h"

cv::Mat process(const cv::Mat &src)
{
	cv::Mat dst = src;

	// something to do...

	return dst;
}

int main(int argc, char* argv[])
{
	cv::Mat capture_img, canvas_img;
	if (init_video(0) == false) return -1;

	while(true) {
		capture(capture_img);
		process(capture_img);

		// debug draw...
		capture_img.copyTo(canvas_img);
		cv::imshow("result", canvas_img);

		int c = cv::waitKey(1);
		if (c == 27) {
			break;
		}
	}

	finish();

	cv::destroyAllWindows();

	return 0;
}

