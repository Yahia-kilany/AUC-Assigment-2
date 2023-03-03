#include "assigment2.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main ()
{
    srand (time (0));
    point* A;
    point* B;
    point* P;
    int n(200) , m(20);
    A=new point[n];
    B=new point[n];
    P=new point[m];
    for (int i = 0;i < n;i++)
    {
        (A + i)->setX (70.0 + static_cast <float> (rand ()) / (static_cast <float> (RAND_MAX / (90.0 - 70.0))));
        (A + i)->setY (70.0 + static_cast <float> (rand ()) / (static_cast <float> (RAND_MAX / (90.0 - 70.0))));
        (B + i)->setX (20.0 + static_cast <float> (rand ()) / (static_cast <float> (RAND_MAX / (40.0 - 20.0))));
        (B + i)->setY (20.0 + static_cast <float> (rand ()) / (static_cast <float> (RAND_MAX / (40.0 - 20.0))));
    }
    for (int i = 0; i < m; i++)
    {
        (P + i)->setX (5.0 + static_cast <float> (rand ()) / (static_cast <float> (RAND_MAX / (100.0 - 5.0))));
        (P + i)->setY (5.0 + static_cast <float> (rand ()) / (static_cast <float> (RAND_MAX / (100.0 - 5.0))));    
    }
    Determine_Cluster(A,B,P,n,m);
    
    return 0;
}
