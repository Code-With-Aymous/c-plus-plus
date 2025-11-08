#include <iostream>
using namespace std;

// Class to represent a point in 3D space
class Coordinates {
private:
    int x, y, z; // x, y, z coordinates

public:
    // Constructor: initialize coordinates (default 0,0,0)
    Coordinates(int x1 = 0, int y1 = 0, int z1 = 0) {
        x = x1;
        y = y1;
        z = z1;
    }

    // Function to print the coordinates
    void Output() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Overload + operator to add two Coordinates
    Coordinates operator + (const Coordinates &c) {
        Coordinates temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        temp.z = z + c.z;
        return temp;
    }
};

int main() {
    // Create two 3D points
    Coordinates example1(1, 2, 3), example2(4, 5, 6);

    // Add the points using overloaded + operator
    Coordinates answer = example1 + example2;

    // Show result
    cout << "(1, 2, 3) + (4, 5, 6) = ";
    answer.Output();

    return 0;
}
