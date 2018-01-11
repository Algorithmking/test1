#include"video_deal.h"


/*****************************************************************************
** 函数名:构造函数
** Copyright (c) 2017, BMI
** 创建人:陈志伟
** 日 期:2018.1.11
** 描 述:
** 版本：1.0.0
 *****************************************************************************/
CDisplay::CDisplay():m_bStop(false)
{

}
/*****************************************************************************
** 函数名:绘制直方图
** Copyright (c) 2017, BMI
** 创建人:陈志伟
** 日 期:2018.1.11
** 描 述:将视频读取并打开
** 版本：1.0.0
 *****************************************************************************/
Mat CDisplay::drawHist( const Mat & imgSrc)
{

    int bins=256;//组距
    int hist_size[]={bins};//
    int dims=1;
    float range[]={0,256};//范围
    const float * ranges[]={range};//range组成的数组
    MatND redHist;//
    int channel_r[]={0};
    calcHist(& imgSrc,1,channel_r,Mat(),redHist,dims,hist_size,ranges,true,true);
    double maxValue_red;
    minMaxLoc(redHist,0,&maxValue_red,0,0);
    int scale=1;
    int histHeight=256;
    Mat histImage=Mat::zeros(histHeight,bins*3,CV_8UC3);
    Mat imagDst;
    for(int i=0;i<bins;i++)
    {
        float binValue_red=redHist.at<float>(i);
        int intensity_red=cvRound(binValue_red*binValue_red/maxValue_red/10);
        rectangle(histImage,Point(i*scale*4,(histHeight-1)),Point((i+1)*4*scale-1,(histHeight-intensity_red)),Scalar(0,0,255));
    }
    histImage.copyTo(imagDst);
    imshow("logo",imagDst);
    return imagDst;

}
/*****************************************************************************
** 函数名:添加色块
** Copyright (c) 2017, BMI
** 创建人:陈志伟
** 日 期:2018.1.11
** 描 述:将视频读取并打开
** 版本：1.0.0
 *****************************************************************************/
void CDisplay::addcolor(Mat & logo, const Mat & imagDst)
{
    cv::resize(logo, logo, Size(imagDst.size().width,imagDst.size().height/3));
    Mat roi=imagDst(Rect(0,imagDst.rows - imagDst.size().height/3,imagDst.cols,imagDst.size().height/3));
    addWeighted(roi,0.3,logo,0.7,0,roi);
}

