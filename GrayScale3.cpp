#include <cv.h>
#include <highgui.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <fstream>

using namespace cv;

int main( int argc, char** argv )
{
	
	 std::ifstream srce( argv[1], std::ios::binary ) ;
    std::ofstream dest( "GrayScale.stl", std::ios::binary ) ;
    dest << srce.rdbuf() ;

	 return 0;
}