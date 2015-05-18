#include <stdlib.h>
#include <cv.hpp>
#include <cxcore.hpp>
#include <highgui.h>

int main(int argc, char** argv)
{
    cv::Mat frame;
    int c;

    CvCapture *capture = cvCaptureFromCAM(0);

    for(;;)
    {
        frame = cvQueryFrame(capture);
        cv::imshow("OpenCV",frame);
        c = cv::waitKey(10);
        if(c==27)
            break;
    }
    return 0;
}
