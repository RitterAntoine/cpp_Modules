#include <iostream>
#include <LibSL/Math/Vertex.h>

int main() {

    // Create a 2D double vector using the v2d type
    LibSL::Math::v2d myVertex = LibSL::Math::V2D(9.4, 2.7);

    // Access the components of the vector
    double x = myVertex[0];
    double y = myVertex[1];

    // Print the components of the vector
    std::cout << "x: " << x << ", y: " << y << std::endl;

    return 0;
}
