#include "stdafx.h"
#include "capture_utils.h"

cv::Mat process(const cv::Mat &src)
{
	cv::Mat dst = src;

	// something to do...

	return dst;
}

void debug_draw(cv::Mat &canvas_img)
{
	// draw something...
}

int main(int argc, char* argv[])
{
	bool rv;
	cv::Mat capture_img, canvas_img;

	rv = init_video(0);
	//rv = init_image("source.png");
	//rv = init_movie("source.m4v");
	if (rv == false) return -1;

	while(true) {
		capture(capture_img);
		process(capture_img);

		capture_img.copyTo(canvas_img);
		debug_draw(canvas_img);
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

