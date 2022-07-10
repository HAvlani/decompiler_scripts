typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int re_node_set_contains.isra.0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long v3;  // rdx
    unsigned long long v4;  // rsi
    struct_0 *v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long v7;  // rdi

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))))
    {
        v2 = v7 - 1;
        v6 = v5->field_0;
        v4 = 0;
        while (v2 > v4)
        {
            v1 = v2 + v4 >> 1;
            if (*(v6 + (v2 + v4 >> 1 << 3)) >= v3)
            {
                v2 = v1;
            }
            else
            {
                v4 = v2 + 1;
            }
        }
        if (v3 != *(v6 + (v4 << 3)))
        {
            return 0;
        }
        return v4 + 1;
    }
    return 0;
}
