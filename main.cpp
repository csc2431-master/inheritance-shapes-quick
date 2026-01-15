#include "shape.h"
#include "rectangle.h"
#include "circle.h"

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

void Details(Shape& s);

int main(){
    
    Rectangle r(2, 3), q(1,9);
    Circle c(2.0);

    cout << r.Area() << "\t" << r.Perimeter() << "\t" << r.ToString() << endl << endl;
    cout << q.Area() << "\t" << q.Perimeter() << "\t" << q.ToString() << endl << endl;
    cout << "----------------" << endl;
    
    Details(r); // 6 10 Rectangle
    Details(q); // 9 20 Rectangle
    Details(c);


    vector<Shape*> data;
    data.push_back(new Rectangle(1, 4));
    data.push_back(new Circle(4));
    data.push_back(new Rectangle(1,1));

    for (size_t i=0; i<data.size(); i++){
        //cout << data[i]->Diagonal() << endl;
        if (dynamic_cast<Rectangle*>(data[i]) != nullptr ){
            Rectangle* w = dynamic_cast<Rectangle*>(data[i]);
            cout << w->GetDiagonal() << endl;
        }
        
    }
        

    for (Shape* s : data)
        delete s;

    return 0;
}
void Details(Shape& s){
    cout << "\t";
    cout << s.Area() << "\t" << s.Perimeter() << "\t" << s.ToString() << endl << endl;

}
