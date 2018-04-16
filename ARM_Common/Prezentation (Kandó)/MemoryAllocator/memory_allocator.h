#ifndef MEMORY_ALLOCATOR_H
#define MEMORY_ALLOCATOR_H

#include <stdint.h>
#include <stddef.h>

#ifdef DEBUG
#include <stdio.h>
#endif

template<typename memory_type, memory_type *MEMORY_ADDR, size_t MEMORY_SIZE, typename memory_map_type, memory_map_type *MEMORY_MAP_ADDR, size_t BLOCK_SIZE>
class __memory_allocator
{
    public:
        __memory_allocator() : memory(MEMORY_ADDR), memory_map(MEMORY_MAP_ADDR)
        {
            for (size_t p = 0; p < MEMORY_SIZE / BLOCK_SIZE; p++)
                memory_map[p] = 0;
        }

        ~__memory_allocator()
        {
        }

        void *allocate(size_t size) throw(std::bad_alloc)
        {
            unsigned int blocks = size / BLOCK_SIZE;

            if (size % BLOCK_SIZE)
                blocks++;

#ifdef DEBUG
            printf("operator_new():\n");
            printf("  required memory: %d bytes\n", size);
            printf("  allocated memory: %d bytes, %d blocks\n", blocks * BLOCK_SIZE, blocks);
#endif

            unsigned int start = 0;

            for (; start < MEMORY_SIZE / BLOCK_SIZE; start++)
            {
                if (is_enough(start, blocks))
                {
                    memory_map_type new_id = find_free_block_id();

                    if (new_id == 0)
                    {
#ifndef NO_THROW
                        throw std::bad_alloc();
#endif
                        return 0;
                    }

                    for (unsigned int block = start; (block < start + blocks) && (block < MEMORY_SIZE / BLOCK_SIZE); block++)
                        memory_map[block] = new_id;
#ifdef DEBUG
                    printf("  Address of the variable: %p\n", memory + start * BLOCK_SIZE);
                    printf("  free blocks: %d\n", get_free_memory());
#endif
                    return memory + start * BLOCK_SIZE;
                }
            }

#ifdef DEBUG
            printf("  Address of the variable: Out of memory\n");
            printf("  free blocks: %d\n", get_free_memory());
#endif

#ifndef NO_THROW
            throw std::bad_alloc();
#endif

            return 0;
        }

        void deallocate(void *address)
        {
            unsigned int start_block = (unsigned int)((memory_type *)address - memory) / BLOCK_SIZE;

            memory_map_type id = memory_map[start_block];

#ifdef DEBUG
            printf("operator_delete():\n");
            printf("  address: %p\n", address);
#endif

            unsigned int blocks = 0;

            for (unsigned int block = start_block; (memory_map[block] == id) && (block < MEMORY_SIZE / BLOCK_SIZE); block++, blocks++)
                memory_map[block] = 0;

#ifdef DEBUG
            printf("  deallocated memory: %d bytes, %d blocks\n", blocks * BLOCK_SIZE, blocks);
            printf("  free blocks: %d\n", get_free_memory());
#endif
        }

    private:
        bool is_enough(unsigned int start, unsigned int amount) {
            unsigned int block;

            for (block = start; (block - start < amount) && (block < MEMORY_SIZE / BLOCK_SIZE); block++)
                if (memory_map[block] != 0)
                    return false;

            if ((start + amount) <= (MEMORY_SIZE / BLOCK_SIZE))
                return true;
            else
                return false;
        }

        bool is_id_used(memory_map_type id)
        {
            unsigned int block;

            for (block = 0; block < (MEMORY_SIZE / BLOCK_SIZE); block++)
                if (memory_map[block] == id)
                return true;

            return false;
        }

        memory_map_type find_free_block_id()
        {
            for (memory_map_type id = 1; id < 1 << (8 * sizeof(memory_map_type) - 1); id++)
            {
                if (!is_id_used(id))
                    return id;
            }

            return 0;
        }

        size_t get_free_memory()
        {
            size_t free = 0;

            for (unsigned int block = 0; block < (MEMORY_SIZE / BLOCK_SIZE); block++)
                if (memory_map[block] == 0)
                    free++;

            return free;
        }

        memory_type *memory;
        memory_map_type *memory_map;
};

#define IMPLEMEMENT_MEMORY_ALLOCATOR(MEM_TYPE, MEM_ADDR, MEM_SIZE, MAP_TYPE, MAP_ADDR, BSIZE)               \
    static __memory_allocator<MEM_TYPE, MEM_ADDR, MEM_SIZE, MAP_TYPE, MAP_ADDR, BSIZE> memory_allocator;    \
                                                                                                            \
void *operator new(size_t size) throw(std::bad_alloc)                                                       \
{                                                                                                           \
    return memory_allocator.allocate(size);                                                                 \
}                                                                                                           \
                                                                                                            \
void operator delete(void *address) throw()                                                                 \
{                                                                                                           \
    return memory_allocator.deallocate(address);                                                            \
}                                                                                                           \

#endif // MEMORY_ALLOCATOR_H
