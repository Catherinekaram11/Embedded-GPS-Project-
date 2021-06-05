#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.142857



 double toRadians(const double degree)
{
    // cmath library in C++
    // defines the constant
    // M_PI as the value of
    // pi accurate to 1e-30
     double one_deg = (PI) / 180;
    one_deg *= degree;
    return (one_deg);
}

 double distance( double lat1, double long1,
    double lat2,  double long2)
{
    // Convert the latitudes
    // and itudes
    // from degree to radians.
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);

    // Haversine Formula 
    //!the difference
     double dlong = long2 - long1;
     double dlat = lat2 - lat1;


    //abs
    if (dlong < 0)
    {
        dlong *= -1;
    }
    if (dlat < 0)
    {
        dlat *= -1;
    }

    double ans = pow(sin(dlat / 2), 2) +
        cos(lat1) * cos(lat2) *
        pow(sin(dlong / 2), 2);

    // ans = 2 * asin(sqrt(ans));
    ans = 2 * atan2(sqrt(ans), sqrt(1-ans));

    // Radius of Earth in
    // Kilometers, R = 6371
    // Use R = 3956 for miles
     double R = 6371e3;

    // Calculate the result
    ans = ans * R;

    return ans;
}
int main()
{
    double lat1 = 30.109543483397502; double long1 = 31.327786195375143;
    double lat2 = 30.109681784966057; double long2 = 31.32796697572619;

    double result = distance(lat1, long1, lat2, long2);
    printf("%lf", result);
    return 0;
}


