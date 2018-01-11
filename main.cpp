#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main(){
  Mat img=imread("../mm.jpg");
  if(!img.data){
    cout<<"error";
    return -1;
  }
  namedWindow("demo");
  imshow("demo",img);
  waitKey();
  return 0;
}
