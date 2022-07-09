typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int re_node_set_insert_last()
{
    BOT tmp_14;  // tmp #14
    unsigned long long v1;  // rax
    unsigned long long v2[3];  // rbx
    unsigned long long v3;  // rbp
    struct_0 *|unsigned long v4;  // rsi
    unsigned long long v5;  // rsi
    unsigned long long v6[3];  // rdi
    struct_0 * v7;  // rdi

    v3 = v5;
    v2 = v6;
    v4 = v6[1];
    v7 = v6[2];
    if (v2[0] != v4)
    {
        v2[1] = v4 + 1;
        v1 = 1;
        *(v7 + v4 * 8) = v3;
        return v1;
    }
    tmp_14 = (v4 + 1) * 2;
    v4 = (v4 + 1) * 16;
    v2[0] = tmp_14;
    v7 = realloc(v7, v4);
    if (v7 != 0)
    {
        v2[2] = v7;
        v4 = v2[1];
        v2[1] = v4 + 1;
        v1 = 1;
        *(v7 + v4 * 8) = v3;
        return v1;
    }
    else
    {
        v1 = 0;
        return v1;
    }
}
