#pragma once

/*
MIT License
Copyright (c) 2021 SAE Institute Geneva
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "maths/vector2.h"
#include "maths/vector3.h"

namespace maths
{
	
    struct Mat33f
    {
        struct
        {
            Vec3f v1;
            Vec3f v2;
            Vec3f v3;
        };

        Mat33f() {}

        Mat33f(const Vec3f v1, const Vec3f v2, const Vec3f v3) : v1(v1), v2(v2), v3(v3) {}

        Mat33f operator+(const Mat33f& rhs) const;

        void operator+=(const Mat33f& rhs);

        Mat33f operator-(const Mat33f& rhs) const;

        void operator-=(const Mat33f& rhs);

        Mat33f operator*(const Mat33f& rhs) const;

        void operator*=(const Mat33f& rhs);

        Vec3f operator*(const Vec3f& rhs) const;

        void operator*=(const Vec3f& rhs);

        float Determinant();

        Mat33f Inverse();

        Mat33f Transpose();

        Mat33f Adjoint();

        bool IsOrthogonal();

        static Mat33f Identity33();

        static Mat33f RotationMatrix33(radian_t angle);

        static Mat33f ScalingMatrix33(Vec2f axisValues);

        static Mat33f TranslationMatrix33(Vec2f axisValues);
    };
}