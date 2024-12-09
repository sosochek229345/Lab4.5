#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isInsideRegion(double x, double y, double R1) {
  
    if ((x * x + y * y <= R1 * R1) && (y >= 0)) {
        return true; 
    }
    return false;
}

int main() {
    double R1; 
    cout << " (R1) = "; cin >> R1;

    double A = -R1;
    double B = R1;

    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < 10; ++i) {
        double x = A + static_cast<double>(rand()) / RAND_MAX * (B - A);
        double y = A + static_cast<double>(rand()) / RAND_MAX * (B - A);

        bool hit = isInsideRegion(x, y, R1);

        cout << "dot (" << x << ", " << y << "): ";
        if (hit) {
            cout << "hits the target." << endl;
        }
        else {
            cout << "does not hit the target." << endl;
        }
    }

    return 0;
}