#include <opencv2/opencv.hpp>
#include <iostream>
#include "preprocess/preprocess.h"


int main() {
    cv::Mat image = cv::imread("../image/save.jpg");

    if(image.empty()) {
        std::cout << "Not found image" << std::endl;
        return -1;
    }

    cv::Mat gray = toGray(image);
    cv::Mat binary = toBinary(gray);

    cv::imshow("gray image", gray);
    cv::imshow("binary image", binary);
    cv::waitKey(0);

    return 0;
}