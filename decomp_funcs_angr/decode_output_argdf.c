typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern <missing-type> field_data;
extern unsigned long long g_418028;

int decode_output_arg()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned long|struct_1 * v10;  // rbx
    unsigned long long v11;  // rbp
    unsigned int v12;  // esi
    unsigned long long v13;  // r12
    unsigned long v14;  // r12
    unsigned long|unsigned long long v15;  // r13
    unsigned long v16;  // r14
    unsigned long long v17;  // r15
    unsigned long v18;  // r15
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char *v7;  // rax
    unsigned long long|char * v9;  // rax

    v5 = v18;
    v4 = v16;
    v3 = v15;
    v2 = v14;
    v1 = v10;
    v7 = xstrdup();
    v0 = v7;
    v17 = v7;
    while (true)
    {
        v15 = 0;
        v9 = strchr(v17, 0x2c);
        if (v9 != 0)
        {
            *(v9) = 0;
            v15 = v9 + 1;
        }
        v10 = &g_418028;
        v11 = 0;
        while (true)
        {
            v9 = strcmp(v10->field_0, v17);
            if (v9 != 0)
            {
                v11 = ((long long)(((int)v11) + 1));
                v10 += 48;
                v13 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, v12, 0x5));
                usage(); /* do not return */
            }
            else if (*(&field_data + (v11 + (v11 << 1) << 4) + 44) == 0)
            {
                if (((int)v11) != 2)
                {
                    if (((int)v11) != 4)
                    {
                        alloc_field();
                    }
                    else
                    {
                        alloc_field();
                    }
                }
                alloc_field();
                if (v15 != 0)
                {
                    v17 = v15;
                    break;
                }
            }
            else
            {
                v13 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, v12, 0x5));
                usage(); /* do not return */
            }
        }
    }
}
