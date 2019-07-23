#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

void SaveBackground();
void RecieveImage(unsigned char* bytes, int width, int height, bool isGreen);

unsigned char* GetCurrImage();

#endif /* OpenCVPlugin_hpp */


