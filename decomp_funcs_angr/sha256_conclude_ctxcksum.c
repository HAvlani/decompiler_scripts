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
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r8
    unsigned long v12;  // r12
    struct_0 *v13;  // r12
    unsigned long v14;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rsi
    struct_0 *v9;  // rdi

    v1 = v14;
    v0 = v12;
    v13 = v9;
    tmp_79 = ((long long)v9->field_20);
    v4 = ((long long)v9->field_24);
    v5 = v9->field_28;
    v7 = (0 - ((long long)(v9->field_28 < 56)) & 18446744069414584256) + 120;
    v10 = (0 - ((long long)(v9->field_28 < 56)) & 0xfffffffefffffff0) + 31;
    v8 = ((long long)(tmp_79 + v5));
    v13->field_20 = ((int)(tmp_79 + v5));
    v11 = (0 - ((long long)(v5 < 56)) & 0xfffffffefffffff0) + 30;
    if (v8 < v5)
    {
        v4 = ((long long)(((int)v4) + 1));
        v13->field_24 = ((int)v4);
        v6 = v7 - v5;
        *(v13 + v11 * 4 + 48) = (((int)v4) * 8 | ((int)v8) % 0x20000000) * 0x1000000 | (((int)v4) * 8 | ((int)v8) % 0x20000000) * 0x100 & 0xff0000 | (((int)v4) * 8 | ((int)v8) % 0x20000000) >> 8 & 0xff00 | (((int)v4) * 8 | ((int)v8) % 0x20000000) >> 24 & 255;
        *(v13 + v10 * 4 + 48) = ((int)v8) * 0x8000000 | ((int)v8) * 0x800 & 0xff0000 | ((int)v8) * 8 >> 8 & 0xff00 | ((int)v8) * 8 >> 24 & 255;
        memcpy(v13 + 48 + v5, &fillbuf, v6);
    }
    else
    {
        v6 = v7 - v5;
        *(v13 + v11 * 4 + 48) = (((int)v4) * 8 | ((int)v8) % 0x20000000) * 0x1000000 | (((int)v4) * 8 | ((int)v8) % 0x20000000) * 0x100 & 0xff0000 | (((int)v4) * 8 | ((int)v8) % 0x20000000) >> 8 & 0xff00 | (((int)v4) * 8 | ((int)v8) % 0x20000000) >> 24 & 255;
        *(v13 + v10 * 4 + 48) = ((int)v8) * 0x8000000 | ((int)v8) * 0x800 & 0xff0000 | ((int)v8) * 8 >> 8 & 0xff00 | ((int)v8) * 8 >> 24 & 255;
        memcpy(v13 + 48 + v5, &fillbuf, v6);
    }
}
