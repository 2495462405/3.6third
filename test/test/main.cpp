//
//  main.cpp
//  test
//
//  Created by 徐亦燊 on 2020/2/28.
//  Copyright © 2020 徐亦燊. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(int argc, const char * argv[]) {
    
    
    cv:: Mat dispMat(500,500,CV_8UC3);
    cv::Point pt;
    pt.x = 250;
    pt.y = 250;
    circle(dispMat,pt,100,CV_RGB(255,0,0),1,8,0);
    cv::Point pt1;
    pt1.x=100;
    pt1.y=10;
    cv:Point pt2;
    pt2.x=100;
    pt2.y=100;
    line(dispMat,pt1,pt2,CV_RGB(0,255,0),1,8,0);
    cv::Rect rect;
    rect.x = 100;
    rect.y = 100;
    rect.width=100;
    rect.height=100;
    rectangle(dispMat,rect,CV_RGB(0,0,255),1,8,0);
        cv::namedWindow("dispMat");
        cv::imshow("dispMat", dispMat);
        
        waitKey(0);
        return 0;

    }
