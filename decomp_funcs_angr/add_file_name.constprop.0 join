typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

extern unsigned int g_409c47;
extern struct_2 g_40e1b8;
extern unsigned long long g_names;

int add_file_name.constprop.0()
{
    unsigned int v0;  // [bp-0x44]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v10;  // rcx
    struct_1 *|struct_0 * v11;  // rdx
    unsigned long long v12;  // rbx
    struct_1 *v13;  // rbp
    unsigned long long v14;  // rsi
    unsigned long v15;  // rdi
    unsigned long long v16;  // r8
    struct_1 * v17;  // r9
    unsigned long long v18;  // r9
    unsigned long long v19;  // r9
    unsigned long long v20;  // r9
    struct_1 *v21;  // r12
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v6;  // rax
    unsigned long|unsigned int v8;  // rcx
    struct_1 *v9;  // rcx

    v21 = v16;
    v13 = v9;
    v12 = v14;
    v23 = ((long long)v9->field_0);
    if (v9->field_0 != 2)
    {
        v10 = ((long long)v9->field_0) * 4;
        v6 = ((long long)v23) * 8;
    }
    else
    {
        v8 = ((long long)*(v14));
        if (!(*(v14 + (((long long)(*(v14) == 0)) << 2)) != 2))
        {
            v11->field_4 = v11->field_4 - 1;
            v1 = v18;
            v0 = ((int)v8);
            string_to_join_field();
            set_join_field();
            v8 = ((int)v0);
            v17 = v1;
        }
        else if (((char)(((long long)*(v14 + (((long long)(*(v14) == 0)) << 2))) <= 2)))
        {
            if (!(*(v14 + (((long long)(*(v14) == 0)) << 2)) != 0))
            {
                v22 = (long long)quotearg_style();
                error(0x0, 0x0, dcgettext(0x0, &g_409c47, 0x5));
                usage(); /* do not return */
            }
            else if (*(v14 + (((long long)(*(v14) == 0)) << 2)) == 1)
            {
                v11->field_0 = v11->field_0 - 1;
                v1 = v20;
                v0 = ((int)v8);
                string_to_join_field();
                set_join_field();
                v8 = ((long long)v0);
                v17 = v1;
            }
        }
        else
        {
            if (*(v14 + (((long long)(*(v14) == 0)) << 2)) == 3)
            {
                v1 = v19;
                v0 = ((int)v8);
                add_field_list();
                v17 = v1;
                v8 = ((long long)v0);
            }
        }
        if (...)
        {
            if (v8 != 0)
            {
                v10 = 4;
                *(v12) = *(v12 + 4);
                g_names = g_40e1b8;
                v6 = 8;
            }
            else
            {
                v6 = 8;
                v10 = 4;
            }
        }
    }
    if (...)
    {
        *(v14 + v10) = v21->field_0;
        *(v6 + 4252080) = v15;
        v13->field_0 = v23;
        if (v21->field_0 == 3)
        {
            v17->field_0 = 3;
            return v6;
        }
        return v6;
    }
}
