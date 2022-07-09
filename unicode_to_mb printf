extern unsigned int g_40b39c;
extern unsigned int initialized.4563;
extern struct_0 is_utf8.4564;
extern struct_1 utf8_to_local.4565;

int unicode_to_mb()
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v10;  // rcx
    unsigned long v11;  // rdx
    char|unsigned long long|unsigned int v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rsi
    unsigned long long|char * v16;  // rsi
    unsigned long long v17;  // rdi
    unsigned long long|char * v18;  // rdi
    unsigned long long v19;  // r8
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r14
    unsigned long long v22;  // cc_dep1
    unsigned long long v23;  // cc_dep2
    unsigned long v24;  // d
    unsigned long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    char v5;  // [bp-0x6e]
    char v6;  // [bp-0x68]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v21 = v10;
    v20 = v11;
    v14 = v18;
    v13 = v16;
    v12 = ((long long)is_utf8.4564);
    if (initialized.4563 == 0)
    {
        v16 = (long long)locale_charset();
        v18 = "UTF-8";
        while (v10 != 0)
        {
            v10 -= 1;
            v22 = ((long long)*(v16));
            v23 = ((long long)*(v18));
            v18 += v24;
            v16 += v24;
            break;
        }
        v12 = 0;
        v10 = ((long long)(((char)(v22 > v23)) - 0 - ((char)(v22 < v23))));
        v12 = ((char)(((char)(v22 > v23)) - 0 - ((char)(v22 < v23)) == 0));
        is_utf8.4564 = ((int)(((char)(v22 > v23)) - 0 - ((char)(v22 < v23)) == 0));
        if (((char)(v22 > v23)) - ((char)(v22 < v23)) != 0)
        {
            utf8_to_local.4565 = iconv_open(((int)v16), &g_40b396);
            if (utf8_to_local.4565 == 18446744069414584319)
            {
                utf8_to_local.4565 = iconv_open(&g_40b39c, &g_40b396);
            }
            v12 = ((int)is_utf8.4564);
        }
        initialized.4563 = 1;
    }
    if (v12 == 0)
    {
        if (utf8_to_local.4565 == 18446744069414584319)
        {
            v15 = "iconv function not usable";
            v17 = ((long long)v5);
            v9 = r12<8>();
            return v9;
        }
    }
    if (v12 != 0 || utf8_to_local.4565 != 18446744069414584319)
    {
        if (v5 <= 127)
        {
            v5 = v14;
            v15 = 1;
        }
        else
        {
            v15 = (long long)u8_uctomb_aux();
            if (((int)v15) < 0)
            {
                v12 = ((long long)is_utf8.4564);
                v15 = "character out of range";
                v17 = ((long long)v5);
                v9 = r12<8>();
                return v9;
            }
        }
        if (v5 <= 127 || ((int)v15) >= 0)
        {
            if (v12 != 0)
            {
                v12 = v21;
                v17 = &v5;
                v9 = rbx<8>();
                return v9;
            }
            v1 = &v5;
            v2 = v15;
            v3 = &stack_base-104;
            v4 = 25;
            v0 = &v4;
            v8 = iconv(((int)utf8_to_local.4565), ((int)&v1), ((int)&v2), ((int)&v3), ((int)&v4));
            if (!(v2 == 0))
            {
                v15 = 0;
                v17 = ((long long)v5);
                v9 = r12<8>();
                return v9;
            }
            else if (v8 != 18446744069414584319)
            {
                v19 = v0;
                if (v8 != 0)
                {
                    if (v3 - &stack_base-104 == 1)
                    {
                        if (v6 == 63)
                        {
                            v15 = 0;
                            v17 = ((long long)v5);
                            v9 = r12<8>();
                            return v9;
                        }
                    }
                }
                if (v8 == 0 || v3 - &stack_base-104 != 1 || v6 != 63)
                {
                    v8 = iconv(((int)utf8_to_local.4565), 0x0, 0x0, ((int)&v3), ((int)&v4));
                    if (v8 != 18446744069414584319)
                    {
                        v17 = &stack_base-104;
                        v15 = v3 - &stack_base-104;
                        v9 = rbx<8>();
                        return v9;
                    }
                    else
                    {
                        v15 = 0;
                        v17 = ((long long)v5);
                        v9 = r12<8>();
                        return v9;
                    }
                }
            }
            else
            {
                v15 = 0;
                v17 = ((long long)v5);
                v9 = r12<8>();
                return v9;
            }
        }
    }
}
