typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_4040f0;
extern char g_404192;
extern char g_404201;
extern char g_404209;
extern char g_40421e;
extern char g_404238;

int wc_lines.part.0()
{
    unsigned long v0;  // [bp-0x20a0]
    unsigned long v1;  // [bp-0x2098]
    unsigned long v10;  // [bp-0x2050]
    char v11;  // [bp-0x2048]
    char v12;  // [bp-0x2047]
    unsigned long v13;  // [bp-0x2030]
    unsigned long v14;  // [bp-0x1030]
    unsigned long v15;  // [bp-0x30]
    unsigned long v16;  // [bp-0x20]
    unsigned long v17;  // [bp-0x18]
    unsigned long v18;  // [bp-0x10]
    unsigned long v19;  // [bp-0x8]
    unsigned long v2;  // [bp-0x2090]
    unsigned long v21;  // [bp+0x1fa0]
    unsigned long v22;  // [bp+0x1fb0]
    unsigned long long v23;  // [bp+0x1fc0]
    unsigned long v24;  // [bp+0x1fc8]
    unsigned long long v25;  // [bp+0x1fd0]
    unsigned long long v26;  // [bp+0x1fd8]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long v29;  // rcx
    unsigned long v3;  // [bp-0x2088]
    unsigned long|unsigned long long v30;  // rdx
    unsigned long long v31;  // rbx
    unsigned long|char * v32;  // rbx
    unsigned long long v33;  // rbp
    unsigned long v34;  // rsi
    unsigned long v35;  // rdi
    unsigned long long v36;  // r12
    unsigned long long v37;  // r12
    unsigned long v38;  // r12
    unsigned long long v39;  // r13
    unsigned long v4;  // [bp-0x2080]
    unsigned long v40;  // r13
    unsigned long long v41;  // r13
    unsigned long v42;  // r14
    unsigned long long v43;  // r14
    unsigned long long v44;  // r14
    unsigned long v45;  // r15
    unsigned long long v46;  // r15
    struct_0 *v47;  // fs
    unsigned long long v5;  // [bp-0x2078]
    unsigned long v6;  // [bp-0x2070]
    unsigned long long v7;  // [bp-0x2068]
    struct_0 *v8;  // [bp-0x2060]
    unsigned long v9;  // [bp-0x2058]

    v19 = v45;
    v18 = v42;
    v17 = v40;
    v16 = v38;
    rsp<8> = &stack_base-48;
    v15 = v32;
    do
    {
        rsp<8> = rsp<8> - 0x1000;
        v14 = v13;
    }
    while (rsp<8> != &stack_base-16432);
    rsp<8> = rsp<8> - 72;
    v44 = 0;
    v39 = 0;
    v10 = v35;
    v37 = &v11;
    v8 = v30;
    v9 = v29;
    v23 = *(v47 + 0x28);
    v7 = 0;
    while (true)
    {
        rsp<8> = rsp<8> - 8;
        v4 = &g_4040f0;
        v27 = safe_read();
        if (v27 == 0)
        {
            v8->field_0 = v6;
            *(v7) = v39;
            v28 = 1;
            if ((v21 ^ *(v47 + 0x28)) == 0)
            {
                v31 = v22;
                v36 = v23;
                v41 = v24;
                v43 = v25;
                v46 = v26;
                return v28;
            }
            rsp<8> = rsp<8> - 8;
            v0 = &g_404238;
            __stack_chk_fail(); /* do not return */
        }
        else if (v27 != 18446744069414584319)
        {
            v6 += v27;
            v32 = v27 + v27;
            v5 = ((long long)(v27 * 9838263505978427529 >> 64)) >> 3;
            if (((long long)v44) != 0)
            {
                *(v32) = 10;
                v33 = v39;
                while (true)
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_404192;
                    v27 = rawmemchr();
                    if (v32 <= v27)
                    {
                        break;
                    }
                    v33 += 1;
                }
                v39 = v33;
                v44 = ((char)(v33 - 0 <= v4));
            }
            else if (v32 != v27)
            {
                v30 = v39;
                v27 = r12<8>;
                do
                {
                    v27 = &v12;
                    v30 += ((long long)(v11 == 10));
                }
                while (v32 != v27);
                v39 = v30;
                v44 = ((char)(v30 - 0 <= v5));
            }
            else
            {
                v44 = 1;
            }
        }
        else
        {
            rsp<8> = rsp<8> - 8;
            v3 = &g_404201;
            v37 = (long long)quotearg_n_style_colon();
            rsp<8> = rsp<8> - 8;
            v2 = &g_404209;
            v34 = ((long long)*(__errno_location()));
            rsp<8> = rsp<8> - 8;
            v1 = &g_40421e;
            error(0x0, v34, "%s");
            v28 = 0;
            if ((v21 ^ *(v47 + 0x28)) == 0)
            {
                v31 = v22;
                v36 = v23;
                v41 = v24;
                v43 = v25;
                v46 = v26;
                return v28;
            }
            rsp<8> = rsp<8> - 8;
            v0 = &g_404238;
            __stack_chk_fail(); /* do not return */
        }
    }
}
