/* This code is an example of implementation of class, function and loops */
#include<iostream>
class Snake {
    private:
     int _size;
    public:
    Snake(int size);
    void drawS();
};
Snake::Snake (int size) {
    std::cout<<"Enter the size: ";
    std::cin>>size;
    if (size<4 || size>45) {
        size = 35;
    }
    _size = size;
}
void Snake :: drawS() {
    // loop to print first row
    for (int j = 1; j<=2; j++) {
        std::cout<<' ';
    }
    for (int k = 1; k<=(_size-2); k++) {
        std::cout<<'S';
    }
    std::cout<<std::endl;
// loop to print middle rows
    for (int i = 1; i <= (_size-2); i++) {
        for (int j = 1; j <=i; j++){
            std::cout<<' ';
        }
        std::cout<<'S';
        std::cout<<std::endl;
    }

// loop to print last row
for (int j = 1; j<=1; j++) {
    std::cout<<' ';
}
for (int k = 1; k <= (_size-3); k++) {
    std::cout<<'S';
}

}
int main () {
    int userSize;
    Snake ob(userSize);
    ob.drawS();
    return 0;
}