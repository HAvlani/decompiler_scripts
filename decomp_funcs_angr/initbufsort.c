typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
} struct_0;

int initbuf()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rdx
    struct_0 *v4;  // rbx
    unsigned long v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long v7;  // rdi

    v5 = v3;
    v4 = v7;
    while (true)
    {
        v5 = (v5 & 0xfffffffeffffffe0) + 32;
        v7 = v5;
        v1 = malloc(v7);
        v4->field_0 = v1;
        if (v1 != 0)
        {
            v4->field_28 = v6;
            v4->field_18 = v7;
            v4->field_10 = 0;
            v4->field_20 = 0;
            v4->field_8 = 0;
            v4->field_30 = 0;
            return v1;
        }
        v5 = v7 % 2;
        xalloc_die(); /* do not return */
    }
}
