#include "stdint.h"
#include "math.h"
#include "stdio.h"
#include "C:/Keil/EE319Kware/inc/tm4c123gh6pm.h"
#define pi 3.141592654
#define R 6371000


double distance(double r)
{
    static double z = 0;
    z+= r;
    return z;
}
double rad(double w)
{
    double v = 0;
    v = w * pi / 180;
    return v;
}

double gps_distance(double lat1, double lon1, double lat2, double lon2) {
    double x, y,d;
    x = (lon2 - lon1) * cos(rad(lat1 + lat2) / 2);
    y = lat1 + lat2;
    d = sqrt(x * x + y * y) * R;
    return d;}









