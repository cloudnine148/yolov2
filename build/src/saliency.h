#pragma once
#ifndef _saliency_H
#define _saliency_H
#include "opencv/cv.h"
void copyImage(IplImage * srcArg, IplImage *dstArg);
void calcIntensityChannel(IplImage *srcArg, IplImage *dstArg);
void getIntensityScaled(IplImage * integralImage, IplImage * gray, IplImage *intensityScaledOn, IplImage *intensityScaledOff, int neighborhood);
float getMean(IplImage * srcArg, CvPoint PixArg, int neighbourhood, int centerVal);
void mixScales(IplImage **intensityScaledOn, IplImage *intensityOn, IplImage **intensityScaledOff, IplImage *intensityOff, const int numScales);
void mixOnOff(IplImage *intensityOn, IplImage *intensityOff, IplImage *intensityArg);
#endif