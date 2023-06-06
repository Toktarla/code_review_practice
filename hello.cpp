#include <iostream>
class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    int getWidth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int calculateArea()
    {
        return width * height;
    }
    void printRectangle()
    {
        std::cout << "Width: " << width << std::endl;
        std::cout << "Height: " << height << std::endl;
    }
};
int main()
{
    Rectangle rectangle(5, 10);
    rectangle.printRectangle();
    int area = rectangle.calculateArea();
    std::cout << "Area: " << area << std::endl;
    rectangle.setWidth(8);
    rectangle.setHeight(6);
    rectangle.printRectangle();
    return 0;
}