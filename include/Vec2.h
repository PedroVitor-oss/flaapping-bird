#ifndef VEC2_H
#define VEC2_H

#include <math.h>
class Vec2 {
public:
    double x, y;

    Vec2(double x_, double y_): x(x_), y(y_) {};

    Vec2 operator+(const Vec2& v) const {
        return Vec2(x + v.x, y + v.y);
    }

    Vec2 operator-(const Vec2& v) const {
        return Vec2(x - v.x, y - v.y);
    }

    Vec2 operator*(double scalar) const {
        return Vec2(x * scalar, y * scalar);
    }

    Vec2 operator/(double scalar) const {
        return Vec2(x / scalar, y / scalar);
    }

    double magnitude() const {
        return sqrt(x * x + y * y);
    }

    Vec2 normalized() const {
        double mag = magnitude();
        if (mag > 0) {
            return *this / mag;
        } else {
            return *this;
        }
    }
};

#endif // VEC2_H
