#ifndef OpenCVPlugin_hpp
#define OpenCVPlugin_hpp

#include <stdio.h>

void SetBackground(unsigned char* bytes, int width, int height, bool mirror, bool rotate);
void RecieveImage(unsigned char* bytes, int width, int height, bool isGreen);

unsigned char* GetCurrImage();

#endif /* OpenCVPlugin_hpp */






