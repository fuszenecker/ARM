#include <queue.h>

Queue :: Queue() {
    rd_ptr = 0;
    wr_ptr = 0;
}

t_queue_result Queue :: put_non_blocking(t_message msg) {
    if (((wr_ptr+1) % QUEUE_SIZE) == rd_ptr) {
        return QUEUE_FULL;
    } else {
        wr_ptr++;
        wr_ptr %= QUEUE_SIZE;
        queue[wr_ptr] = msg;
    }

    return QUEUE_OK;
}

t_message Queue :: get_non_blocking() {
    if (rd_ptr == wr_ptr) {
        return QUEUE_EMPTY;
    } else {
        rd_ptr++;
        rd_ptr %= QUEUE_SIZE;
        return queue[rd_ptr];
    }
}

