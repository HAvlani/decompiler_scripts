typedef struct struct_0 {
    char padding_0[84];
    char field_54;
} struct_0;

int queue_insert()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v6;  // rbx
    struct_0 *v7;  // rsi
    unsigned long v8;  // r12

    v1 = v8;
    v0 = v6;
    pthread_mutex_lock();
    heap_insert();
    v7->field_54 = 1;
    pthread_cond_signal();
}
