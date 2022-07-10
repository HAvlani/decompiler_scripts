typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int sub_41604e()
{
    BOT tmp_9;  // tmp #9
    unsigned long v1;  // [bp+0x30]
    unsigned int v2;  // [bp+0x60]
    unsigned int v3;  // [bp+0x98]
    struct_0 * v4;  // rax
    struct_0 * v6;  // rdi
    unsigned int v7;  // r10d
    unsigned long long v8[6];  // r12

    v4 = v8[5];
    v6 = v8[0];
    if (v8[5] != v1)
    {
        v8[5] = v4 + 1;
        *(v6 + v4 * 4) = v3;
    }
    else
    {
        tmp_9 = v1;
        v2 = v7;
        v1 = tmp_9 * 2 + 1;
        v6 = realloc(v6, (tmp_9 * 2 + 1) * 4);
        v8[0] = v6;
        v4 = v8[5];
        v8[5] = v4 + 1;
        *(v6 + v4 * 4) = v3;
    }
}
