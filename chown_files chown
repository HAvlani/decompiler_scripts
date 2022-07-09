typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[12];
    char field_10;
    char field_11;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned int g_40d0f2;
extern unsigned int g_40d102;

int chown_files()
{
    struct_0 *v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v10;  // rdx
    struct_1 *v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long|unsigned long long v15;  // rsi
    unsigned int v16;  // esi
    unsigned long long v17;  // r8
    unsigned long long v18;  // r9
    unsigned long long v19;  // r12
    struct_0 *v2;  // [bp+0x8]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    char *|unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct_1 *|char * v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long|struct_0 * v9;  // rcx

    v21 = v9;
    v20 = v10;
    v13 = v18;
    v12 = v17;
    if ((((int)v17) & ((int)v18)) == -1)
    {
        if (v2->field_10 == 0)
        {
            v9 = v2;
            v15 = ((long long)(v2->field_0 == 2? v16 | 8 : ((int)rsi<8>)));
        }
    }
    v19 = 1;
    v7 = xfts_open();
    v22 = v7;
    while (true)
    {
        v4 = rpl_fts_read();
        v15 = v4;
        if (v4 == 0)
        {
            break;
        }
        v0 = v2;
        v7 = change_file_owner();
        v19 = ((long long)(((int)v19) & v7));
        v10 = v1;
    }
    v5 = __errno_location();
    v8 = ((long long)v5->field_0);
    v11 = v5;
    if (v5->field_0 != 0)
    {
        v19 = ((long long)v2->field_11);
        if (((long long)v2->field_11) != 0)
        {
            v19 = 0;
        }
        else
        {
            v5 = dcgettext(0x0, &g_40d0f2, 0x5);
            error(0x0, v11->field_0, v5);
        }
    }
    v3 = rpl_fts_close();
    if (v3 == 0)
    {
        v6 = v19;
        return v6;
    }
    v19 = 0;
    v3 = dcgettext(0x0, &g_40d102, 0x5);
    error(0x0, v11->field_0, v3);
    v6 = v19;
    return v6;
}
