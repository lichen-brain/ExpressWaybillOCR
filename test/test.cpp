// 示例代码
#include <opencv2/opencv.hpp>
#include <direct.h>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char const *argv[]){
    char cwd[1024];
    _getcwd(cwd, sizeof(cwd));
    cout << "Current working directory: " << cwd << endl;
    Mat img = imread("E:\\0_WorkSpace\\ExpressWaybillOCR\\add\\test.jpg"); 
    if(!img.empty())
        cout <<"image is empty or the path is invalid!"<< endl;
    imshow("origin", img);
    waitKey(0);
    destroyAllWindows();
    return 0;
}
