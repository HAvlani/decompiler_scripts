typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40a009;
extern unsigned int g_40a00f;
extern unsigned int g_40a015;
extern char g_40f019;
extern char include_exit;
extern char include_idle;
extern char short_output;
extern struct_1 time_format_width;

int print_line()
{
    BOT tmp_57;  // tmp #57
    unsigned long v0;  // [bp-0xd8]
    unsigned long v1;  // [bp-0xd0]
    unsigned long|char * v10;  // [bp-0x78]
    unsigned long|char * v11;  // [bp-0x70]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x55]
    char v14;  // [bp-0x4d]
    unsigned long v15;  // [bp-0x40]
    unsigned long v16;  // [bp+0x8]
    char *v17;  // [bp+0x10]
    unsigned long v18;  // [bp+0x18]
    char v19;  // [bp+0x20]
    unsigned long v2;  // [bp-0xc8]
    char * v21;  // rax
    unsigned long long v24;  // rax
    char|char * v27;  // rdx
    unsigned long long v28;  // rbp
    unsigned long v3;  // [bp-0xc0]
    char *v30;  // rdi
    unsigned long v31;  // r8
    char *|unsigned long long v32;  // r9
    unsigned long v33;  // r9
    struct_0 *v34;  // fs
    unsigned long v4;  // [bp-0xb8]
    unsigned long v5;  // [bp-0xb0]
    unsigned long|char * v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0x90]
    unsigned long v8;  // [bp-0x88]
    unsigned long v9;  // [bp-0x80]

    v28 = ((long long)short_output);
    tmp_57 = v18;
    v8 = v33;
    v7 = v31;
    v9 = tmp_57;
    v32 = v17;
    g_40f019 = v27;
    if (include_idle != 0)
    {
        if (((long long)short_output) == 0)
        {
            v30 = v16;
            v10 = v17;
            v24 = strlen(v30);
            v32 = v10;
            if (v24 <= 6)
            {
                v31 = v16;
                v10 = &stack_base-85;
                v11 = v32;
                __sprintf_chk(((int)&stack_base-85), 0x1, 0x8, &g_40a009, v31);
                v28 = ((long long)short_output);
                v32 = v11;
            }
        }
    }
    if (include_idle == 0 || v24 > 6 || ((long long)short_output) != 0)
    {
        v13 = 0;
        v10 = &stack_base-85;
    }
    if (((long long)v28) == 0)
    {
        v11 = v32;
        v24 = strlen(v32);
        if (v24 <= 11)
        {
            __sprintf_chk(((int)&v14), 0x1, 0xd, &g_40a00f, ((int)v11));
        }
    }
    if (((long long)v28) != 0 || v24 > 11)
    {
        v14 = 0;
    }
    if (include_exit == 0)
    {
        *(v6) = 0;
    }
    else
    {
        __sprintf_chk(((int)v6), 0x1, 0xffffffff, &g_40a015, ((int)v19));
    }
    v6 = (long long)xmalloc();
    v5 = v9;
    v4 = &v14;
    v3 = v10;
    v2 = v8;
    v1 = ((long long)time_format_width);
    v0 = v7;
    if (rpl_asprintf() != -1)
    {
        v21 = strlen(v12) + v12;
        do
        {
            v27 = v21;
            v21 -= 1;
        }
        while (*(v21) == 32);
        *(v27) = 0;
        puts(v12);
        rpl_free();
        rpl_free();
        return v15 ^ *(v34 + 0x28);
    }
    xalloc_die(); /* do not return */
}
