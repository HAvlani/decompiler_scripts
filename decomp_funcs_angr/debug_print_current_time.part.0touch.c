typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[4];
    unsigned int field_14;
    char padding_18[4];
    unsigned int field_1c;
    char padding_20[8];
    unsigned long long field_28;
    char padding_30[8];
    unsigned long long field_38;
    char padding_40[8];
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[56];
    char field_a0;
    char padding_a1[7];
    unsigned long long field_a8;
    unsigned long long field_b0;
    unsigned long long field_b8;
    unsigned long long field_c0;
    unsigned long long field_c8;
    unsigned long long field_d0;
    char field_d8;
    char padding_d9[1];
    char field_da;
    char field_db;
    char field_dc;
    char field_dd;
    char field_de;
    char field_df;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_412a4e;
extern unsigned int g_412ad0;
extern unsigned int g_412aea;
extern unsigned int g_412b09;
extern unsigned int g_412b1e;
extern <missing-type> g_412ce5;
extern unsigned int g_413068;
extern struct_0 stderr;

int debug_print_current_time.part.0()
{
    BOT tmp_33;  // tmp #33
    BOT tmp_42;  // tmp #42
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x30]
    struct_0 *v10;  // fs
    unsigned long long v4;  // rdx
    struct_1 *v5;  // rbx
    struct_1 *v6;  // rsi
    unsigned int v7;  // r8d
    unsigned long|unsigned long long|unsigned int v8;  // r12d
    char|unsigned long long v9;  // cc_dep1

    v5 = v6;
    dcgettext(0x0, &g_412a4e, 0x5);
    dbg_printf();
    if (v6->field_a8 != 0)
    {
        if (v6->field_da == 0)
        {
            __fprintf_chk(((int)stderr), 0x1, &g_412ad0, ((int)v5->field_28), ((int)v5->field_38));
            v5->field_da = 1;
            v4 = 1;
            if (v5->field_d8 != v5->field_df)
            {
                fputc(0x20, stderr);
            }
        }
    }
    if (v6->field_a8 == 0 || v6->field_da != 0)
    {
        v4 = 0;
    }
    if (v6->field_a8 == 0 && v5->field_d8 != v5->field_df || v5->field_d8 != v5->field_df && v6->field_da != 0 || v6->field_da == 0 && v6->field_a8 != 0 && v5->field_d8 != v5->field_df)
    {
        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_412aea, 0x5), ((int)v6->field_28), v7);
        v4 = 1;
        v5->field_df = v5->field_d8;
    }
    if (v5->field_c8 != 0)
    {
        if (v5->field_dd == 0)
        {
            v4 = ((long long)(((int)v4) ^ 1));
            tmp_33 = v4;
            __fprintf_chk(((int)stderr), 0x1, ((int)(((long long)tmp_33) + " %02ld:%02ld:%02ld")), ((int)v5->field_48), ((int)v5->field_50));
            if (v5->field_60 != 0)
            {
                __fprintf_chk(((int)stderr), 0x1, &g_412b09, ((int)v6->field_60), v7);
            }
            if (v5->field_1c == 1)
            {
                fwrite("pm", 0x1, 0x2, stderr);
            }
            v9 = v5->field_b0;
            v5->field_dd = 1;
            if (v9 != 0)
            {
                v4 = ((long long)v5->field_db);
            }
        }
    }
    if ((v5->field_dd == 0 || v5->field_db == 0) && (v5->field_dd == 0 || v5->field_b0 != 0) && (v5->field_db == 0 || v5->field_c8 != 0) && (v5->field_c8 != 0 || v5->field_b0 != 0) && (v5->field_c8 == 0 || ((long long)v5->field_db) == 0 || v5->field_dd != 0) && (v5->field_c8 == 0 || v5->field_dd != 0 || v9 != 0))
    {
        if ((v5->field_dd == 0 || ((long long)v4) != 0) && (((long long)v4) != 0 || v5->field_c8 != 0))
        {
            fputc(0x20, stderr);
        }
        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_413068, 0x5), str_days.constprop.0(), ((int)v6->field_8));
        v5->field_db = 1;
    }
    if (v5->field_b8 != 0)
    {
        if (v5->field_dc == 0)
        {
            v4 = ((long long)(((int)v4) ^ 1));
            tmp_42 = v4;
            __fprintf_chk(((int)stderr), 0x1, ((int)(((long long)tmp_42) + " isdst=%d%s")), v5->field_14, ((int)(v5->field_c0 == 0? &g_412ce5 : " DST")));
            v9 = v5->field_d0;
            v5->field_dc = 1;
            if (v9 != 0)
            {
                if (v5->field_de == 0)
                {
                    v8 = &g_412ac9;
                }
            }
            if (v9 == 0 || v5->field_de != 0)
            {
                if (v5->field_a0 == 0)
                {
                    fputc(0xa, stderr);
                    return v0 ^ *(v10 + 0x28);
                }
            }
        }
    }
    if (v5->field_b8 == 0 || v5->field_dc != 0)
    {
        if (v5->field_d0 != 0)
        {
            if (v5->field_de == 0)
            {
                v4 = ((long long)(((int)v4) ^ 1));
                tmp_13 = v4;
                v8 = ((long long)tmp_13) + " UTC%s";
            }
        }
        if (v5->field_a0 != 0 && (v5->field_d0 == 0 || v5->field_de != 0))
        {
            v8 = v5->field_58;
            if (((long long)v4) == 0)
            {
                __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_412b1e, 0x5), v8, v7);
                fputc(0xa, stderr);
                return v0 ^ *(v10 + 0x28);
            }
        }
        if (v5->field_a0 == 0 && (v5->field_d0 == 0 || v5->field_de != 0))
        {
            fputc(0xa, stderr);
            return v0 ^ *(v10 + 0x28);
        }
    }
    if ((v5->field_de == 0 || v5->field_dc == 0) && (v5->field_de == 0 || v5->field_b8 != 0) && (v5->field_dc == 0 || v5->field_d0 != 0) && (v5->field_b8 != 0 || v5->field_d0 != 0))
    {
        if (v5->field_b8 == 0 || v5->field_dc != 0 || v5->field_de == 0 && v9 != 0)
        {
            __fprintf_chk(((int)stderr), 0x1, v8, time_zone_str(), v7);
            v9 = ((char)v5->field_a0);
            v5->field_de = 1;
            if (v9 == 0)
            {
                fputc(0xa, stderr);
                return v0 ^ *(v10 + 0x28);
            }
        }
        if ((v5->field_dc == 0 || v9 != 0) && (v5->field_b8 != 0 || v9 != 0) && (v9 == 0 || v5->field_de != 0 || v9 != 0) && (v5->field_de == 0 || v5->field_b8 == 0 || v5->field_a0 != 0 || v5->field_dc != 0) && (v5->field_b8 == 0 || v5->field_a0 != 0 || v9 != 0 || v5->field_dc != 0))
        {
            v8 = v5->field_58;
        }
    }
    if (...)
    {
        fputc(0x20, stderr);
        __fprintf_chk(((int)stderr), 0x1, dcgettext(0x0, &g_412b1e, 0x5), v8, v7);
        fputc(0xa, stderr);
        return v0 ^ *(v10 + 0x28);
    }
}
