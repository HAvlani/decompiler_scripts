typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpn_cmp()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    struct_0 *v4;  // rdx
    struct_0 *v6;  // rsi
    struct_0 *v7;  // rdi

    while (true)
    {
        v4 = rdx<8> - 1;
        if (!(((char)(rdx<8> - 1 >> 63))))
        {
            v2 = *(v7 + v4 * 8);
            v3 = *(v6 + v4 * 8);
            v1 = ((long long)((0 - ((int)(v3 < v2)) & 2) - 1));
            return v1;
        }
        return 0;
    }
}
