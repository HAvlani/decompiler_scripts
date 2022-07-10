typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern <missing-type> abformat;
extern unsigned long long long_time_format;
extern char use_abformat;

int abformat_init()
{
    unsigned long long v0;  // [bp-0x6a8]
    unsigned long v1;  // [bp-0x6a0]
    unsigned long v10;  // [bp-0x40]
    unsigned long long v12;  // rax
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rbp
    unsigned long long v18;  // rsi
    char *|unsigned int v19;  // r12
    unsigned long v2;  // [bp-0x698]
    unsigned long long v20;  // r14
    unsigned long long v21;  // r15
    struct_0 *v22;  // fs
    unsigned long v3;  // [bp-0x688]
    unsigned long long v4;  // [bp-0x680]
    unsigned long long v5;  // [bp-0x678]
    unsigned long long v6;  // [bp-0x670]
    unsigned long long v7;  // [bp-0x660]
    unsigned long long v8;  // [bp-0x658]
    unsigned long v9;  // [bp-0x650]

    v18 = 0;
    v6 = &stack_base-1624;
    while (true)
    {
        v12 = *(v18 + 4337728);
        v15 = ((long long)*(*(v18 + 4337728)));
        if (((long long)*(*(v18 + 4337728))) != 0)
        {
            while (true)
            {
                v14 = ((long long)*(v12 + 1));
                if (v15 == 37 && ((char)v15) == 37)
                {
                    v15 = ((long long)*(v12 + 2));
                    v12 += 1;
                    /* goto 4222179; */
                }
                if (v15 != 37 || ((char)v15) != 98 && ((char)v15) != 37)
                {
                    v15 = v14;
                }
                v12 += 1;
            }
            if (((char)v15) == 37 || v15 != 37 || ((char)v15) != 98)
            {
                v12 = 0;
            }
            else if (v15 == 37 && ((char)v15) != 37)
            {
                v8 = v12;
                v18 += 8;
                if (v18 == 16)
                {
                    break;
                }
            }
        }
        v12 = 0;
    }
    v20 = 12;
    if (v8 == 0)
    {
        if (v9 == 0)
        {
            return v10 ^ *(v22 + 0x28);
        }
    }
    if (v8 != 0 || v9 != 0)
    {
        v4 = &stack_base-1608;
        v3 = &stack_base-72;
        while (true)
        {
            v16 = v4;
            v19 = 131086;
            v17 = 0;
            while (true)
            {
                v7 = v20;
                v12 = strchr(nl_langinfo(v19), 0x25);
                if (v12 == 0)
                {
                    __ctype_b_loc();
                    v12 = mbsalign();
                    if (v12 <= 127)
                    {
                        v17 = (v17 < v7? v7 : v17);
                        ((unsigned int)v19) = ((long long)v19) + 1;
                        v16 -= 18446744069414584192;
                        if (12 > v17)
                        {
                            v20 = v17;
                        }
                        else
                        {
                            v5 = 0;
                            while (true)
                            {
                                v20 = v4;
                                v17 = *(long_time_format + v5 * 8);
                                v21 = *(v6 + v5 * 8);
                                v19 = &abformat + v5 * 0x600;
                                while (true)
                                {
                                    if (v21 == 0)
                                    {
                                        v12 = snprintf(v19, 0x80, "%s", ((int)*(long_time_format + 0 * 8)));
                                    }
                                    else if (v8 - *(long_time_format + (0 << 3)) > 128)
                                    {
                                        return v10 ^ *(v22 + 0x28);
                                    }
                                    else
                                    {
                                        v2 = v21 + 2;
                                        v1 = v20;
                                        v0 = v17;
                                        v12 = __snprintf_chk();
                                    }
                                    if (v8 - *(long_time_format + (0 << 3)) <= 128 || v21 == 0)
                                    {
                                        if (v12 > 127)
                                        {
                                            return v10 ^ *(v22 + 0x28);
                                        }
                                        v19 -= 18446744069414584192;
                                        v20 -= 18446744069414584192;
                                        if (v5 == 1)
                                        {
                                            use_abformat = 1;
                                            return v10 ^ *(v22 + 0x28);
                                        }
                                        else
                                        {
                                            v5 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        return v10 ^ *(v22 + 0x28);
                    }
                }
                else
                {
                    return v10 ^ *(v22 + 0x28);
                }
            }
        }
    }
}
