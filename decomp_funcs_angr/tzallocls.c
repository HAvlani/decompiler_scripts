typedef struct struct_1 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_1;

int tzalloc()
{
    unsigned long long v1;  // rax
    struct_1 *v2;  // rax
    struct_1 *v3;  // rax
    unsigned long v4;  // rbx
    void *v5;  // rdi
    struct_1 * v6;  // r12

    if (v5 != 0)
    {
        v1 = strlen(v5);
        v4 = v1 + 1;
        v6 = malloc((118 <= v1 + 1? v1 + 1 : 118) + 17 & 18446744069414584312);
        if (v6 != 0)
        {
            v6->field_0 = 0;
            v6->field_8 = 1;
            memcpy(v6 + 9, v5, v4);
            *(v6 + v4 + 9) = 0;
            v2 = v6;
            return v2;
        }
        v2 = v6;
        return v2;
    }
    v6 = malloc(0x80);
    if (v6 == 0)
    {
        v2 = v6;
        return v2;
    }
    else
    {
        v6->field_0 = 0;
        v3 = v6;
        v6->field_8 = 0;
        return v3;
    }
}
