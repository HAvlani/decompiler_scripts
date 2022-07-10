typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 check_input_order;
extern unsigned int g_409b78;
extern unsigned int g_409b83;
extern struct_2 issued_disorder_warning;
extern struct_2 line_no;
extern struct_2 prevline;
extern char seen_unpairable;
extern struct_2 spareline;
extern struct_0 tab;

int get_line()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    struct_1 *|char * v10;  // rsi
    char *v11;  // rdi
    unsigned long long|unsigned int v12;  // rdi
    unsigned long long v13;  // r9
    unsigned long long [4] v14;  // r12
    char * v15;  // r14
    struct_1 *|unsigned long long v16;  // r15
    unsigned long long v17;  // cc_dep1
    unsigned long long|unsigned int v2;  // [bp-0x3c]
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long|char * v7;  // rcx
    unsigned long long|char * v8;  // rdx
    struct_2 *v9;  // rbx

    v9 = v8 - 1;
    v14 = v10->field_0;
    v2 = ((int)v8);
    if (*(prevline + (v8 - 1 << 3)) != v14)
    {
    }
    else
    {
        v6 = *(spareline + v9 * 8);
        *(spareline + v9 * 8) = v10->field_0;
        v14 = v6;
        v10->field_0 = v14;
    }
    if (*(prevline + (v8 - 1 << 3)) == v14 && v14 != 0 || *(prevline + (v8 - 1 << 3)) != v14 && v10->field_0 != 0)
    {
        v14[3] = 0;
        /* goto 4210533; */
    }
    if (*(prevline + (v8 - 1 << 3)) == v14 && v14 == 0 || v10->field_0 == 0 && *(prevline + (v8 - 1 << 3)) != v14)
    {
        v10->field_0 = v14;
        v14 = (long long)xcalloc();
    }
    v4 = readlinebuffer_delim();
    if (v4 != 0)
    {
        v15 = v14[2];
        *(line_no + v9 * 8) = *(line_no + v9 * 8) + 1;
        if (v15 != v15 + v14[1] - 1)
        {
            if (((int)tab) >= 0)
            {
                if (((int)tab) == 10)
                {
                }
                else
                {
                    while (true)
                    {
                        v1 = v15 - v15;
                        v16 = memchr(((int)v15));
                        if (v16 == 0)
                        {
                            break;
                        }
                        v15 = v16 + 1;
                        extract_field();
                    }
                }
            }
            else
            {
                v16 = __ctype_b_loc();
                while (true)
                {
                    v7 = ((long long)*(v15));
                    v10 = v15;
                    v15 += 1;
                    v17 = ((long long)(*(v8 + v7 * 2) & 1));
                    if (((char)v17) == 0 && v7 != 10)
                    {
                        while (true)
                        {
                            v15 = v10 + 1;
                            break;
                            while (true)
                            {
                                v12 = ((long long)*(v15));
                                if (((long long)(*(v8 + (((long long)*(v15)) << 1)) & 1)) == 0 && v12 != 10)
                                {
                                    v15 += 1;
                                    break;
                                }
                                if (v12 == 10 || ((long long)(*(v8 + (((long long)*(v15)) << 1)) & 1)) != 0)
                                {
                                    extract_field();
                                    v10 = v15 + 1;
                                    v8 = v16->field_0;
                                    while (true)
                                    {
                                        v7 = ((long long)*(v10));
                                        if (((long long)(*(v8 + (((long long)*(v10)) << 1)) & 1)) == 0 && v7 != 10)
                                        {
                                            break;
                                        }
                                        if (v7 == 10 || ((long long)(*(v8 + (((long long)*(v10)) << 1)) & 1)) != 0)
                                        {
                                            v10 += 1;
                                        }
                                    }
                                    if (((long long)(*(v8 + (((long long)*(v10)) << 1)) & 1)) == 0 && v7 != 10)
                                    {
                                        v15 = v10 + 1;
                                    }
                                    else if (v7 == 10 || ((long long)(*(v8 + (((long long)*(v10)) << 1)) & 1)) != 0)
                                    {
                                        break;
                                    }
                                    else if (((long long)(*(v8 + (((long long)*(v10)) << 1)) & 1)) == 0 && v15 == v10 && v7 != 10)
                                    {
                                        break;
                                    }
                                }
                            }
                            if (False)
                            {
                                v15 = v10 + 1;
                            }
                            else if (((long long)(*(v8 + (((long long)*(v15)) << 1)) & 1)) == 0 && v12 != 10)
                            {
                                extract_field();
                            }
                        }
                        if (True)
                        {
                            extract_field();
                        }
                    }
                    if (v7 == 10 || ((char)v17) != 0)
                    {
                        break;
                    }
                }
                if (False)
                {
                    extract_field();
                }
            }
            extract_field();
        }
        *(prevline + v9 * 8) = v14;
        return 1;
        if (check_input_order != 2)
        {
            if (check_input_order != 1)
            {
                if (seen_unpairable == 0)
                {
                    *(prevline + v9 * 8) = v14;
                    return 1;
                }
            }
            if (check_input_order == 1 || seen_unpairable != 0)
            {
                if (*(v9 + 0x40e198) == 0)
                {
                    v4 = keycmp.isra.0();
                    if (v4 > 0)
                    {
                        v4 = v14[1];
                        v16 = v14[2];
                        v13 = 0;
                        if (v14[1] != 0)
                        {
                            v8 = v4 - 1;
                            if (*(v0 + v4 + 1) != 10)
                            {
                                v13 = ((int)(v4 <= 2147483647? v4 : 2147483647));
                                v2 = v13;
                                v1 = *(line_no + v9 * 8);
                                v12 = 0;
                                v12 = ((char)(check_input_order == 1));
                                v0 = v16;
                                error(rdi<4>, 0x0, dcgettext(0x0, &g_409b83, 0x5));
                                *(v9 + 0x40e198) = 1;
                                *(prevline + v9 * 8) = v14;
                                return 1;
                            }
                            v13 = (v8 <= 2147483647? v8 : 2147483647);
                            v2 = v13;
                            v1 = *(line_no + v9 * 8);
                            v12 = 0;
                            v12 = ((char)(check_input_order == 1));
                            v0 = v16;
                            error(rdi<4>, 0x0, dcgettext(0x0, &g_409b83, 0x5));
                            *(v9 + 0x40e198) = 1;
                            *(prevline + v9 * 8) = v14;
                            return 1;
                        }
                        v2 = v13;
                        v1 = *(line_no + v9 * 8);
                        v12 = 0;
                        v12 = ((char)(check_input_order == 1));
                        v0 = v16;
                        error(rdi<4>, 0x0, dcgettext(0x0, &g_409b83, 0x5));
                        *(v9 + 0x40e198) = 1;
                        *(prevline + v9 * 8) = v14;
                        return 1;
                    }
                    *(prevline + v9 * 8) = v14;
                    return 1;
                }
                *(prevline + v9 * 8) = v14;
                return 1;
            }
        }
        *(prevline + v9 * 8) = v14;
        return 1;
    }
    else if (((long long)(*(v11) & 32)) == 0)
    {
        freeline.part.0();
        return 0;
    }
    else
    {
        error(0x1, *(__errno_location()), dcgettext(0x0, &g_409b78, 0x5));
    }
}
