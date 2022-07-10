typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpn_zero()
{
    unsigned long v1;  // rax
    unsigned long v2;  // rsi
    struct_0 * v3;  // rsi
    struct_0 *v4;  // rdi

    v3 = v2 - 1;
    if (!(((char)(v2 - 1 >> 63))))
    {
        do
        {
            *(v4 + v3 * 8) = 0;
            v3 -= 1;
        }
        while (v3 != 18446744069414584319);
        return v1;
    }
    return v1;
}
