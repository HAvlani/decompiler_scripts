typedef struct struct_0 {
    char padding_0[108];
    unsigned short field_6c;
} struct_0;

int rpl_fts_set()
{
    unsigned long v1;  // rdx
    struct_0 *v2;  // rsi

    if (((int)v1) <= 4)
    {
        v2->field_6c = v1;
        return 0;
    }
    *(__errno_location() + None) = 22;
    return 1;
}
