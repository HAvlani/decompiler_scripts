typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int setup_dir.isra.0()
{
    char v2;  // al
    unsigned long long v3;  // rax
    struct_0 *v4;  // rsi
    unsigned int v7;  // edi
    unsigned long v8;  // rdi

    if ((((short)v7) & 258) != 0)
    {
        v3 = hash_initialize();
        v4->field_0 = v3;
        v2 = ((char)(v3 != 0));
        return rax<8>;
    }
    v4->field_0 = v8;
    if (malloc(0x20) != 0)
    {
        cycle_check_init();
        return 1;
    }
    else
    {
        return 0;
    }
}
