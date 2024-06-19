#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <stdexcept>
using namespace std;

const int MaxSize = 100; // 栈中能保存的最多元素个数

template <typename T>
class IStack {
public:
    IStack(); // 栈的构造函数
    void Push(const T& n); // 往栈顶增加元素
    void Pop(); // 从非空栈的栈顶删除一个元素
    T GetTop() const; // 返回非空栈的栈顶元素
    bool Empty() const; // 判断栈是否为空
    int Size() const; // 返回栈中元素的个数
    void ClearStack(); // 将栈清空
    ~IStack() {} // 栈的析构函数

private:
    T elem[MaxSize]; // 保存栈中各元素的数组
    int Top; // 保存栈顶的当前位置
};

template <typename T>
IStack<T>::IStack() : Top(-1) {}

template <typename T>
void IStack<T>::Push(const T& n) {
    if (Top >= MaxSize - 1) {
        throw overflow_error("栈满");
    }
    elem[++Top] = n;
}

template <typename T>
void IStack<T>::Pop() {
    if (Top < 0) {
        throw underflow_error("栈空");
    }
    --Top;
}

template <typename T>
T IStack<T>::GetTop() const {
    if (Top < 0) {
        throw underflow_error("栈空");
    }
    return elem[Top];
}

template <typename T>
bool IStack<T>::Empty() const {
    return Top == -1;
}

template <typename T>
int IStack<T>::Size() const {
    return Top + 1;
}

template <typename T>
void IStack<T>::ClearStack() {
    Top = -1;
}

#endif // STACK_HPP
