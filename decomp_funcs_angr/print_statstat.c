typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char follow_links;
extern unsigned int g_410208;
extern unsigned int g_411617;
extern unsigned int g_41163c;
extern char g_417162;
extern unsigned long long stdout[7];

int print_stat()
{
    BOT tmp_24;  // tmp #24
    unsigned long v0;  // [bp-0x40]
    struct struct_0 **v1;  // [bp+0x8]
    unsigned long long v15;  // rcx
    unsigned int v16;  // ecx
    char v17;  // dl
    unsigned long long|struct_1 * v18;  // rbx
    struct_4 *v19;  // rbp
    char *v2;  // rax
    struct_4 *v20;  // rsi
    char *v21;  // rdi
    unsigned long v22;  // r9
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15
    unsigned long long v3;  // rax
    unsigned long long v7;  // rax

    v15 = ((long long)v16) - 65;
    tmp_24 = v15;
    switch (((long long)tmp_24))
    {
    case 0:
        filemodestring();
        g_417162 = 0;
        out_string();
        break;
        v3 = v24;
        return v3;
    case 1:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 2:
        v0 = v22;
        v18->field_0 = 95;
        v23 = (long long)quotearg_style();
        error(0x0, *(__errno_location()), dcgettext(0x0, &g_410208, 0x5));
        *(v19 + v20) = 115;
        __printf_chk(0x1, v19);
        break;
        v3 = v24;
        return v3;
    case 3:
        out_uint_x();
        break;
        v3 = v24;
        return v3;
    case 5:
        file_type();
    case 6:
        v7 = getgrgid(*(v1[0] + 32));
        if (v7 == 0)
        {
            out_string();
            v3 = v24;
            return v3;
        }
    case 13:
        v0 = v22;
        get_quoting_style();
        quotearg_style();
        out_string();
        if ((((short)v1[0]->field_18) & 0xf000) != 0xa000)
        {
            v3 = v24;
            return v3;
        }
        v23 = (long long)areadlink_with_size();
        if (v23 != 0)
        {
            __printf_chk(0x1, " -> ");
            get_quoting_style();
            quotearg_style();
            out_string();
            rpl_free();
            v3 = v24;
            return v3;
        }
        else
        {
            v23 = (long long)quotearg_style();
            error(0x0, *(__errno_location()), dcgettext(0x0, &g_411617, 0x5));
            v3 = v24;
            return v3;
        }
    case 17:
        out_uint_x();
        break;
        v3 = v24;
        return v3;
    case 19:
        out_uint_x();
        v3 = v24;
        return v3;
    case 20:
        v7 = getpwuid(*(v1[0] + 28));
        if (v7 == 0)
        {
            out_string();
            v3 = v24;
            return v3;
        }
    case 22:
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(Load(addr=stack_base+8, size=8, endness=Iend_LE) + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            out_epoch_sec();
            v3 = v24;
            return v3;
        }
    case 23:
        out_epoch_sec();
        break;
        v3 = v24;
        return v3;
    case 24:
        out_epoch_sec();
        break;
        v3 = v24;
        return v3;
    case 25:
        out_epoch_sec();
        break;
        v3 = v24;
        return v3;
    case 32:
        make_format();
        __printf_chk(0x1, v21);
        break;
        v3 = v24;
        return v3;
    case 33:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 37:
        out_uint_x();
        break;
        v3 = v24;
        return v3;
    case 38:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 39:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 40:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 44:
        if (follow_links == 0)
        {
            if ((((short)v1[0]->field_18) & 0xf000) == 0xa000)
            {
                v25 = (long long)find_mount_point();
                if (v25 != 0)
                {
                    v18 = (long long)find_bind_mount();
                    out_string();
                    rpl_free();
                    v3 = v24;
                    return v3;
                }
            }
        }
        if (follow_links != 0 || (((short)v1[0]->field_18) & 0xf000) != 0xa000)
        {
            v0 = v22;
            v25 = canonicalize_file_name(((int)v22));
            if (v25 != 0)
            {
                v0 = v0;
                v18 = (long long)find_bind_mount();
                rpl_free();
                if (v18 != 0)
                {
                    out_string();
                    rpl_free();
                    v3 = v24;
                    return v3;
                }
            }
            v24 = (long long)quotearg_style();
            error(0x0, *(__errno_location()), dcgettext(0x0, &g_41163c, 0x5));
        }
        if (...)
        {
            out_string();
            rpl_free();
            v3 = v24;
            return v3;
        }
    case 45:
        out_string();
        break;
        v3 = v24;
        return v3;
    case 46:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 50:
        out_int();
        break;
        v3 = v24;
        return v3;
    case 51:
        out_uint_x();
        v3 = v24;
        return v3;
    case 52:
        out_uint();
        break;
        v3 = v24;
        return v3;
    case 54:
        if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(Load(addr=stack_base+8, size=8, endness=Iend_LE) + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
        {
            human_time();
        }
        else
        {
            out_string();
            v3 = v24;
            return v3;
        }
    case 55:
        /* goto 4212728; */
    case 56:
        /* goto 4212728; */
    case 57:
        /* goto 4212728; */
    default:
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = 63;
            v3 = v24;
            return v3;
        }
        __overflow();
        v3 = v24;
        return v3;
    }
    if (((long long)tmp_24) <= 57)
    {
        v15 = ((long long)v15);
        v19 = v21;
    }
    if (v17 == 72 || v17 == 72)
    {
        out_uint();
        v3 = v24;
        return v3;
    }
    if (v17 != 72 || v17 != 72)
    {
        if (v17 != 76)
        {
            out_uint();
            v3 = v24;
            return v3;
        }
        out_uint();
        v3 = v24;
        return v3;
    }
    if (v7 != 0 || v7 != 0)
    {
        out_string();
        v3 = v24;
        return v3;
    }
    out_string();
    v3 = v24;
    return v3;
}
