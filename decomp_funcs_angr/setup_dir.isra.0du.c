typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int setup_dir.isra.0()
{
    unsigned long long v2;  // rax
    char v3;  // al
    struct_0 *v4;  // rsi
    unsigned long v6;  // rdi
    unsigned int v7;  // edi

    if ((((short)v7) & 258) != 0)
    {
        v2 = hash_initialize();
        v4->field_0 = v2;
        v3 = ((char)(v2 != 0));
        return rax<8>;
    }
    v4->field_0 = v6;
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
