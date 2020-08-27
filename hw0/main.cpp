#include <iostream>
#include <cmath>
#include <eigen3/Eigen/Dense>

const float PI = 3.14159265358;

int main()
{
    // Coordinate of point.
    Eigen::Vector3f p(2.0f, 1.0f, 1.0f);
    // Rotate degree.
    float alpha = PI / 4;
    // Ratate matrix.
    Eigen::Matrix3f rotation;
    rotation << cos(alpha), -sin(alpha), 0, sin(alpha), cos(alpha), 0, 0, 0, 1;
    // Translation.
    float offsetX = 1, offsetY = 2;
    Eigen::Matrix3f translation;
    translation << 1, 0, offsetX, 0, 1, offsetY, 0, 0, 1;

    Eigen::Vector3f transformedP =  translation * rotation * p;
    std::cout << transformedP[0] << ", " << transformedP[1] << std::endl;
}
