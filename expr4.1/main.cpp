#include "stack.hpp"

int main() {
    IStack<int> intStack;
    IStack<char> charStack;

    // 整数栈操作
    intStack.Push(1);
    intStack.Push(2);
    intStack.Push(3);
    cout << "整数栈顶元素: " << intStack.GetTop() << endl;
    intStack.Pop();
    cout << "整数栈顶元素: " << intStack.GetTop() << endl;
    cout << "整数栈大小: " << intStack.Size() << endl;

    // 字符栈操作
    charStack.Push('a');
    charStack.Push('b');
    charStack.Push('c');
    cout << "字符栈顶元素: " << charStack.GetTop() << endl;
    charStack.Pop();
    cout << "字符栈顶元素: " << charStack.GetTop() << endl;
    cout << "字符栈大小: " << charStack.Size() << endl;

    return 0;
}

