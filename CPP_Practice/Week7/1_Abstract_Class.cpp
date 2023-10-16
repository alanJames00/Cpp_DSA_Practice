#include <iostream>
using namespace std;

// Abstract class refers to a class containing atleast one
// pure


class Shape{


    public:
        int shape_width;
        int shape_height;

    void width(int w){
        shape_width = w;
    }

    void height(int h){
        shape_height = h;
    }

    int perimeterOfSquare(int side){
        return 4*side;
    }

    int perimeterOfRectangle(int l, int b){
        return 2 * (1+b);
    }



    // All the functions of square and rectangle are clubbed 
    // in a single class
};


int main(){



    return 0;
}