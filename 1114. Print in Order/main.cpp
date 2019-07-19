#include <functional>
#include <mutex>
using namespace std;

class Foo
{
public:
    Foo()
    {
        m1.lock();
        m2.lock();
    }

    void first(function<void()> printFirst)
    {
        printFirst();
        m1.unlock();
    }

    void second(function<void()> printSecond)
    {

        m1.lock();
        printSecond();
        m2.unlock();
    }

    void third(function<void()> printThird)
    {

        m2.lock();
        printThird();
    }

private:
    std::mutex m1;
    std::mutex m2;
};

int main()
{
}