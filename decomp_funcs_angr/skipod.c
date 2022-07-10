typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40c708;
extern struct_0 *in_stream;

int skip()
{
    BOT tmp_2;  // tmp #2
    BOT tmp_12;  // tmp #12
    char v0;  // [bp-0x20d8]
    unsigned int v1;  // [bp-0x20c0]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rdi
    unsigned long|unsigned int v14;  // r13
    unsigned int v15;  // r13d
    unsigned long v2;  // [bp-0x20a8]
    char v4;  // [bp-0x2048]
    unsigned long v5;  // [bp-0x2030]
    unsigned long v6;  // [bp-0x1030]
    unsigned long long v8;  // rax
    unsigned long v9;  // rax

    v6 = v6;
    v5 = v5;
    if (v12 != 0)
    {
        (long long)quotearg_n_style_colon() = in_stream;
        v11 = v12;
        v14 = 1;
        if (in_stream != 0)
        {
            while (true)
            {
                v8 = __fxstat(0x1, fileno((long long)quotearg_n_style_colon()), ((int)&v0));
                if (v8 == 0)
                {
                    if ((((short)v1) & 0xd000) != 0x8000)
                    {
                        v8 = rpl_fseeko();
                        if (v8 != 0)
                        {
                            v9 = v14;
                            return v9;
                        }
                    }
                    else if (v2 > (!(*(&stack_base-8352) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-8352)))
                    {
                        if (v2 < v11)
                        {
                            v11 -= v2;
                        }
                        else
                        {
                            v14 = ((long long)(rpl_fseeko() != 0? 0 : ((int)r13<8>)));
                        }
                    }
                    if (((((short)v1) & 0xd000) == 0x8000 || v8 != 0) && (v2 <= (!(*(&stack_base-8352) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-8352)) || (((short)v1) & 0xd000) != 0x8000))
                    {
                        v10 = 0x2000;
                        while (true)
                        {
                            tmp_2 = v10;
                            tmp_12 = !(v10 <= v11);
                            v10 = (!(v10 <= v11)? v11 : v10);
                            v8 = __fread_unlocked_chk(((int)&v4), 0x2000, 0x1, ((int)(tmp_12? v11 : tmp_2)), ((int)in_stream));
                            v11 -= v8;
                            if (v10 != v8)
                            {
                                if (((long long)(((char)*(in_stream)) & 32)) != 0)
                                {
                                    v14 = 0;
                                    v9 = v14;
                                    return v9;
                                }
                                else if (((long long)(((char)*(in_stream)) & 16)) != 0)
                                {
                                    v9 = v14;
                                    return v9;
                                }
                            }
                            if (v10 == v8 || ((long long)(((char)*(in_stream)) & 16)) == 0 && ((long long)(((char)*(in_stream)) & 32)) == 0)
                            {
                                v9 = v14;
                                return v9;
                            }
                        }
                    }
                }
                v14 = 0;
                error(0x0, *(__errno_location()), "%s");
                if (v8 != 0 || (((short)v1) & 0xd000) == 0x8000 && v2 < v11 || (((short)v1) & 0xd000) == 0x8000 && v2 <= (!(*(&stack_base-8352) - 1 <= 2305843009213693951)? 0x200 : *(&stack_base-8352)) || v8 != 0 && (((short)v1) & 0xd000) != 0x8000)
                {
                    v15 = ((int)(v14 & check_and_close()));
                    (long long)quotearg_n_style_colon() = in_stream;
                    v14 = ((long long)(v15 & open_next_file()));
                    error(0x1, 0x0, dcgettext(0x0, &g_40c708, 0x5));
                }
            }
            v9 = v14;
            return v9;
        }
        error(0x1, 0x0, dcgettext(0x0, &g_40c708, 0x5));
    }
    else
    {
        v14 = 1;
        v9 = v14;
        return v9;
    }
}
