// ---------------------------------------------------------------------------
// This header file describes the structure of a message in the queues.
// The file also contains the function prototypes.
// ---------------------------------------------------------------------------

#ifndef __QUEUE_H__
#define __QUEUE_H__

// The queue can be: full, empty or OK (not full and not empty)
typedef enum {QUEUE_OK, QUEUE_FULL, QUEUE_EMPTY} t_queue_result;

// ---------------------------------------------------------------------------
// Message contains a command and three parameter value
// ---------------------------------------------------------------------------

typedef struct {
    unsigned int command; 
    unsigned int param1;
    unsigned int param2;
    unsigned int param3;
} t_message;

// ---------------------------------------------------------------------------
// If the queue size is not defined, the default value is 1 message/queue
// ---------------------------------------------------------------------------

#ifndef QUEUE_SIZE
#define QUEUE_SIZE      1
#endif

// ---------------------------------------------------------------------------
// The queue contains at least 1 message and the two pointers
// ---------------------------------------------------------------------------

typedef struct {
    t_message data[QUEUE_SIZE];
    unsigned int rd_ptr, wr_ptr;
} t_queue;

// ---------------------------------------------------------------------------
// Function to initialize the queue
// The parameter is the pointer to the queue
// ---------------------------------------------------------------------------

void queue_init(t_queue *);

// ---------------------------------------------------------------------------
// Copies a message to the queue, if it is not full 
// (return value is QUEUE_OK).
// If the queue is full, the return value will be QUEUE_FULL.
// Parameters: pointer to the queue, pointer to the message structure
// ---------------------------------------------------------------------------

t_queue_result queue_put_non_blocking(t_queue *, t_message *);

// ---------------------------------------------------------------------------
// Gets the pointer to the next message in the queue, if it is not empty 
// (return value is QUEUE_OK).
// If the queue is empty, the return value will be QUEUE_EMPTY.
// Parameters: pointer to the queue, POINTER TO A POINTER_to_the_message
// structure.
// ---------------------------------------------------------------------------

t_queue_result queue_get_non_blocking(t_queue *, t_message **);

// ---------------------------------------------------------------------------
// Removes the last message from the queue.
// Parameter: pointer to the queue.
// If the queue is not empty the return value is QUEUE_OK, else QUEUE_EMPTY.
// ---------------------------------------------------------------------------

t_queue_result queue_remove_non_blocking(t_queue *);

// ---------------------------------------------------------------------------
// The same as "queue_put_non_blocking()", but this function waits while
// the queue if full.
// ---------------------------------------------------------------------------

t_queue_result queue_put(t_queue *, t_message *);

// ---------------------------------------------------------------------------
// The same as "queue_get_non_blocking()", but this function waits while
// the queue is empty.
// ---------------------------------------------------------------------------

t_queue_result queue_get(t_queue *, t_message **);

// ---------------------------------------------------------------------------
// The same as "queue_remove_non_blocking()", but this function waits while
// the queue is empty.
// ---------------------------------------------------------------------------

t_queue_result queue_remove(t_queue *);

#endif
