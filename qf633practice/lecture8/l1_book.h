#ifndef L1_BOOK_H_
#define L1_BOOK_H_

#include <cstdint>

struct L1Book {
    void ProcessUpdate (double bid_price, int64_t bid_qty,
                        double ask_price, int64_t ask_qty) {
        prices[BID] = bid_price;
        prices[ASK] = ask_price;
        qties[BID] = bid_qty;
        qties[ASK] = ask_qty;

    }

    enum {BID = 0, ASK = 1};
    double prices[2] {}; //uniform initialization
    int64_t qties[2] {};
};



#endif // L1_BOOK_H_
