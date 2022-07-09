typedef struct struct_0 {
    char padding_0[60];
    char field_3c;
} struct_0;

extern unsigned int g_4161d0;

int do_move()
{
    BOT tmp_25;  // tmp #25
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    char v10;  // [bp-0x4f]
    char|unsigned short v11;  // [bp-0x4e]
    unsigned long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long v17;  // rdi
    struct_0 *v18;  // r8
    unsigned long long v19;  // r13
    char v2;  // [bp-0x6a]
    char v3;  // [bp-0x69]
    char v4;  // [bp-0x68]
    unsigned int v5;  // [bp-0x64]
    unsigned short v6;  // [bp-0x60]
    char v7;  // [bp-0x5e]
    unsigned long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]

    v1 = &stack_base-105;
    v0 = &stack_base-106;
    v16 = copy();
    if (!(((long long)v16) != 0))
    {
        return v16;
    }
    else if (v2 != 0)
    {
        v16 = 0;
        return v16;
    }
    else
    {
        v16 = ((long long)v3);
        if (((long long)v3) != 0)
        {
            return v16;
        }
        v4 = 0;
        v5 = 5;
        v6 = 0x100;
        v7 = 1;
        v10 = 0;
        v11 = 0x100;
        v8 = (long long)get_root_dev_ino();
        if (v8 != 0)
        {
            v15 = ((long long)v18->field_3c);
            v9 = 0;
            v12 = v17;
            tmp_25 = v15;
            v11 = tmp_25;
            v13 = 0;
            v16 = rm();
            if (((int)(v16 - 2)) <= 2)
            {
                v16 = ((char)(((int)v16) != 4));
                return v16;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        else
        {
            v19 = (long long)quotearg_style();
            error(0x1, *(__errno_location()), dcgettext(0x0, &g_4161d0, 0x5));
        }
    }
}
