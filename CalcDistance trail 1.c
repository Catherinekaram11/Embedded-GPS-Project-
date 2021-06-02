#include <stdio.h>
#include <math.h>
#define PI 3.142857

long double toRadians(const long double degree)
{
  
    long double one_deg = (PI) / 180;
    return (one_deg * degree);
}

long double Calcdistance(long double lat1, long double long1,
    long double lat2, long double long2)
{
   //convert the input latitude and longtitude to radian 
    lat1 = toRadians(lat1);
    long1 = toRadians(long1);
    lat2 = toRadians(lat2);
    long2 = toRadians(long2);

    // Haversine Formula
    long double dlong = long2 - long1;
    long double dlat = lat2 - lat1;

    long double distance = pow(sin(dlat / 2), 2) +
        cos(lat1) * cos(lat2) *
        pow(sin(dlong / 2), 2);

    distance = 2 * asin(sqrt(distance));

    // Radius of Earth in Kilometers, R = 6371
   
    long double R = 6371*1000;

    // Calculate the distance
    distance = distance * R;

    return distance;
}
int main()
{
    long double lat1 = 30.071572;
    long double long1 = 31.241950;
    long double lat2 =  30.071381;
    long double long2 = 31.241760;

    // call the distance function for trial
  
   printf("%lf m", Calcdistance(lat1, long1, lat2, long2));

    return 0;
}
