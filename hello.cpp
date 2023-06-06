#include <iostream>
class Rectangle
{
private:
    int width;
    int length;

public:
    Rectangle(int w, int l)
    {
        width = w;
        length = l;
    }
    int getWidth()
    {
        return width;
    }
    int getLength()
    {
        return length;
    }
    void setWidth(int w)
    {
        width = w;
    }
    void setLength(int l)
    {
        length = l;
    }
    int calculateArea()
    {
        return width * length;
    }
    void printRectangle()
    {
        std::cout << "Width: " << width << std::endl;
        std::cout << "Length: " << length << std::endl;
    }
};
int main()
{
    Rectangle rectangle(5, 10);
    rectangle.printRectangle();
    int area = rectangle.calculateArea();
    std::cout << "Area: " << area << std::endl;
    rectangle.setWidth(8);
    rectangle.setLength(6);
    rectangle.printRectangle();
    return 0;
}