//
//  main.cpp
//  fail
//
//  Created by Nathan Spackman on 4/22/25.
//

#include <iostream>
#include <vector>
using namespace std;
class Shape {
public:
Shape() {}
virtual ~Shape() {}
virtual float Area()=0;
};
class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }
~Circle() {}
float Area() override {
return 3.14f * m_radius * m_radius;
}
void SetRadius(float radius) { m_radius = radius; }
float GetRadius() const { return m_radius; }
private:
float m_radius;
};
class Rectangle : public Shape {
public:
Rectangle(float w, float h) {
m_width = w;
m_height = h;
}
float Area() override {
return m_width * m_height;
}
private:
float m_width;
float m_height;
};
int main() {
    vector<Shape*> shapes;
    Circle* c = new Circle(1.0f);
    c->SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);
    shapes.push_back(c);
    shapes.push_back(r);
    for (int i = 0; i < shapes.size(); i++)
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        // TODO: If shape is a circle, print radius
        if(dynamic_cast<Circle*>(shapes[i])){
            float rad= (dynamic_cast<Circle*>(shapes[i]))->GetRadius();
            std::cout << "Radius"<< rad << std::endl;
        }
    }
    shapes.clear();
    c=nullptr;
    r=nullptr;
    return 0;
}
