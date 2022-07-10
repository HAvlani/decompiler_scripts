typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int setup_dir.isra.0()
{
    unsigned long long v1;  // rax
    char v2;  // al
    struct_0 *v5;  // rsi
    unsigned int v6;  // edi
    unsigned long v8;  // rdi

    if ((((short)v6) & 258) != 0)
    {
        v1 = hash_initialize();
        v5->field_0 = v1;
        v2 = ((char)(v1 != 0));
        return rax<8>;
    }
    v5->field_0 = v8;
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
