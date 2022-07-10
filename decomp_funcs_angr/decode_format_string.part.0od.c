extern unsigned long long bytes_to_hex_digits;
extern unsigned long long bytes_to_oct_digits;
extern unsigned int fp_type_size[4];
extern char g_40524b;
extern char g_405259;
extern char g_4053a4;
extern char g_4053ba;
extern char g_4053cb;
extern char g_405498;
extern char g_405502;
extern char g_405562;
extern char g_405580;
extern char g_405593;
extern char g_405750;
extern char g_405766;
extern char g_40577b;
extern char g_4057bd;
extern char g_405825;
extern char g_405863;
extern <missing-type> g_40c068;
extern unsigned int g_40c084;
extern unsigned int g_40c08a;
extern unsigned int g_40c09d;
extern unsigned int g_40c810;
extern <missing-type> g_40e35e;
extern unsigned int integral_type_size[4];
extern struct_0 n_specs;
extern struct_0 n_specs_allocated;
extern struct_0 spec;

int decode_format_string.part.0()
{
    char *v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v14;  // rax
    char **|unsigned int v15;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rcx
    unsigned long v2;  // [bp-0x8]
    unsigned long long v21;  // rbx
    char * v22;  // rbx
    unsigned long long v23;  // rbx
    unsigned int v25;  // esi
    char * v27;  // rdi
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r8
    unsigned long v3;  // [bp+0x0]
    unsigned long long v30;  // r12
    unsigned long long v31;  // r12
    unsigned long long v32;  // r12
    unsigned long long v33;  // r12
    unsigned long|unsigned int v34;  // r12
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r14
    unsigned long long v38;  // r14
    unsigned int v39;  // r14d
    unsigned long long v4;  // [bp+0x8]
    char [2]|char * v40;  // r15
    unsigned long long v41;  // r15
    unsigned long long v42;  // r15
    char v44;  // cc_dep1
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]
    unsigned long long v7;  // [bp+0x28]
    unsigned long v8;  // [bp+0x30]

    v40 = v27;
    v44 = ((char)*(v27));
    v14 = n_specs;
    v0 = v27;
    v34 = 1;
    v34 = 1;
    if (!(v40[1] != 70))
    {
        /* goto 4216187; */
    }
    else if (v40[1] != 76)
    {
        if (v40[1] != 68)
        {
            v22 = v40 + 2;
            v29 = 0;
            v18 = ((long long)(((int)v40[1]) - 48));
            if (((int)(((int)v40[1]) - 48)) <= 9)
            {
                /* goto 4215648; */
                if (((long long)(14757395258967641293 * !(v17) >> 64)) >> 3 < v29 && ((int)*(v22)) - 48 <= 9)
                {
                    rsp<8> = rsp<8> - 8;
                    v3 = &g_4053a4;
                    v32 = (long long)quote();
                    rsp<8> = rsp<8> - 8;
                    v2 = &g_4053ba;
                    rsp<8> = rsp<8> - 8;
                    v1 = &g_4053cb;
                    error(0x0, 0x0, dcgettext(0x0, &g_40c09d, 0x5));
                    v23 = v4;
                    v33 = v5;
                    v36 = v6;
                    v38 = v7;
                    v41 = v8;
                    return 0;
                }
            }
            /* goto 4216187; */
        }
    }
    if (v44 != 0)
    {
        v28 = spec;
    }
    return 1;
    if (v40[1] == 76)
    {
        /* goto 4216187; */
    }
    if (v40[1] == 68)
    {
        /* goto 4216187; */
    }
    if (((long long)(14757395258967641293 * !(v17) >> 64)) >> 3 >= v29 || ((int)(((int)v40[1]) - 48)) <= 9 && v40[1] != 68 && v40[1] != 70 && v40[1] != 76)
    {
        v29 = v18 + v29 * 10;
        v17 = ((long long)(((int)*(v22)) - 48));
    }
    if (((int)(((int)v40[1]) - 48)) <= 9 || ((long long)(14757395258967641293 * !(v17) >> 64)) >> 3 >= v29)
    {
        if (((long long)(14757395258967641293 * !(v17) >> 64)) >> 3 >= v29 || v40[1] != 68)
        {
            if (((long long)(14757395258967641293 * !(v17) >> 64)) >> 3 >= v29 || v40[1] != 70)
            {
                if (((long long)(14757395258967641293 * !(v17) >> 64)) >> 3 >= v29 || v40[1] != 76)
                {
                    if (((int)*(v22)) - 48 <= 9)
                    {
                        v18 = v17;
                        v22 += 1;
                    }
                    else if (v40 + 1 != v22)
                    {
                        if (!(v29 <= 16))
                        {
                            v4 = v29;
                            rsp<8> = rsp<8> - 8;
                            v3 = &g_405750;
                            v31 = (long long)quote();
                            rsp<8> = rsp<8> - 8;
                            v2 = &g_405766;
                            rsp<8> = rsp<8> - 8;
                            v1 = &g_40577b;
                            error(0x0, 0x0, dcgettext(0x0, v25, 0x5));
                            v21 = v4;
                            v30 = v5;
                            v35 = v6;
                            v37 = v7;
                            v42 = v8;
                            return 0;
                        }
                        else if (fp_type_size[v29] == 0)
                        {
                            v4 = v29;
                            rsp<8> = rsp<8> - 8;
                            v3 = &g_405750;
                            v31 = (long long)quote();
                            rsp<8> = rsp<8> - 8;
                            v2 = &g_405766;
                            rsp<8> = rsp<8> - 8;
                            v1 = &g_40577b;
                            error(0x0, 0x0, dcgettext(0x0, v25, 0x5));
                            v21 = v4;
                            v30 = v5;
                            v35 = v6;
                            v37 = v7;
                            v42 = v8;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        rsp<8> = rsp<8> - 8;
        v3 = &g_405580;
        v15 = localeconv();
        v39 = 1;
        v27 = v15[0];
        if (*(v15[0]) != 0)
        {
            rsp<8> = rsp<8> - 8;
            v2 = &g_405593;
            v15 = strlen(v27);
            ((unsigned int)v39) = ((unsigned int)v15);
        }
    }
}
