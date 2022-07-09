typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

extern struct_0 CSWTCH.124;
extern char dont_sync;
extern char force_sync;
extern unsigned int g_41166c;
extern unsigned int g_411687;
extern unsigned long long g_4128c1;

int do_stat()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_4;  // tmp #4
    BOT tmp_129;  // tmp #129
    BOT tmp_189;  // tmp #189
    BOT tmp_242;  // tmp #242
    BOT tmp_260;  // tmp #260
    char v0[2];  // [bp-0x210]
    unsigned int v1;  // [bp-0x204]
    unsigned long v10;  // [bp-0x1bc]
    unsigned long v11;  // [bp-0x1b0]
    unsigned long v12;  // [bp-0x1a8]
    unsigned long v13;  // [bp-0x1a0]
    unsigned long v14;  // [bp-0x198]
    unsigned long v15;  // [bp-0x190]
    unsigned long v16;  // [bp-0x188]
    unsigned long v17;  // [bp-0x180]
    unsigned long v18;  // [bp-0x178]
    unsigned long v19;  // [bp-0x170]
    unsigned long v2;  // [bp-0x200]
    unsigned long v20;  // [bp-0x168]
    unsigned long|unsigned long long|char v21;  // [bp-0x148]
    unsigned int v22;  // [bp-0x138]
    unsigned long v23;  // [bp-0x134]
    unsigned short v24;  // [bp-0x12c]
    unsigned long v25;  // [bp-0x128]
    unsigned long v26;  // [bp-0x120]
    unsigned long v27;  // [bp-0x118]
    unsigned long v28;  // [bp-0x108]
    unsigned int v29;  // [bp-0x100]
    unsigned long v3;  // [bp-0x1f8]
    unsigned long v30;  // [bp-0xf8]
    unsigned int v31;  // [bp-0xf0]
    unsigned long v32;  // [bp-0xe8]
    unsigned int v33;  // [bp-0xe0]
    unsigned long v34;  // [bp-0xd8]
    unsigned int v35;  // [bp-0xd0]
    unsigned int v36;  // [bp-0xc8]
    unsigned int v37;  // [bp-0xc4]
    unsigned int v38;  // [bp-0xc0]
    unsigned int v39;  // [bp-0xbc]
    unsigned long|unsigned long long v4;  // [bp-0x1f0]
    unsigned long long v41;  // rax
    unsigned long long|char [2] v42;  // rax
    unsigned long long|unsigned int v43;  // ecx
    unsigned long long v44;  // rdx
    unsigned long long|struct_3 * v45;  // rbx
    unsigned int v46;  // esi
    unsigned long long v47;  // rsi
    char [2] v48;  // rsi
    struct_2 * v49;  // rdi
    unsigned long|unsigned long long v5;  // [bp-0x1e8]
    char v50[2];  // rdi
    unsigned long long|char [2] v51;  // r12
    char *|struct_1 * v52;  // r13
    unsigned int v54;  // cc_dep1
    unsigned long v55;  // d
    unsigned long v6;  // [bp-0x1d8]
    unsigned long v7;  // [bp-0x1d0]
    unsigned long v8;  // [bp-0x1c8]
    unsigned int v9;  // [bp-0x1c0]

    v43 = 32;
    v51 = v50;
    v45 = v47;
    if (v50[0] == 45)
    {
        -100 = ((long long)v50[1]);
        if (v50[1] == 0)
        {
            v49 = &v21;
            v48 = &g_4128c1;
            for (v4 = 18446744069414584319; v43 != 0; v49 += v55 * 8)
            {
                v43 -= 1;
                v21 = 0;
            }
            v5 = 18446744069414584319;
            v3 = &stack_base-472;
        }
    }
    if (v50[1] != 0 || v50[0] != 45)
    {
        v49 = &v21;
        for (v48 = v51; v43 != 0; v49 += v55 * 8)
        {
            v43 -= 1;
            v21 = 0;
        }
        v4 = 18446744069414584319;
        v3 = &stack_base-472;
        v5 = 18446744069414584319;
    }
    if (dont_sync != 0)
    {
    }
    else
    {
        if (((long long)force_sync) != 0)
        {
            /* goto 4215923; */
        }
    }
    v42 = ((long long)*(v52));
    if (((long long)*(v52)) != 0)
    {
        v52 = v45;
        v43 = 0;
        while (true)
        {
            if (v42 == 37)
            {
                v2 = &v21;
                v1 = ((unsigned int)v43);
                v0 = v48;
                v42 = (long long)format_code_offset() + v52;
                v44 = ((long long)v42[0]);
                if (((char)v44) == 0)
                {
                    break;
                }
                v44 = ((long long)(((int)v44) - 65));
                tmp_5 = v44;
                if (((long long)tmp_5) <= 57)
                {
                    v43 = ((long long)(((unsigned int)v43) | ((int)*(CSWTCH.124 + ((long long)v44) * 2))));
                }
                v52 = v42 + 1;
                v42 = ((long long)v42[1]);
                tmp_4 = v42;
                if (((long long)tmp_4) == 0)
                {
                    break;
                }
            }
            else
            {
                tmp_5 = v52;
                v52 += 1;
                v42 = ((long long)*(tmp_5 + 1));
                if (((long long)*(tmp_5 + 1)) == 0)
                {
                    break;
                }
            }
        }
    }
    v46 = (int)statx(0xffffff9c);
    if (v46 >= 0)
    {
        tmp_129 = ((long long)v38);
        v9 = ((int)v24);
        tmp_189 = ((long long)v36);
        v44 = ((long long)v37);
        v6 = ((long long)v39) * 0x1000 & 0xffffff00000 | tmp_129 * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(tmp_129 * 0x100)) & 0xfff00)) | ((long long)v39);
        v7 = v25;
        v8 = ((long long)v22);
        v10 = v23;
        tmp_242 = v44;
        v12 = v26;
        tmp_260 = ((long long)((int)*((int *)(((char *)&v21) + 4))));
        v11 = v44 * 0x1000 & 0xffffff00000 | tmp_189 * 0x100000000 & 0xffffefff00000000 | ((long long)(((int)(tmp_189 * 0x100)) & 0xfff00)) | ((long long)tmp_242);
        v13 = tmp_260;
        v14 = v27;
        v15 = v28;
        v16 = ((long long)v29);
        v17 = v34;
        v18 = ((long long)v35);
        v19 = v32;
        v20 = ((long long)v33);
        if (((long long)(((char)*((char *)(((char *)&v21) + 1))) & 8)) == 0)
        {
            v41 = ((long long)(print_it() ^ 1));
            return v41;
        }
        v4 = v30;
        v5 = ((long long)v31);
        v41 = ((long long)(print_it() ^ 1));
        return v41;
    }
    v45 = __errno_location();
    if (v54 != 0)
    {
        error(0x0, v45->field_0, dcgettext(0x0, &g_41166c, 0x5));
        v41 = 0;
        return v41;
    }
    else
    {
        v51 = (long long)quotearg_style();
        error(0x0, v45->field_0, dcgettext(0x0, &g_411687, 0x5));
        v41 = 0;
        return v41;
    }
}
