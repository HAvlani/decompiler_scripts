typedef struct struct_0 {
    char padding_0[104];
    unsigned long long field_68;
    unsigned long long field_70;
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    unsigned long long field_90;
    unsigned int field_98;
} struct_0;

extern unsigned int g_412a4e;
extern unsigned int g_412a5f;

int debug_print_relative_time.part.0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v3;  // rbx
    struct_0 *v4;  // rbx
    struct_0 * v5;  // rsi
    unsigned long long v6;  // rdi

    v0 = v3;
    v4 = v5;
    dcgettext(0x0, &g_412a4e, 0x5);
    dbg_printf();
    if (!(v5->field_68 == 0))
    {
        v6 = (long long)print_rel_part.part.0();
        if (v5->field_70 == 0)
        {
            v5 = v5->field_78;
        }
    }
    else if (v5->field_78 == 0)
    {
        if (v5->field_80 == 0)
        {
            if (v5->field_88 == 0)
            {
                if (v5->field_90 == 0)
                {
                    if (v5->field_98 == 0)
                    {
                        dcgettext(0x0, &g_412a5f, 0x5);
                    }
                }
            }
        }
    }
    if (v5->field_68 == 0 && v5->field_70 != 0 || v5->field_68 != 0 && v5->field_70 != 0)
    {
        v6 = (long long)print_rel_part.part.0();
    }
    if (v5->field_68 != 0 && v5 != 0 || v5 != 0 && v5->field_70 != 0 || v5->field_68 == 0 && v5->field_70 == 0 && v5->field_78 != 0)
    {
        v6 = (long long)print_rel_part.part.0();
    }
    if (v5->field_68 != 0 || v5->field_78 != 0 || v5->field_70 != 0 || v5->field_98 != 0 || v5->field_88 != 0 || v5->field_90 != 0 || v5->field_80 != 0)
    {
        if (v4->field_80 != 0)
        {
            v6 = (long long)print_rel_part.part.0();
        }
        if (v4->field_88 != 0)
        {
            print_rel_part.part.0();
        }
        if (v4->field_90 != 0)
        {
            print_rel_part.part.0();
        }
        if (((long long)v4->field_98) != 0)
        {
            print_rel_part.part.0();
        }
    }
}
