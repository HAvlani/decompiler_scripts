typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int re_node_set_insert_last()
{
    BOT tmp_14;  // tmp #14
    unsigned long long v1;  // rax
    unsigned long long v2[3];  // rbx
    unsigned long long v3;  // rbp
    unsigned long v4;  // rsi
    struct_0 *|unsigned long v5;  // rsi
    struct_0 * v6;  // rdi
    unsigned long long v7[3];  // rdi

    v3 = v4;
    v2 = v7;
    v5 = v7[1];
    v6 = v7[2];
    if (v2[0] != v5)
    {
        v2[1] = v5 + 1;
        v1 = 1;
        *(v6 + v5 * 8) = v3;
        return v1;
    }
    tmp_14 = (v5 + 1) * 2;
    v5 = (v5 + 1) * 16;
    v2[0] = tmp_14;
    v6 = realloc(v6, v5);
    if (v6 != 0)
    {
        v2[2] = v6;
        v5 = v2[1];
        v2[1] = v5 + 1;
        v1 = 1;
        *(v6 + v5 * 8) = v3;
        return v1;
    }
    else
    {
        v1 = 0;
        return v1;
    }
}
