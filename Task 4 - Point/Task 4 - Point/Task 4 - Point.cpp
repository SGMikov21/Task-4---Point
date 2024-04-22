#include <iostream>

using namespace std;

class Point {
private:
    int x, y, z;

public:
    Point(int xCoord = 0, int yCoord = 0, int zCoord = 0) 
    {
        x = xCoord;
        y = yCoord;
        z = zCoord;
    }

    Point(Point& other) 
    {
        x = other.x + 1;
        y = other.y + 2;
        z = other.z + 3;
    }

    int pointToX() 
    {
        return x;
    }

    int pointToY()
    {
        return y;
    }

    int pointToZ()
    {
        return z;
    }

    void setX(int newX) 
    {
        x = newX;
    }

    void setY(int newY) 
    {
        y = newY;
    }

    void setZ(int newZ) 
    {
        z = newZ;
    }
};

int main() 
{
    Point point1(3, 4, 5);
    cout << "Point 1 coordinates: (" << point1.pointToX() << ", " << point1.pointToY() << ", " << point1.pointToZ() << ")" << endl;
    Point point2 = point1;
    cout << "Point 2 coordinates: (" << point2.pointToX() << ", " << point2.pointToY() << ", " << point2.pointToZ() << ")" << endl;
    point1.setX(10);
    point1.setY(20);
    point1.setZ(30);
    cout << "New Point 1 coordinates: (" << point1.pointToX() << ", " << point1.pointToY() << ", " << point1.pointToZ() << ")" << endl;
}