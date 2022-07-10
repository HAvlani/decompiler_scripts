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

extern char g_4068f6;
extern char g_406901;
extern char g_406909;
extern char g_406929;
extern char g_40693e;
extern char g_406954;
extern char g_40696a;
extern char g_406a38;
extern char g_406acb;
extern char g_406ae4;
extern char g_406afa;
extern char g_406b10;
extern char g_406b1d;
extern char g_406b2c;
extern char g_406b3c;
extern char g_406b79;
extern char g_406bc5;
extern char g_406bdb;
extern char g_406bf1;
extern char g_406c13;
extern char g_406c26;
extern unsigned int g_411fc0;
extern unsigned int g_411fdd;
extern unsigned int g_411ffb;
extern unsigned int g_411ffc;
extern unsigned int g_412010;
extern unsigned int g_412038;

int find_mount_point()
{
    BOT tmp_23;  // tmp #23
    unsigned long v0;  // [bp-0x1c0]
    unsigned long v1;  // [bp-0x1b8]
    BOT v10;  // [bp-0x148]
    BOT v11;  // [bp-0x138]
    BOT v12;  // [bp-0x128]
    BOT v13;  // [bp-0x118]
    BOT v14;  // [bp-0x108]
    BOT v15;  // [bp-0xf8]
    BOT v16;  // [bp-0xe8]
    char v17;  // [bp-0xd8]
    unsigned long v18;  // [bp-0xd0]
    uint128_t v19;  // [bp-0xc8]
    unsigned long v2;  // [bp-0x1b0]
    uint128_t v20;  // [bp-0xb8]
    BOT v21;  // [bp-0xa8]
    BOT v22;  // [bp-0x98]
    BOT v23;  // [bp-0x88]
    BOT v24;  // [bp-0x78]
    uint128_t v25;  // [bp-0x68]
    BOT v26;  // [bp-0x58]
    unsigned long v27;  // [bp-0x38]
    unsigned long v28;  // [bp-0x30]
    unsigned long v29;  // [bp-0x28]
    unsigned long v3;  // [bp-0x1a8]
    unsigned long v30;  // [bp-0x20]
    unsigned long v31;  // [bp-0x18]
    unsigned long v32;  // [bp-0x10]
    unsigned long v33;  // [bp-0x8]
    unsigned long long v35;  // rax
    unsigned long long v37;  // rax
    unsigned long long v39;  // rax
    unsigned long v4;  // [bp-0x1a0]
    unsigned long long v43;  // rdx
    struct_0 *|unsigned int v44;  // ebx
    unsigned long v45;  // rsi
    unsigned long|struct_0 * v46;  // rsi
    unsigned long long v49;  // r12
    unsigned long v5;  // [bp-0x198]
    unsigned long long v50;  // r12
    unsigned long long v51;  // r12
    unsigned long long v52;  // r12
    void *v53;  // r12
    struct_1 *v54;  // r13
    unsigned long long|unsigned int v55;  // r15d
    uint128_t v56;  // xmm0
    uint128_t v57;  // xmm1
    uint128_t v58;  // xmm2
    uint128_t v59;  // xmm3
    unsigned long v6;  // [bp-0x190]
    uint128_t v60;  // xmm4
    uint128_t v61;  // xmm5
    uint128_t v62;  // xmm6
    uint128_t v63;  // xmm7
    unsigned long v7;  // [bp-0x188]
    char|BOT|uint128_t v8;  // [bp-0x168]
    BOT v9;  // [bp-0x158]

    v44 = v46;
    v55 = save_cwd();
    v54 = __errno_location();
    if (v55 == 0)
    {
        if ((((short)*(v46 + 0x18)) & 0xf000) != 0x4000)
        {
            v53 = (long long)dir_name();
            rsp<8> = &stack_base-384;
            v35 = strlen(v53);
            if (&stack_base-376 != &stack_base-376 - (v35 + 24 & 0xfffffffefffff000))
            {
                do
                {
                    rsp<8> = rsp<8> - 0x1000;
                    v7 = v7;
                }
                while (rsp<8> != &stack_base-376 - (v35 + 24 & 0xfffffffefffff000));
            }
            v43 = ((long long)(((int)(v35 + 24 & 0xfffffffefffffff0)) & 4095));
            rsp<8> = rsp<8> - v43;
            if (v43 != 0)
            {
                v33 = v33;
            }
            rsp<8> = rsp<8> - 8;
            v33 = &g_4068f6;
            v55 = memcpy(rsp<8> + 15 & 0xfffffffefffffff0, v53, v35 + 1);
            rsp<8> = rsp<8> - 8;
            v32 = &g_406901;
            rpl_free();
            rsp<8> = rsp<8> - 8;
            v31 = &g_406909;
            v37 = chdir();
            if (v37 >= 0)
            {
                rsp<8> = rsp<8> - 8;
                v30 = &g_406929;
                v37 = __xstat(0x1, &g_411ffc, ((int)&v8));
                if (v37 < 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v29 = &g_40693e;
                    v52 = (long long)quotearg_style();
                    rsp<8> = rsp<8> - 8;
                    v28 = &g_406954;
                    v46 = ((long long)v54->field_0);
                    v50 = 0;
                    rsp<8> = rsp<8> - 8;
                    v27 = &g_40696a;
                    error(0x0, v46, dcgettext(0x0, &g_412010, 0x5));
                    /* goto 4221728; */
                }
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v7 = &g_406bc5;
                v49 = (long long)quotearg_style();
                rsp<8> = rsp<8> - 8;
                v6 = &g_406bdb;
                v46 = ((long long)v54->field_0);
                v50 = 0;
                rsp<8> = rsp<8> - 8;
                v5 = &g_406bf1;
                error(0x0, v46, dcgettext(0x0, &g_411fdd, 0x5));
                v39 = v50;
                return v39;
            }
        }
        else
        {
            tmp_23 = v44->field_10;
            v59 = v44->field_18;
            v60 = v44->field_20;
            v61 = v44->field_30;
            v62 = v44->field_40;
            v8 = v44->field_0;
            v63 = v44->field_50;
            v57 = v44->field_60;
            v9 = tmp_23;
            v58 = v44->field_70;
            v10 = v59;
            v11 = v60;
            v12 = v61;
            v13 = v62;
            v14 = v63;
            v15 = v57;
            v16 = v58;
            rsp<8> = &stack_base-384;
            v37 = chdir();
            if (v37 < 0)
            {
                rsp<8> = rsp<8> - 8;
                v7 = &g_406bc5;
                v49 = (long long)quotearg_style();
                rsp<8> = rsp<8> - 8;
                v6 = &g_406bdb;
                v46 = ((long long)v54->field_0);
                v50 = 0;
                rsp<8> = rsp<8> - 8;
                v5 = &g_406bf1;
                error(0x0, v46, dcgettext(0x0, &g_411fdd, 0x5));
                v39 = v50;
                return v39;
            }
        }
        if (((((short)*(v46 + 0x18)) & 0xf000) == 0x4000 || v37 >= 0) && ((((short)*(v46 + 0x18)) & 0xf000) == 0x4000 || v37 >= 0) && (v37 >= 0 || (((short)*(v46 + 0x18)) & 0xf000) != 0x4000))
        {
            while (true)
            {
                rsp<8> = rsp<8> - 8;
                v7 = &g_406acb;
                v37 = __xstat(0x1, &g_411ffb, ((int)&v17));
                if (v37 >= 0)
                {
                    if (v17 == ((long long)v8) && v18 != ((long long)*((long long *)(((char *)&v8) + 8))))
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_406a38;
                        v37 = chdir();
                        if (v37 >= 0)
                        {
                            v57 = v19;
                            v58 = v20;
                            v59 = v21;
                            v60 = v22;
                            v61 = v23;
                            v8 = *((int128_t *)(((char *)&v18) + -8));
                            v62 = v24;
                            v63 = v25;
                            v9 = v57;
                            v56 = v26;
                            v10 = v58;
                            v11 = v59;
                            v12 = v60;
                            v13 = v61;
                            v14 = v62;
                            v15 = v63;
                            v16 = v56;
                        }
                        else
                        {
                            rsp<8> = rsp<8> - 8;
                            v5 = &g_406b79;
                            v51 = (long long)quotearg_style();
                            /* goto 4221683; */
                        }
                    }
                    if (v18 == ((long long)*((long long *)(((char *)&v8) + 8))) || v17 != ((long long)v8))
                    {
                        rsp<8> = rsp<8> - 8;
                        v6 = &g_406b1d;
                        v50 = (long long)xgetcwd();
                        break;
                    }
                }
                else
                {
                    rsp<8> = rsp<8> - 8;
                    v6 = &g_406ae4;
                    v51 = (long long)quotearg_style();
                }
                if (v37 < 0 || v37 < 0 && v17 == ((long long)v8) && v18 != ((long long)*((long long *)(((char *)&v8) + 8))))
                {
                    rsp<8> = rsp<8> - 8;
                    v4 = &g_406afa;
                    v46 = ((long long)v54->field_0);
                    v50 = 0;
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_406b10;
                    error(0x0, v46, dcgettext(0x0, v46, 0x5));
                    break;
                }
            }
        }
        if ((((short)*(v46 + 0x18)) & 0xf000) == 0x4000 && v37 >= 0 || v37 >= 0 && (((short)*(v46 + 0x18)) & 0xf000) != 0x4000)
        {
            v44 = ((int)v54->field_0);
            rsp<8> = rsp<8> - 8;
            v2 = &g_406b2c;
            if (restore_cwd() == 0)
            {
                rsp<8> = rsp<8> - 8;
                v1 = &g_406b3c;
                free_cwd();
                v54->field_0 = v44;
                v39 = v50;
                return v39;
            }
            rsp<8> = rsp<8> - 8;
            v1 = &g_406c13;
            v45 = ((long long)v54->field_0);
            rsp<8> = rsp<8> - 8;
            v0 = &g_406c26;
            error(0x1, v45, dcgettext(0x0, &g_412038, 0x5));
        }
    }
    else
    {
        v50 = 0;
        rsp<8> = &stack_base-384;
        error(0x0, v54->field_0, dcgettext(0x0, &g_411fc0, 0x5));
        v39 = v50;
        return v39;
    }
}
