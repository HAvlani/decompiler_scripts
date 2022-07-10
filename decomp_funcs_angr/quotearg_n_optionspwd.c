typedef struct struct_0 {
    uint128_t field_0;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_1 nslots;
extern <missing-type> slot0;
extern struct_0 *slotvec;
extern struct_0 slotvec0;

int quotearg_n_options()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long v10;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14[2];  // rbx
    unsigned long long v15[7];  // rbp
    unsigned long long v16;  // rsi
    unsigned long v17;  // rdi
    unsigned long long v18;  // r14
    struct_0 * v19;  // r15
    unsigned long v2;  // [bp-0x78]
    struct_1 *v3;  // [bp-0x68]
    unsigned int v4;  // [bp-0x5c]
    unsigned long|unsigned long long v5;  // [bp-0x58]
    unsigned long v6;  // [bp-0x50]
    unsigned long v7;  // [bp-0x48]
    struct_0 *|unsigned long long v9;  // rax

    v15 = v13;
    v19 = slotvec;
    v3 = __errno_location();
    v4 = v3->field_0;
    if (nslots <= ((int)v17))
    {
        v7 = ((long long)nslots);
        if (slotvec != 4239472)
        {
            v9 = xpalloc();
            slotvec = v9;
            v19 = v9;
        }
        else
        {
            v9 = xpalloc();
            slotvec = v9;
            v19 = v9;
            v9->field_0 = slotvec0;
        }
        memset(((long long)nslots) * 16 + v19, 0x0, ((long long)(nslots - nslots)) * 16);
        nslots = ((int)v7);
    }
    v14 = v17 * 16 + v19;
    v6 = v15 + 8;
    v16 = v14[0];
    v18 = v14[1];
    v2 = v15[6];
    v1 = v15[5];
    v0 = v15 + 8;
    v5 = v16;
    v12 = quotearg_buffer_restyled();
    if (v5 <= v12)
    {
        v16 = v12 + 1;
        v14[0] = v12 + 1;
        if (v18 != 4239584)
        {
            v5 = v16;
            rpl_free();
            v16 = v5;
            v5 = v16;
            v14[1] = v18;
            v2 = v15[6];
            v18 = (long long)xcharalloc();
            v1 = v15[5];
            v0 = v6;
            quotearg_buffer_restyled();
            v3->field_0 = v4;
            v10 = v18;
            return v10;
        }
        v5 = v16;
        v14[1] = v18;
        v2 = v15[6];
        v18 = (long long)xcharalloc();
        v1 = v15[5];
        v0 = v6;
        quotearg_buffer_restyled();
        v3->field_0 = v4;
        v10 = v18;
        return v10;
    }
    v3->field_0 = v4;
    v10 = v18;
    return v10;
}
