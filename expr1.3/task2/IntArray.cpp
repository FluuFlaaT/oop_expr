#include "IntArray.h"
#include <iostream>

using namespace std;

IntArray::IntArray(int sz)
{
    size = sz; // 设置数据成员
    // ia = new int[size];
    // for (int ix = 0; ix < size; ++ix)
    //     ia[ix] = 0; // 初始化数组元素
    MerryGoRound(ia, nullptr ,size);
}

IntArray::IntArray(int *array, int sz)
{
    size = sz; // 设置数据成员
    // ia = new int[size];
    // for (int ix = 0; ix < size; ++ix)
    //     ia[ix] = array[ix]; // 拷贝数据成员
    MerryGoRound(ia, array, size);
}

IntArray::IntArray(const IntArray &rhs)
{
    size = rhs.size;
    // ia = new int[size];
    // for (int ix = 0; ix < size; ix++)
    //     ia[ix] = rhs.ia[ix];
    MerryGoRound(ia, rhs.ia, rhs.size);
}

void IntArray::printAll()
{
    for (int ix = 0; ix < size; ++ix)
        cout << ia[ix] << "  ";
    cout << endl;
}

IntArray::~IntArray()
{
    delete ia;
}

void MerryGoRound(int * &ia, int * array = nullptr, int sz = 0)
{
    ia = new int[sz];

    bool ZEROPOINTER = false;
    if(array == nullptr)
    {
        ZEROPOINTER = true;
    }

    for(int ix = 0; ix < sz; ix ++)
    {
        if(!ZEROPOINTER)
        {
            ia[ix] = array[ix];
        }
        else
        {
            ia[ix] = 0;
        }
    }
}
