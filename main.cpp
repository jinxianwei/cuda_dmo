#include <stdio.h>
#include <iostream>
#include "cuda/foo.cuh"
#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
    Mat src = imread("/home/bennie/code/mmagic/dataset/range_sigma_data/sigma0_1/test/label/balls_hfw-25_time-20240219172928_ave-64_x-0-y-0.tif");
    std::cout << "Hello C++" << std::endl;
    useCUDA();
    return 0;
}
