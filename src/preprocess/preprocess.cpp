#include "preprocess.h"


cv::Mat toGray(const cv::Mat& src) {
    cv::Mat gray;
    cv::cvtColor(src, gray, cv::COLOR_BGR2GRAY);
    return gray;
}


//OTSU, 采用 Otsu 自适应阈值法实现图像二值化，提高算法对光照变化的鲁棒性。
cv::Mat toBinary(const cv::Mat& gray) {
    cv::Mat binary;
    cv::threshold(gray, binary, 0, 255, 
        cv::THRESH_BINARY | cv::THRESH_OTSU);                               
    return binary;
}

