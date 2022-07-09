typedef struct struct_1 {
    uint128_t field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 nslots;
extern <missing-type> slot0;
extern struct_1 *slotvec;
extern struct_1 slotvec0;

int quotearg_n_options()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long|struct_1 * v10;  // rax
    unsigned long long v12;  // rax
    unsigned long v13;  // rcx
    unsigned long long v14[2];  // rbx
    unsigned long long v15[7];  // rbp
    unsigned long long v16;  // rsi
    unsigned long v17;  // rdi
    unsigned long long v18;  // r14
    struct_1 * v19;  // r15
    unsigned long v2;  // [bp-0x78]
    struct_0 *v3;  // [bp-0x68]
    unsigned int v4;  // [bp-0x5c]
    unsigned long|unsigned long long v5;  // [bp-0x58]
    unsigned long v6;  // [bp-0x50]
    unsigned long v7;  // [bp-0x48]
    unsigned long long v9;  // rax

    v15 = v13;
    v19 = slotvec;
    v3 = __errno_location();
    v4 = v3->field_0;
    if (nslots <= ((int)v17))
    {
        v7 = ((long long)nslots);
        if (slotvec != 4235376)
        {
            v10 = xpalloc();
            slotvec = v10;
            v19 = v10;
        }
        else
        {
            v10 = xpalloc();
            slotvec = v10;
            v19 = v10;
            v10->field_0 = slotvec0;
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
        if (v18 != 4235488)
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
            v9 = v18;
            return v9;
        }
        v5 = v16;
        v14[1] = v18;
        v2 = v15[6];
        v18 = (long long)xcharalloc();
        v1 = v15[5];
        v0 = v6;
        quotearg_buffer_restyled();
        v3->field_0 = v4;
        v9 = v18;
        return v9;
    }
    v3->field_0 = v4;
    v9 = v18;
    return v9;
}
