typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    struct struct_1 *field_20;
    char padding_28[16];
    char field_38;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[16];
    char field_38;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int rpl_re_compile_fastmap()
{
    BOT tmp_48;  // tmp #48
    unsigned long long v2;  // rcx
    struct_2 *v3;  // rbx
    unsigned long long v4[13];  // rbp
    unsigned long long v5;  // rsi
    struct_3 * v6;  // rdi
    struct_0 *v7;  // rdi
    unsigned long long v8[32];  // r12
    unsigned long v9;  // d

    v8 = v7->field_20;
    v3 = v7;
    v4 = v7->field_0;
    tmp_48 = v7->field_20 + 8;
    *(v7->field_20 + None) = 0;
    v8[31] = 0;
    v6 = tmp_48 & 18446744069414584312;
    for (v2 = ((long long)(((int)(v8 - (tmp_48 & 18446744069414584312))) + 0x100)) >> 3; v2 != 0; v6 += v9 * 8)
    {
        v2 -= 1;
        v6->field_0 = 0;
    }
    re_compile_fastmap_iter.isra.0();
    v5 = v4[10];
    if (v4[9] != v4[10])
    {
        re_compile_fastmap_iter.isra.0();
        v5 = v4[9];
    }
    if (v4[11] != v5)
    {
        re_compile_fastmap_iter.isra.0();
        v5 = v4[9];
    }
    if (v4[12] != v5)
    {
        re_compile_fastmap_iter.isra.0();
        v3->field_38 = v3->field_38 | 8;
        return 0;
    }
    v3->field_38 = v3->field_38 | 8;
    return 0;
}
