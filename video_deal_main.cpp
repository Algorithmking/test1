#include "video_deal.h"
using namespace cv;
using namespace std;


int main()
{

   VideoCapture capture("D:\\face.mp4");
   if(!capture.isOpened())
   {
       cout<<"fail to open";
       return 0;
   }

   bool stop(false);
   Mat imgSrc;
   CDisplay test1;


  Size Out_Size=Size(static_cast<int>(capture.get(CV_CAP_PROP_FRAME_WIDTH)),static_cast<int>(capture.get(CV_CAP_PROP_FRAME_HEIGHT)));
  VideoWriter Output_Video;
  Output_Video.open("D:\\out.avi" ,CV_FOURCC('M', 'J', 'P', 'G')  , capture.get(CV_CAP_PROP_FPS),Out_Size, true);

  while(!stop)//如果stop 是真时开始遍历图片
   {

     capture.read(imgSrc);

     if(capture.read(imgSrc)==true)
     {
          Mat logo=test1.drawHist(imgSrc);
          test1.addcolor(logo,imgSrc);

          Output_Video.write(imgSrc);
          cv::imshow("Extracted Frame",imgSrc);
          if(waitKey(2)>=0)
          stop=true;
     }
        else
        {
            break;
        }

   }
  capture.release();


}
