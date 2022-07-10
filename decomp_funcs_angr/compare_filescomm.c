typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 check_input_order;
extern struct_1 col_sep;
extern char delim;
extern unsigned int g_407655;
extern unsigned int g_40766c;
extern char g_40b0fe;
extern char hard_LC_COLLATE;
extern char issued_disorder_warning;
extern char seen_unpairable;
extern struct_1 stdin;
extern char total_option;

int compare_files()
{
    unsigned long v0;  // [bp-0x258]
    unsigned long v1;  // [bp-0x250]
    unsigned long long|unsigned long v10;  // [bp-0x200]
    unsigned int v11;  // [bp-0x1f4]
    struct_1 *v12;  // [bp-0x1f0]
    char v13;  // [bp-0x1da]
    char v14;  // [bp-0x1d9]
    unsigned long long v15[3];  // [bp-0x1d8]
    unsigned long long v16[3];  // [bp-0x1d0]
    char *v17;  // [bp-0x1c8]
    unsigned int v18;  // [bp-0x1b8]
    unsigned int v19;  // [bp-0x1b4]
    unsigned long v2;  // [bp-0x248]
    unsigned int v20;  // [bp-0x1b0]
    char|unsigned long v21;  // [bp-0x198]
    char v22;  // [bp-0x190]
    char v23;  // [bp-0x158]
    char v24;  // [bp-0x140]
    char v25;  // [bp-0xf8]
    char v26;  // [bp-0x98]
    unsigned long v27;  // [bp-0x40]
    unsigned long v28;  // [bp-0x30]
    unsigned long v29;  // [bp-0x20]
    unsigned long long|unsigned int|unsigned long v3;  // [bp-0x238]
    unsigned long v30;  // [bp-0x18]
    unsigned long v31;  // [bp-0x10]
    unsigned long v32;  // [bp-0x8]
    unsigned long long|unsigned int v34;  // rax
    unsigned long long v36;  // rax
    unsigned long long v38;  // rbx
    unsigned long long v39[3];  // rbx
    unsigned int|unsigned long v4;  // [bp-0x230]
    unsigned long v40;  // rbx
    unsigned long long v41;  // rbp
    char [2]|struct_1 * v42;  // rdi
    unsigned long long|unsigned int v43;  // r12
    unsigned long long v44;  // r12
    unsigned long v45;  // r12
    unsigned long long v46;  // r12
    unsigned long long v47;  // r12
    unsigned long long v48;  // r12
    unsigned long v49;  // r13
    unsigned long long v5;  // [bp-0x228]
    unsigned long long|unsigned long v50;  // r14
    unsigned long long|unsigned long|struct_0 * v51;  // r15
    char v52;  // cc_dep1
    struct_1 *v53;  // fs
    struct_1 *v6;  // [bp-0x220]
    struct_1 *v7;  // [bp-0x218]
    unsigned long long|unsigned long v8;  // [bp-0x210]
    unsigned long long|unsigned long v9;  // [bp-0x208]

    v32 = v51;
    v31 = v50;
    v30 = v49;
    v29 = v45;
    v43 = 0;
    v28 = v40;
    v12 = v42;
    v38 = &v25;
    v27 = *(v53 + 0x28);
    v5 = &stack_base-440;
    v6 = &stack_base-456;
    v4 = &stack_base-408;
    while (true)
    {
        v3 = ((int)v43);
        v41 = &v23;
        v51 = &v21;
        while (true)
        {
            v51 = &v22;
            initbuffer();
            v21 = v41;
            v41 += 24;
            if (v41 == &v25)
            {
                break;
            }
        }
        v42 = v42->field_0;
        v18 = 0;
        v19 = 0;
        v52 = ((char)v42[0]);
        v20 = 0;
        if (v52 == 45)
        {
            v51 = stdin;
        }
        if (v42[1] != 0 || v52 != 45)
        {
            v51 = (long long)fopen_safer();
        }
        *(v6 + 0 * 8) = v51;
        if (v51 != 0)
        {
            fadvise();
            v15 = (long long)readlinebuffer_delim();
            v34 = ((int)(v51->field_0 & 32));
            if ((((char)v51->field_0) & 32) == 0)
            {
                v38 = &v26;
                v43 = 1;
                if (False)
                {
                    v11 = v34;
                    v7 = &stack_base-472;
                    v10 = 0;
                    v8 = 0;
                    v9 = 0;
                    break;
                }
            }
            else
            {
                v47 = (long long)quotearg_n_style_colon();
                error(0x1, *(__errno_location()), "%s");
            }
        }
        else
        {
            v44 = (long long)quotearg_n_style_colon();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    while (true)
    {
        v39 = v16;
        if (v15 != 0)
        {
            v14 = 0;
            if (v39 != 0)
            {
                v43 = v16[1];
                v50 = v15[1];
                if (hard_LC_COLLATE == 0)
                {
                    v34 = memcmp(v15[2], v16[2], (v50 <= v43? v50 : v43) - 1);
                    if (((int)v34) != 0)
                    {
                        /* goto 4206495; */
                    }
                    else if (v50 >= v43)
                    {
                        v34 = ((int)[D] amd64g_calculate_condition(0x5<64>, 0x8<64>, Load(addr=(Load(addr=stack_base-472, size=8, endness=Iend_LE) + 0x8<64>), size=8, endness=Iend_LE), Load(addr=(Load(addr=stack_base-464, size=8, endness=Iend_LE) + 0x8<64>), size=8, endness=Iend_LE), cc_ndep<8>));
                    }
                }
                else
                {
                    v34 = xmemcoll();
                }
                if (v34 == 0 && (((int)v34) == 0 || hard_LC_COLLATE != 0) && (v50 >= v43 || hard_LC_COLLATE != 0))
                {
                    v10 += 1;
                    writeline.isra.0();
                    v14 = 1;
                    /* goto 4206060; */
                }
                if (hard_LC_COLLATE == 0 && ((int)v34) != 0 || v34 != 0 && v50 >= v43 || v34 != 0 && hard_LC_COLLATE != 0)
                {
                    seen_unpairable = 1;
                    if (reg_16<4> > 0)
                    {
                        /* goto 4206399; */
                    }
                }
            }
            if ((((int)v34) == 0 || v39 == 0) && (v39 == 0 || v50 < v43) && (v39 == 0 || hard_LC_COLLATE == 0))
            {
                seen_unpairable = 1;
            }
            if ((((int)v34) == 0 || v39 == 0 || reg_16<4> <= 0) && (v39 == 0 || v50 < v43 || reg_16<4> <= 0) && (v39 == 0 || reg_16<4> <= 0 || hard_LC_COLLATE == 0) && (v39 == 0 || hard_LC_COLLATE == 0 || v34 != 0) && (v39 == 0 || v50 < v43 || ((int)v34) != 0 || v34 != 0))
            {
                v9 += 1;
                writeline.isra.0();
            }
            if ((v34 == 0 || v39 == 0 || v50 < v43 || reg_16<4> <= 0) && (v34 == 0 || v39 == 0 || reg_16<4> <= 0 || hard_LC_COLLATE == 0) && (((int)v34) == 0 || v39 == 0 || reg_16<4> <= 0 || hard_LC_COLLATE != 0))
            {
                v34 = 1;
                /* goto 4206065; */
            }
        }
        else if (v16 != 0)
        {
            seen_unpairable = 1;
        }
        else
        {
            v36 = rpl_fclose();
            if (v36 == 0)
            {
                v36 = rpl_fclose();
                if (v36 == 0)
                {
                    if (total_option != 0)
                    {
                        v4 = col_sep;
                        v3 = col_sep;
                        v2 = dcgettext(0x0, &g_407655, 0x5);
                        v1 = v4;
                        v0 = (long long)umaxtostr();
                        __printf_chk(0x1, "%s%s%s%s%s%s%s%c", umaxtostr(), ((int)col_sep), umaxtostr(), ((int)col_sep), ((int)v0), ((int)v1), ((int)v2), ((int)delim));
                    }
                    if (issued_disorder_warning != 0)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_40766c, 0x5));
                    }
                    else if (g_40b0fe == 0)
                    {
                        exit(0x0); /* do not return */
                    }
                }
                else
                {
                    v11 = 1;
                    v48 = (long long)quotearg_n_style_colon();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            else
            {
                v48 = (long long)quotearg_n_style_colon();
                error(0x1, *(__errno_location()), "%s");
            }
        }
        if (v39 != 0 && reg_16<4> > 0 && v15 != 0 && (hard_LC_COLLATE == 0 || v34 != 0) && (((int)v34) != 0 || v34 != 0) && (((int)v34) != 0 || v50 >= v43 || hard_LC_COLLATE != 0) || v15 == 0 && v16 != 0)
        {
            v8 += 1;
            writeline.isra.0();
            v14 = 1;
            v34 = 0;
        }
        if (v15 != 0 && (v34 == 0 || v39 == 0 || v50 < v43 || reg_16<4> <= 0) && (v34 == 0 || v39 == 0 || reg_16<4> <= 0 || hard_LC_COLLATE == 0) && (((int)v34) == 0 || v39 == 0 || reg_16<4> <= 0 || hard_LC_COLLATE != 0) || v39 != 0 && reg_16<4> > 0 && v15 != 0 && (hard_LC_COLLATE == 0 || v34 != 0) && (((int)v34) != 0 || v34 != 0) && (((int)v34) != 0 || v50 >= v43 || hard_LC_COLLATE != 0) || v15 == 0 && v16 != 0)
        {
            v38 = 0;
            v41 = v5;
            v43 = ((int)v18);
            v4 = 0;
            v3 = 0 * 4;
            v20 = 0;
            v19 = v43;
            v18 = ((int)(((long long)v19) + 1)) & 3;
            v34 = readlinebuffer_delim();
            *(v7 + 0 * 8) = v34;
            if (...)
            {
                check_order.isra.0.part.0();
            }
            if (((long long)(*(v17) & 32)) == 0)
            {
                v13 = 0;
            }
            if (((long long)(*(v17) & 32)) == 0 || ((long long)v14) == 0 || ((long long)v34) == 0)
            {
                v41 += 12;
                if (v38 != 1)
                {
                    v38 = 1;
                }
            }
            v46 = (long long)quotearg_n_style_colon();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    error(0x1, 0x0, dcgettext(0x0, &g_40766c, 0x5));
}
