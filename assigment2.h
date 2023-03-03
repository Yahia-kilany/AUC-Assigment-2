#ifndef ASSIGMENT2_H
#define ASSIGMENT2_H

using namespace std;

class point
{
public:
   point () { x = y = 0; }    // Default Constructor, sets X = Y = 0
   point (float a, float b)
   {this->x=a; this->y=b;} // Constructor. Initializes both X and Y.
   void setX (float);    // Set X value
   void setY (float);    // Set Y value
   float getX () { return x; }    // Get X value
   float getY () { return y; }   // Get Y value
   void Display ();    // Display point as (X , Y)
   float Distance (point);    // distance between current point object and another point p
private:
   // Data members x and y
   float x;
   float y;
};

point Center (point* , int);
void Determine_Cluster (point* A , point* B , point* p , int n , int m);

#endif //ASSIGMENT2_H