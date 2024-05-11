#include<iostream>   

using namespace std; 

class MyClass 
{ 

public: 
    MyClass()  { x=0;y=0;  }
    MyClass(int a = 0, b = 0); 
    Print(); 

private: 
    int x, y; 
}; 

MyClass::MyClass(int a = 0, int b =0)
{ 
    x = a; 
    y = b; 
} 
void MyClass::Print() 
{ 
    cout << "x = " << x << endl; 
    cout << "y = " << y << endl; 
} 
int main() 
{
 MyClass obj1,obj2(5,8);
 obj1.x =1;
 obj1.y =3;
 obj1.Print();
 obj2.Print();
 return 0;
}
