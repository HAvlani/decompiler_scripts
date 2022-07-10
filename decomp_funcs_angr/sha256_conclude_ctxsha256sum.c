typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned long long field_28;
} struct_0;

extern void fillbuf;

int sha256_conclude_ctx()
{
    BOT tmp_79;  // tmp #79
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    struct_0 *v10;  // rdi
    unsigned long long v11;  // r8
    struct_0 *v12;  // r12
    unsigned long v13;  // r12
    unsigned long v14;  // r13
    unsigned long long v3;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long v7;  // rdx
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    v1 = v14;
    v0 = v13;
    v12 = v10;
    tmp_79 = ((long long)v10->field_20);
    v3 = ((long long)v10->field_24);
    v5 = v10->field_28;
    v6 = (0 - ((long long)(v10->field_28 < 56)) & 18446744069414584256) + 120;
    v9 = (0 - ((long long)(v10->field_28 < 56)) & 0xfffffffefffffff0) + 31;
    v8 = ((long long)(tmp_79 + v5));
    v12->field_20 = ((int)(tmp_79 + v5));
    v11 = (0 - ((long long)(v5 < 56)) & 0xfffffffefffffff0) + 30;
    if (v8 < v5)
    {
        v3 = ((long long)(((int)v3) + 1));
        v12->field_24 = ((int)v3);
        v7 = v6 - v5;
        *(v12 + v11 * 4 + 48) = (((int)v3) * 8 | ((int)v8) % 0x20000000) * 0x1000000 | (((int)v3) * 8 | ((int)v8) % 0x20000000) * 0x100 & 0xff0000 | (((int)v3) * 8 | ((int)v8) % 0x20000000) >> 8 & 0xff00 | (((int)v3) * 8 | ((int)v8) % 0x20000000) >> 24 & 255;
        *(v12 + v9 * 4 + 48) = ((int)v8) * 0x8000000 | ((int)v8) * 0x800 & 0xff0000 | ((int)v8) * 8 >> 8 & 0xff00 | ((int)v8) * 8 >> 24 & 255;
        memcpy(v12 + 48 + v5, &fillbuf, v7);
    }
    else
    {
        v7 = v6 - v5;
        *(v12 + v11 * 4 + 48) = (((int)v3) * 8 | ((int)v8) % 0x20000000) * 0x1000000 | (((int)v3) * 8 | ((int)v8) % 0x20000000) * 0x100 & 0xff0000 | (((int)v3) * 8 | ((int)v8) % 0x20000000) >> 8 & 0xff00 | (((int)v3) * 8 | ((int)v8) % 0x20000000) >> 24 & 255;
        *(v12 + v9 * 4 + 48) = ((int)v8) * 0x8000000 | ((int)v8) * 0x800 & 0xff0000 | ((int)v8) * 8 >> 8 & 0xff00 | ((int)v8) * 8 >> 24 & 255;
        memcpy(v12 + 48 + v5, &fillbuf, v7);
    }
}
