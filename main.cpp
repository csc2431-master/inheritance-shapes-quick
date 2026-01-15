#include "shape.h"
#include "rectangle.h"

#include <iostream>
using std::cout;
using std::endl;

void Details(Shape& s);

int main(){
    Shape s;
    Rectangle r(2, 3), q(1,9);

    cout << s.Area() << "\t" << s.Perimeter() << "\t" << s.ToString() << endl << endl;
    cout << r.Area() << "\t" << r.Perimeter() << "\t" << r.ToString() << endl << endl;
    cout << q.Area() << "\t" << q.Perimeter() << "\t" << q.ToString() << endl << endl;
    cout << "----------------" << endl;
    Details(s); // -1 -1 Shape
    Details(r); // 6 10 Rectangle
    Details(q); // 9 20 Rectangle

    return 0;
}
void Details(Shape& s){
    cout << "\t";
    cout << s.Area() << "\t" << s.Perimeter() << "\t" << s.ToString() << endl << endl;

}
