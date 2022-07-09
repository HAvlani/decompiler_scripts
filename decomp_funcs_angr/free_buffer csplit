typedef struct struct_0 {
    char padding_0[48];
    unsigned long long field_30;
} struct_0;

typedef struct struct_1 {
    char padding_0[1304];
    unsigned long long field_518;
} struct_1;

int free_buffer()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v4;  // rbx
    struct_1 * v5;  // rbx
    struct_0 *v6;  // rdi

    v0 = v4;
    v5 = v6->field_30;
    if (v6->field_30 != 0)
    {
        while (true)
        {
            v5 = v5->field_518;
            rpl_free();
            if (v5 == 0)
            {
                break;
            }
        }
        rpl_free();
    }
    else
    {
        rpl_free();
    }
}
