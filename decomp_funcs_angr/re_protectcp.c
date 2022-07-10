typedef struct struct_1 {
    char padding_0[28];
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[36];
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[40];
    char field_90;
    char padding_91[7];
    unsigned long long field_98;
    unsigned long long field_a0;
} struct_1;

extern char g_4047f3;
extern char g_4048a6;
extern char g_4048bb;
extern char g_4048d1;
extern char g_4048d9;
extern char g_4048ea;
extern char g_40490f;
extern char g_40491f;
extern char g_404940;
extern char g_404969;
extern char g_404997;
extern char g_4049ac;
extern char g_4049c2;
extern char g_4049ca;
extern char g_4049db;
extern char g_404a2a;
extern unsigned int g_413460;

int re_protect()
{
    BOT tmp_19;  // tmp #19
    BOT tmp_36;  // tmp #36
    BOT tmp_42;  // tmp #42
    unsigned long v0;  // [bp-0x1088]
    unsigned long v1;  // [bp-0x88]
    unsigned long v10;  // [bp-0x20]
    unsigned long v11;  // [bp-0x18]
    unsigned long v12;  // [bp-0x10]
    unsigned long v13;  // [bp-0x8]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long|unsigned long long v17;  // rcx
    unsigned long v18;  // rdx
    unsigned long v2;  // [bp-0x78]
    unsigned long|unsigned long long v20;  // rdx
    struct_1 * v21;  // rbx
    unsigned long|void * v23;  // rsi
    unsigned int v24;  // esi
    void *v25;  // rdi
    unsigned long long v27;  // r8
    unsigned long long v29;  // r8
    unsigned long|char v3;  // [bp-0x70]
    char *v30;  // r12
    unsigned long long|unsigned int v31;  // r13
    unsigned int v32;  // r14d
    char v33[32];  // r15
    char v34;  // cc_dep1
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x30]
    unsigned long v9;  // [bp-0x28]

    v33 = v29;
    v32 = v24;
    v31 = v25;
    v21 = v17;
    v3 = v18;
    rsp<8> = &stack_base-128;
    v16 = strlen(v25);
    v16 + 1 = v16 + 1;
    v15 = &stack_base-120 - (v16 + 24 & 0xfffffffefffff000);
    if (&stack_base-120 != &stack_base-120 - (v16 + 24 & 0xfffffffefffff000))
    {
        do
        {
            rsp<8> = rsp<8> - 0x1000;
            v1 = v0;
        }
        while (rsp<8> != v15);
    }
    v20 = ((long long)(((int)(v16 + 24 & 0xfffffffefffffff0)) & 4095));
    rsp<8> = rsp<8> - v20;
    if (v20 != 0)
    {
        v13 = v13;
    }
    v23 = v25;
    rsp<8> = rsp<8> - 8;
    v13 = &g_4047f3;
    v30 = memcpy(rsp<8> + 15 & 0xfffffffefffffff0, v23, v16 + 1);
    v31 = ((int)(v3 - v31 + v30));
    if (v17 != 0)
    {
        v2 = &v4;
        while (true)
        {
            v34 = ((char)v33[31]);
            *(v30 + v21->field_98) = 0;
            if (v34 != 0)
            {
                tmp_19 = v21->field_50;
                v4 = v21->field_48;
                tmp_36 = v21->field_58;
                v5 = tmp_19;
                tmp_42 = v21->field_60;
                v6 = tmp_36;
                v7 = tmp_42;
                rsp<8> = rsp<8> - 8;
                v12 = &g_4048a6;
                v15 = utimensat(v32, v31, ((int)&v4), 0x0);
                if (v15 != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v11 = &g_4048bb;
                    v31 = (long long)quotearg_style();
                    rsp<8> = rsp<8> - 8;
                    v10 = &g_4048d1;
                    rsp<8> = rsp<8> - 8;
                    v9 = &g_4048d9;
                    v23 = ((long long)*(__errno_location()));
                    rsp<8> = rsp<8> - 8;
                    v8 = &g_4048ea;
                    error(0x0, v23, dcgettext(0x0, &g_413460, 0x5));
                    v27 = 0;
                    return v27;
                }
            }
            if (v34 == 0 || v15 == 0)
            {
                if (v33[29] != 0)
                {
                    v17 = ((long long)v21->field_20);
                    v20 = ((long long)v21->field_1c);
                    rsp<8> = rsp<8> - 8;
                    v12 = &g_40490f;
                    v15 = fchownat(v32, v31, v20, v17, 0x100);
                    if (v15 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v11 = &g_40491f;
                        v15 = chown_failure_ok();
                        if (((long long)((char)v3)) != 0)
                        {
                            v17 = ((long long)v21->field_20);
                            rsp<8> = rsp<8> - 8;
                            v10 = &g_404940;
                            fchownat(v32, v31, 0xffffffff, v17, 0x100);
                            v16 + 1 = ((long long)v33[30]);
                            if (((long long)v33[30]) != 0)
                            {
                                /* goto 4213072; */
                            }
                        }
                        else
                        {
                            v3 = v15;
                            rsp<8> = rsp<8> - 8;
                            v10 = &g_404a2a;
                            v31 = (long long)quotearg_style();
                            rsp<8> = rsp<8> - 8;
                            v10 = &g_4049c2;
                            rsp<8> = rsp<8> - 8;
                            v9 = &g_4049ca;
                            v23 = ((long long)*(__errno_location()));
                            rsp<8> = rsp<8> - 8;
                            v8 = &g_4049db;
                            error(0x0, v23, dcgettext(0x0, v23, 0x5));
                            v27 = ((long long)v3);
                            return v27;
                        }
                    }
                }
                if (v15 == 0 || v33[29] == 0)
                {
                    v16 + 1 = ((long long)v33[30]);
                }
                if (v21->field_90 != 0 && (((long long)v33[30]) == 0 || v15 != 0) && (((long long)v33[30]) == 0 || v33[29] != 0) && (((long long)v33[30]) == 0 || v15 == 0 || v33[29] == 0) && (v15 == 0 || v33[29] == 0 || ((long long)((char)v3)) != 0))
                {
                    v3 = r8b<1>;
                    rsp<8> = rsp<8> - 8;
                    v12 = &g_404997;
                    v15 = rpl_fchmodat();
                    if (v15 != 0)
                    {
                        rsp<8> = rsp<8> - 8;
                        v11 = &g_4049ac;
                        v31 = (long long)quotearg_style();
                        rsp<8> = rsp<8> - 8;
                        v10 = &g_4049c2;
                        rsp<8> = rsp<8> - 8;
                        v9 = &g_4049ca;
                        v23 = ((long long)*(__errno_location()));
                        rsp<8> = rsp<8> - 8;
                        v8 = &g_4049db;
                        error(0x0, v23, dcgettext(0x0, v23, 0x5));
                        v27 = ((long long)v3);
                        return v27;
                    }
                }
                if ((v15 != 0 || ((long long)v33[30]) != 0) && (((long long)v33[30]) != 0 || v33[29] != 0) && (v15 == 0 || v33[29] == 0 || ((long long)v33[30]) != 0) && (v15 == 0 || v33[29] == 0 || ((long long)((char)v3)) != 0))
                {
                    rsp<8> = rsp<8> - 8;
                    v12 = &g_404969;
                    v15 = copy_acl();
                    if (v15 != 0)
                    {
                        v27 = 0;
                        return v27;
                    }
                }
                if (...)
                {
                    *(v30 + v21->field_98) = 47;
                    v21 = v21->field_a0;
                    v27 = 1;
                    return v27;
                }
            }
        }
    }
    v27 = 1;
    return v27;
}
