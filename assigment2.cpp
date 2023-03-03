#include "assigment2.h"
#include <iostream>
#include <cmath>
using namespace std;
void point::setX (float num)
{
    this->x = num;//sets the variable x
}
void point::setY (float num)
{
    this->y = num;// sets the variable y
}

void point::Display ()
{
    cout << "(" << this->x << "," << this->y << ")";
}

float point::Distance (point p)
{
    return sqrt ((pow ((this->x - p.getX ()) , 2)) + (pow ((this->y - p.getY ()) , 2)));//returns the distance between two points
}
point Center (point* C , int n)
//returns the point P which is the center of a pointer array by finding the average of x and y 
{
    float avgX = 0;
    float avgY = 0;
    for (int i = 0; i < n; i++)
    {
        avgX += (C + i)->getX ();
        avgY += (C + i)->getY ();
    }
    avgX /= n;
    avgY /= n;
    point P (avgX , avgY);

    return P;
}
void Determine_Cluster (point* A , point* B , point* p , int n , int m)
//returns which cluster point p is supposed to belong to
{
    point A_C = Center (A , n);
    point B_C = Center (B , n);
    cout << "The center of the A cluster is";
    A_C.Display ();
    cout << endl;
    cout << "The center of the B cluster is ";
    B_C.Display ();
    cout << endl;
    for (size_t i = 0; i < m; i++)
    {
        if (((p + i)->Distance (A_C)) < ((p + i)->Distance (B_C)))
        {
            cout << "The point ";
            (p + i)->Display ();
            cout << " with index " << i << " belongs to the A cluster" << endl;
        }
        else
        {
            cout << "The point ";
            (p + i)->Display ();
            cout << " with index " << i << " belongs to the B cluster" << endl;
        }
    }
}