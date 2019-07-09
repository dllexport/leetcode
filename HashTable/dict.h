#pragma once
#include <stdint.h>

struct dictItem
{
    void *key;
    union value {
        void *v;
        uint64_t u64;
        int64_t s64;
        double d;
    };
    dictItem *next;
};

struct HashTable
{
    dictItem **table;
    uint64_t size;
    uint64_t used;
};

class Dictionary
{
public:
private:
        HashTable ht;
}