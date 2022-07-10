typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[12];
    char field_10;
    char field_11;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int g_40ce4a;
extern unsigned int g_40ce5a;

int chown_files()
{
    struct_0 *v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long|unsigned long long v10;  // rdx
    unsigned long long v11;  // rbx
    struct_1 *v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long|unsigned long long v14;  // rsi
    unsigned int v16;  // esi
    unsigned long v17;  // r8
    unsigned long long v18;  // r9
    unsigned long long v19;  // r12
    struct_0 *v2;  // [bp+0x8]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    char *|struct_1 * v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    char *|unsigned long long v7;  // rax
    unsigned long long|struct_0 * v8;  // rcx
    unsigned long long v9;  // rcx

    v21 = v8;
    v20 = v10;
    v13 = v18;
    v11 = v17;
    if ((((int)v17) & ((int)v18)) == -1)
    {
        if (v2->field_10 == 0)
        {
            v8 = v2;
            v14 = ((long long)(v2->field_0 == 2? v16 | 8 : ((int)rsi<8>)));
        }
    }
    v19 = 1;
    v4 = xfts_open();
    v22 = v4;
    while (true)
    {
        v6 = rpl_fts_read();
        v14 = v6;
        if (v6 == 0)
        {
            break;
        }
        v0 = v2;
        v4 = change_file_owner();
        v19 = ((long long)(((int)v19) & v4));
        v10 = v1;
    }
    v3 = __errno_location();
    v9 = ((long long)v3->field_0);
    v12 = v3;
    if (v3->field_0 != 0)
    {
        v19 = ((long long)v2->field_11);
        if (((long long)v2->field_11) != 0)
        {
            v19 = 0;
        }
        else
        {
            v3 = dcgettext(0x0, &g_40ce4a, 0x5);
            error(0x0, v12->field_0, v3);
        }
    }
    v7 = rpl_fts_close();
    if (v7 == 0)
    {
        v5 = v19;
        return v5;
    }
    v19 = 0;
    v7 = dcgettext(0x0, &g_40ce5a, 0x5);
    error(0x0, v12->field_0, v7);
    v5 = v19;
    return v5;
}
