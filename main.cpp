#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
    
    bool operator==(const Point& other) const {
        return (x == other.x) && (y == other.y);
    }
};

ostream& operator<<(ostream& os, const Point& point) {
    os<<"("<<point.x<<", "<<point.y<<")";
    return os;
}

int main() {
    Point p1{1.0, 2.0};
    Point p2{1.0, 2.0};
    Point p3{3.0, 4.0};

    if (p1 == p2) {
        cout<<"p1 is equal to p2"<<endl;
    } else {
        cout<<"p1 is not equal to p2"<<endl;
    }

    cout<<"Point p1: "<<p1<<endl;
    cout<<"Point p3: "<<p3<<endl;

    return 0;
}

