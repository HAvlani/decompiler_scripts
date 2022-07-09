typedef struct struct_1 {
    char padding_0[32];
    unsigned long long field_20;
} struct_1;

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
    unsigned long long v2;  // rax
    unsigned long|struct_2 * v3;  // rax
    unsigned int v4;  // rdx
    unsigned long long v5;  // rbx
    struct_1 *v6;  // rbp
    void *v7;  // rsi
    struct_1 *v8;  // rdi
    unsigned long long v9;  // r12

    v6 = v8;
    v5 = ((unsigned int)v4);
    v9 = malloc(((unsigned int)v4) + 264 & 18446744069414584312);
    if (v3 != 0)
    {
        memcpy(v3 + 0x100, v7, ((unsigned int)v4));
        v3 = v6->field_20;
        *(v8->field_20 + v5 + 0x100) = 0;
        *(v3 + 96) = v5;
        *(v3 + 80) = v6;
        *(v3 + 56) = v3;
        *(v3 + 64) = 0;
        *(v3 + 24) = 0;
        *(v3 + 106) = 0x30000;
        *(v3 + 32) = 0;
        *(v3 + 40) = 0;
        v3 = v9;
        return v2;
    }
    v3 = v9;
    return v2;
}
