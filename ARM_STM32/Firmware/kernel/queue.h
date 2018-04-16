#ifndef __QUEUE_H__
#define __QUEUE_H__

enum t_queue_result {QUEUE_OK, QUEUE_FULL, QUEUE_EMPTY};
typedef unsigned int t_message;

#ifndef QUEUE_SIZE
#define QUEUE_SIZE      2
#endif

class Queue {
    private:
        t_message queue[QUEUE_SIZE];
        unsigned int rd_ptr, wr_ptr;

    public:
        Queue();
        t_queue_result put_non_blocking(t_message msg);
        t_message get_non_blocking();
};

#endif
