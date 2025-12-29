#pragma once
#include <opencv2/opencv.hpp>

/**
 * @brief 彩图转灰度
 * 
 * @param src 
 * @return cv::Mat 
 */
cv::Mat toGray(const cv::Mat& src);

/**
 * @brief 灰度转二值
 * 
 * @param gray 
 * @return cv::Mat 
 */
cv::Mat toBinary(const cv::Mat& gray);