#define PI 3.14159265358979323846
#define R 6371
#include <stdio.h>
#include <math.h>

int main()
{
    double lat1, lat2, lon1, lon2, d, a, c;
    scanf("%lf %lf %lf %lf", &lat1, &lon1, &lat2, &lon2);
    lat1 = lat1 * PI / 180;
    lat2 = lat2 * PI / 180;
    lon1 = lon1 * PI / 180;
    lon2 = lon2 * PI / 180;
    a = pow(sin((lat2 - lat1) / 2), 2) + cos(lat1) * cos(lat2) * pow(sin((lon2 - lon1) / 2), 2);
    c = 2 * atan2(sqrt(a), sqrt(1 - a));
    d = R * c;
    printf("%.2lf", d);
    return 0;
}