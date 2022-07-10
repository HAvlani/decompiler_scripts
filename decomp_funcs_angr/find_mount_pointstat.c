typedef struct struct_0 {
    uint128_t field_0;
    uint128_t field_10;
    unsigned int field_18;
    char padding_1c[4];
    uint128_t field_20;
    uint128_t field_30;
    uint128_t field_40;
    uint128_t field_50;
    uint128_t field_60;
    uint128_t field_70;
    uint128_t field_80;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char g_405df6;
extern char g_405e01;
extern char g_405e09;
extern char g_405e29;
extern char g_405e3e;
extern char g_405e54;
extern char g_405e6a;
extern char g_405f38;
extern char g_405fcb;
extern char g_405fe4;
extern char g_405ffa;
extern char g_406010;
extern char g_40601d;
extern char g_40602c;
extern char g_40603c;
extern char g_406079;
extern char g_4060c5;
extern char g_4060db;
extern char g_4060f1;
extern char g_406113;
extern char g_406126;
extern unsigned int g_411ae8;
extern unsigned int g_411b05;
extern unsigned int g_411b23;
extern unsigned int g_411b24;
extern unsigned int g_411b38;
extern unsigned int g_411b60;

int find_mount_point()
{
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x1a0]
    unsigned long v1;  // [bp-0x198]
    BOT v10;  // [bp-0x108]
    BOT v11;  // [bp-0xf8]
    BOT v12;  // [bp-0xe8]
    char v13;  // [bp-0xd8]
    unsigned long v14;  // [bp-0xd0]
    uint128_t v15;  // [bp-0xc8]
    uint128_t v16;  // [bp-0xb8]
    uint128_t v17;  // [bp-0xa8]
    uint128_t v18;  // [bp-0x98]
    uint128_t v19;  // [bp-0x88]
    unsigned long v2;  // [bp-0x190]
    uint128_t v20;  // [bp-0x78]
    BOT v21;  // [bp-0x68]
    BOT v22;  // [bp-0x58]
    unsigned long v23;  // [bp-0x50]
    unsigned long v24;  // [bp-0x48]
    unsigned long v25;  // [bp-0x40]
    unsigned long v26;  // [bp-0x38]
    unsigned long v27;  // [bp-0x30]
    unsigned long v28;  // [bp-0x28]
    unsigned long v29;  // [bp-0x20]
    unsigned long v3;  // [bp-0x188]
    unsigned long v30;  // [bp-0x18]
    unsigned long v31;  // [bp-0x10]
    unsigned long v32;  // [bp-0x8]
    unsigned long long v34;  // rax
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    BOT|uint128_t|char v4;  // [bp-0x168]
    unsigned long long v41;  // rdx
    struct_0 *|unsigned int v43;  // ebx
    unsigned long|struct_0 * v44;  // rsi
    unsigned long v45;  // rsi
    unsigned long long v48;  // r12
    unsigned long long v49;  // r12
    BOT v5;  // [bp-0x158]
    void *v50;  // r12
    unsigned long long v51;  // r12
    unsigned long long v52;  // r12
    struct_1 *v53;  // r13
    unsigned long long|unsigned int v54;  // r15
    uint128_t v55;  // xmm0
    uint128_t v56;  // xmm1
    uint128_t v57;  // xmm2
    uint128_t v58;  // xmm3
    uint128_t v59;  // xmm4
    BOT v6;  // [bp-0x148]
    uint128_t v60;  // xmm5
    uint128_t v61;  // xmm6
    uint128_t v62;  // xmm7
    BOT v7;  // [bp-0x138]
    BOT v8;  // [bp-0x128]
    BOT v9;  // [bp-0x118]

    v43 = v44;
    v54 = save_cwd();
    v53 = __errno_location();
    if (v54 == 0)
    {
        if ((((short)*(v44 + 0x18)) & 0xf000) != 0x4000)
        {
            v50 = (long long)dir_name();
            rsp<8> = &stack_base-384;
            v38 = strlen(v50);
            if (&stack_base-376 != &stack_base-376 - (v38 + 24 & 0xfffffffefffff000))
            {
                do
                {
                    rsp<8> = rsp<8> - 0x1000;
                    v3 = v3;
                }
                while (rsp<8> != &stack_base-376 - (v38 + 24 & 0xfffffffefffff000));
            }
            v41 = ((long long)(((int)(v38 + 24 & 0xfffffffefffffff0)) & 4095));
            rsp<8> = rsp<8> - v41;
            if (v41 != 0)
            {
                v32 = v32;
            }
            rsp<8> = rsp<8> - 8;
            v32 = &g_405df6;
            v54 = memcpy(rsp<8> + 15 & 0xfffffffefffffff0, v50, v38 + 1);
            rsp<8> = rsp<8> - 8;
            v31 = &g_405e01;
            rpl_free();
            rsp<8> = rsp<8> - 8;
            v30 = &g_405e09;
            v34 = chdir();
            if (v34 >= 0)
            {
                rsp<8> = rsp<8> - 8;
                v29 = &g_405e29;
                v34 = __xstat(0x1, &g_411b24, ((int)&v4));
                if (v34 < 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v28 = &g_405e3e;
                    v52 = (long long)quotearg_style();
                    rsp<8> = rsp<8> - 8;
                    v27 = &g_405e54;
                    v44 = ((long long)v53->field_0);
                    v48 = 0;
                    rsp<8> = rsp<8> - 8;
                    v26 = &g_405e6a;
                    error(0x0, v44, dcgettext(0x0, &g_411b38, 0x5));
                    /* goto 4218912; */
                }
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v3 = &g_4060c5;
                v51 = (long long)quotearg_style();
                rsp<8> = rsp<8> - 8;
                v2 = &g_4060db;
                v44 = ((long long)v53->field_0);
                v48 = 0;
                rsp<8> = rsp<8> - 8;
                v1 = &g_4060f1;
                error(0x0, v44, dcgettext(0x0, &g_411b05, 0x5));
                v39 = v48;
                return v39;
            }
        }
        else
        {
            tmp_23 = v43->field_10;
            v58 = v43->field_18;
            v59 = v43->field_20;
            v60 = v43->field_30;
            v61 = v43->field_40;
            v4 = v43->field_0;
            v62 = v43->field_50;
            v56 = v43->field_60;
            v5 = tmp_23;
            v57 = v43->field_70;
            v6 = v58;
            v7 = v59;
            v8 = v60;
            v9 = v61;
            v10 = v62;
            v11 = v56;
            v12 = v57;
            rsp<8> = &stack_base-384;
            v34 = chdir();
            if (v34 < 0)
            {
                rsp<8> = rsp<8> - 8;
                v3 = &g_4060c5;
                v51 = (long long)quotearg_style();
                rsp<8> = rsp<8> - 8;
                v2 = &g_4060db;
                v44 = ((long long)v53->field_0);
                v48 = 0;
                rsp<8> = rsp<8> - 8;
                v1 = &g_4060f1;
                error(0x0, v44, dcgettext(0x0, &g_411b05, 0x5));
                v39 = v48;
                return v39;
            }
        }
        if (((((short)*(v44 + 0x18)) & 0xf000) == 0x4000 || v34 >= 0) && ((((short)*(v44 + 0x18)) & 0xf000) == 0x4000 || v34 >= 0) && ((((short)*(v44 + 0x18)) & 0xf000) != 0x4000 || v34 >= 0))
        {
            while (true)
            {
                rsp<8> = rsp<8> - 8;
                v3 = &g_405fcb;
                v34 = __xstat(0x1, &g_411b23, ((int)&v13));
                if (v34 >= 0)
                {
                    if (v13 == v4 && v14 != ((long long)*((long long *)(((char *)&v4) + 8))))
                    {
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_405f38;
                        v34 = chdir();
                        if (v34 >= 0)
                        {
                            v56 = v15;
                            v57 = v16;
                            v58 = v17;
                            v59 = v18;
                            v60 = v19;
                            v4 = v13;
                            v61 = v20;
                            v62 = v21;
                            v5 = v56;
                            v55 = v22;
                            v6 = v57;
                            v7 = v58;
                            v8 = v59;
                            v9 = v60;
                            v10 = v61;
                            v11 = v62;
                            v12 = v55;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            v1 = &g_406079;
                            v49 = (long long)quotearg_style();
                            /* goto 4218867; */
                        }
                    }
                    if (v14 == ((long long)*((long long *)(((char *)&v4) + 8))) || v13 != v4)
                    {
                        rsp<8> = rsp<8> - 8;
                        v2 = &g_40601d;
                        v48 = (long long)xgetcwd();
                        break;
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_405fe4;
                    v49 = (long long)quotearg_style();
                }
                if (v34 < 0 || v34 < 0 && v13 == v4 && v14 != ((long long)*((long long *)(((char *)&v4) + 8))))
                {
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_405ffa;
                    v44 = ((long long)v53->field_0);
                    v48 = 0;
                    rsp<8> = rsp<8> - 8;
                    v0 = &g_406010;
                    error(0x0, v44, dcgettext(0x0, v44, 0x5));
                    break;
                }
            }
        }
        if ((((short)*(v44 + 0x18)) & 0xf000) == 0x4000 && v34 >= 0 || (((short)*(v44 + 0x18)) & 0xf000) != 0x4000 && v34 >= 0)
        {
            v43 = ((int)v53->field_0);
            rsp<8> = rsp<8> - 8;
            v25 = &g_40602c;
            if (restore_cwd() == 0)
            {
                rsp<8> = rsp<8> - 8;
                v24 = &g_40603c;
                free_cwd();
                v53->field_0 = v43;
                v39 = v48;
                return v39;
            }
            rsp<8> = rsp<8> - 8;
            v24 = &g_406113;
            v45 = ((long long)v53->field_0);
            rsp<8> = rsp<8> - 8;
            v23 = &g_406126;
            error(0x1, v45, dcgettext(0x0, &g_411b60, 0x5));
        }
    }
    else
    {
        v48 = 0;
        rsp<8> = &stack_base-384;
        error(0x0, v53->field_0, dcgettext(0x0, &g_411ae8, 0x5));
        v39 = v48;
        return v39;
    }
}
