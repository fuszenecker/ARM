// ---------------------------------------------------------------------------
// This file contains the implementation of queue-functions.
// ---------------------------------------------------------------------------

#include <queue.h>

// ---------------------------------------------------------------------------
// Function to initialize the queue
// The parameter is the pointer to the queue
// ---------------------------------------------------------------------------

void queue_init (t_queue *queue) {
    queue->rd_ptr = 0;
    queue->wr_ptr = 0;
}

// ---------------------------------------------------------------------------
// Copies a message to the queue, if it is not full 
// (return value is QUEUE_OK).
// If the queue is full, the return value will be QUEUE_FULL.
// Parameters: pointer to the queue, pointer to the message structure
// ---------------------------------------------------------------------------

t_queue_result queue_put_non_blocking(t_queue *queue, t_message *msg) {
    int k;

    // If the rd_ptr == wr_ptr, the queue is empty.
    // If the rd_ptr != wr_ptr, and both of them point to the same item, 
    // the queue is full.
    if ((queue->wr_ptr != queue->rd_ptr) && ((queue->wr_ptr % QUEUE_SIZE) 
            == (queue->rd_ptr % QUEUE_SIZE))) {
        return QUEUE_FULL;
    } else {
        // Copy the message into the queue
        for (k = 0; k < sizeof(t_message); k++)
            ((char *)(&(queue->data[queue->wr_ptr % QUEUE_SIZE])))[k] = 
                ((char *)msg)[k];

        // increment write pointer
        queue->wr_ptr++;

        return QUEUE_OK;
    }
}

// ---------------------------------------------------------------------------
// Gets the pointer to the next message in the queue, if it is not empty 
// (return value is QUEUE_OK).
// If the queue is empty, the return value will be QUEUE_EMPTY.
// Parameters: pointer to the queue, POINTER TO A POINTER_to_the_message
// structure.
// ---------------------------------------------------------------------------

t_queue_result queue_get_non_blocking(t_queue *queue, t_message **msg) {
    if (queue->rd_ptr == queue->wr_ptr) {
        return QUEUE_EMPTY;
    } else {
        *msg = &(queue->data[queue->rd_ptr % QUEUE_SIZE]);
        return QUEUE_OK;
    }
}

// ---------------------------------------------------------------------------
// Removes the last message from the queue.
// Parameter: pointer to the queue.
// If the queue is not empty the return value is QUEUE_OK, else QUEUE_EMPTY.
// ---------------------------------------------------------------------------

t_queue_result queue_remove_non_blocking(t_queue *queue) {
    if (queue->rd_ptr == queue->wr_ptr) {
        return QUEUE_EMPTY;
    } else {
        queue->rd_ptr++;
        return QUEUE_OK;
    }
}

// ---------------------------------------------------------------------------
// The same as "queue_put_non_blocking()", but this function waits while
// the queue if full.
// ---------------------------------------------------------------------------

t_queue_result queue_put(t_queue *queue, t_message *msg) {
    while (queue_put_non_blocking(queue, msg) == QUEUE_FULL);
    return QUEUE_OK;
}

// ---------------------------------------------------------------------------
// The same as "queue_get_non_blocking()", but this function waits while
// the queue is empty.
// ---------------------------------------------------------------------------

t_queue_result queue_get(t_queue *queue, t_message **msg) {
    while (queue_get_non_blocking(queue, msg) == QUEUE_EMPTY);
    return QUEUE_OK;
}

// ---------------------------------------------------------------------------
// The same as "queue_remove_non_blocking()", but this function waits while
// the queue is empty.
// ---------------------------------------------------------------------------

t_queue_result queue_remove(t_queue *queue) {
    while (queue_remove_non_blocking(queue) == QUEUE_EMPTY);
    return QUEUE_OK;
}

