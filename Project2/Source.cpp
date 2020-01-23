#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "iostream"

using namespace cv;
using namespace std;

int main()
{
	Mat src1;
	src1 = imread("car.jpg", IMREAD_COLOR);
	namedWindow("Оригінал", WINDOW_AUTOSIZE);
	imshow("Оригінал", src1);

	Mat gray, edge, draw;
	cvtColor(src1, gray, COLOR_BGR2GRAY);

	Canny(gray, edge, 50, 150, 3);

	edge.convertTo(draw, CV_8U);
	namedWindow("Результат", WINDOW_AUTOSIZE);
	imshow("Результат", draw);

	waitKey(0);
	return 0;
}