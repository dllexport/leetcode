#include <queue>

class RecentCounter {
public:
    RecentCounter() {

    }

    int ping(int t) {

        if (queue.size() == 0)
        {
            queue.push(t);
            return 1;
        }

        while(1){
            auto diff = t - queue.front();
            if (t - queue.front() > 3000 && queue.size() > 0)
                queue.pop();
            else
            {
                auto size = queue.size();
                queue.push(t);
                return size + 1;
            }
        }

    }

private:
    std::queue<int> queue;
};

int main() {
    RecentCounter* obj = new RecentCounter();
    int param_1 = obj->ping(642);
    int param_2 = obj->ping(1849);
    int param_3 = obj->ping(4921);
    int param_4 = obj->ping(5936);
    int param_5 = obj->ping(5957);
    getchar();
}