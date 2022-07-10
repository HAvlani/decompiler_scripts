typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[8];
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[12];
    unsigned long long field_50;
    char padding_58[8];
    unsigned long long field_60;
    char padding_68[2];
    unsigned int field_6a;
} struct_2;

int fts_alloc()
{
    unsigned long|struct_2 * v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // rbx
    struct_0 *v6;  // rbp
    void *v7;  // rsi
    struct_0 *v8;  // rdi
    unsigned long long v9;  // r12

    v6 = v8;
    v5 = v4;
    v9 = malloc(v4 + 264 & 18446744069414584312);
    if (v2 != 0)
    {
        memcpy(v2 + 0x100, v7, v4);
        v2 = v6->field_20;
        *(v8->field_20 + v5 + 0x100) = 0;
        *(v2 + 96) = v5;
        *(v2 + 80) = v6;
        *(v2 + 56) = v2;
        *(v2 + 64) = 0;
        *(v2 + 24) = 0;
        *(v2 + 106) = 0x30000;
        *(v2 + 32) = 0;
        *(v2 + 40) = 0;
        v2 = v9;
        return v3;
    }
    v2 = v9;
    return v3;
}
