class IntArray
{
public:
    IntArray(int sz);
    IntArray(int *array, int sz);
    IntArray(const IntArray &rhs);
    void printAll();
    ~IntArray();

private:
    int * ia;
    int size;
};

void MerryGoRound(int * &ia, int * array, int sz );