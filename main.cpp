#include <iostream>
#include <string>
using namespace std;

class MyVector{
  public:
     MyVector(int = 0);
     MyVector(double*, int size);
    ~MyVector();
     MyVector(const MyVector&);  
     void push_back(double);
     double pop_back();
     string toString() const;
     int getCapacity() const;
     int getSize() const;
     MyVector& MyVector::operator=(MyVector v);
     MyVector& operator+=(const MyVector& v);
  private:
    int size;
    int capacity;
    double* ptr;  
};

void aaa(){
    
void push_back(double a){
  
}