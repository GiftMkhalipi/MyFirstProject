
Polygon* pPoly1;
Polygon* pPoly2;
#pragma once
class Polygon {
protected:
int mWidth
int mHeight;
public:
void SetValues(int width, int height);
virtual int Area() = 0;
};
