typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[4];
    char field_c;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int caught_signals;
extern unsigned int g_416ba6;
extern struct_2 temphead;
extern struct_2 *temptail;

int zaptemp()
{
    unsigned int v0;  // [bp-0xcc]
    char v1;  // [bp-0xc8]
    unsigned long|unsigned int v10;  // r8d
    unsigned long long v11;  // r12
    unsigned int v12;  // r13d
    struct_2 *v13;  // r14
    struct_0 *v14;  // fs
    char v2;  // [bp-0xc0]
    unsigned long v3;  // [bp-0x40]
    struct_2 * v7;  // rbx
    struct_2 * v8;  // rbp
    char *v9;  // rdi

    v7 = &temphead;
    v8 = temphead;
    if (v9 != temphead + 13)
    {
        do
        {
            v7 = v8;
            v8 = v8->field_0;
        }
        while (v9 != v8 + 13);
    }
    if (v8->field_c == 1)
    {
        wait_proc();
    }
    v13 = v8->field_0;
    v1 = ((char)(pthread_sigmask(0x0, &caught_signals, ((int)&v2)) == 0));
    v12 = unlink(v9);
    v10 = ((long long)*(__errno_location()));
    v7->field_0 = v13;
    if (v1 == 0)
    {
    }
    else
    {
        v0 = ((int)v10);
        cs_leave.part.0();
        v10 = ((int)v0);
    }
    if (!(v12 == 0))
    {
        v0 = v10;
        v11 = (long long)quotearg_n_style_colon();
        error(0x0, v0, dcgettext(0x0, &g_416ba6, 0x5));
        if (v13 != 0)
        {
            rpl_free();
            return v3 ^ *(v14 + 0x28);
        }
        temptail = v7;
        rpl_free();
        return v3 ^ *(v14 + 0x28);
    }
    else if (v13 != 0)
    {
        rpl_free();
        return v3 ^ *(v14 + 0x28);
    }
    else
    {
        temptail = v7;
        rpl_free();
        return v3 ^ *(v14 + 0x28);
    }
}
