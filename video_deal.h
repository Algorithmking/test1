/*****************************************************************************
** 文件名:video_deal.h
** Copyright (c) 2017, BMI
** 创建人:陈志伟
** 日 期:2018.1.11
** 描 述:对视频的读写以及绘制直方图和水印
** 版本：1.0.0
 *****************************************************************************/
#ifndef BASE_H
#define BASE_H

#endif // BASE_H
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;

class CDisplay
{
private:

    bool m_bStop;
public:
    CDisplay();
    Mat drawHist(const Mat & imgSrc);
    void addcolor( Mat & logo,const Mat & imagDst);

};

