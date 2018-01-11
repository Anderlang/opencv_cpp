#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(){
  //读图片
  Mat img=imread("../mm.jpg");
  if(!img.data){
    cout<<"error";
    return -1;
  }
  //窗体,可以不使用下面这句
  // namedWindow("demo"); 
  imshow("demo",img);
  Mat dst;
   cvtColor(img,dst,CV_BGR2GRAY);
    imshow("灰度",dst);
  waitKey();
  return 0;
}
