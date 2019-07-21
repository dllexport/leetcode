#include <mutex>
#include <atomic>
#include <condition_variable>

class FooBar {
private:
    int n;
    std::mutex m;
    std::atomic<int> ffoo{1};
    std::condition_variable cv;

public:
    FooBar(int n) {
        this->n = n;
    }
    
    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            std::unique_lock<std::mutex> lck(m);
            cv.wait(lck, [this]{return this->ffoo == 1;});
            printFoo();
            lck.unlock();
            ffoo = 0;
            cv.notify_one();
        }
    }
    
    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            std::unique_lock<std::mutex> lck(m);
            cv.wait(lck, [this]{return this->ffoo == 0;});
            printBar();
            lck.unlock();
            ffoo = 1;
            cv.notify_one();
        }
    }
};