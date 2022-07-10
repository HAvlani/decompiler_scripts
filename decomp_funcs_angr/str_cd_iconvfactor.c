typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int str_cd_iconv()
{
    unsigned long v0;  // [bp-0x88]
    struct_0 *|unsigned long long v1;  // [bp-0x80]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    struct_0 *|unsigned long|unsigned long long v12;  // rcx
    unsigned long|unsigned long long v13;  // rdx
    unsigned long v14;  // rbx
    unsigned int v15;  // ebp
    unsigned long|unsigned int v16;  // esi
    char *v17;  // rdi
    unsigned long long v18;  // r12
    struct_0 *|unsigned long long v19;  // r15
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x58]
    unsigned long|unsigned long long v6;  // [bp-0x50]
    unsigned long v7;  // [bp-0x48]
    unsigned long long|unsigned int v9;  // rax

    v15 = v16;
    v4 = v17;
    v5 = strlen(v17);
    v14 = (0x10000000 <= v5? v5 : v5 << 4) + 1;
    v18 = malloc((0x10000000 <= v5? v5 : v5 << 4) + 1);
    if (v18 != 0)
    {
        iconv(v15, 0x0, 0x0, 0x0, 0x0);
        v7 = (0x10000000 <= v5? v5 : v5 << 4);
        v3 = &v5;
        v6 = v18;
        v2 = &v4;
        while (true)
        {
            v9 = iconv(v15, ((int)&v4), ((int)&v5), ((int)&v6), ((int)&v7));
            if (v9 == 18446744069414584319)
            {
                v19 = __errno_location();
                v9 = ((int)v19->field_0);
                if (v9 != 22)
                {
                    if (v9 == 7)
                    {
                        v12 = v14 * 2;
                        v13 = v6 - v18;
                        if (v14 < v14 << 1)
                        {
                            v1 = v13;
                            v0 = v12;
                            v9 = realloc(v18, ((0x10000000 <= v5? v5 : v5 << 4) + 1) * 2);
                            v12 = v0;
                            v13 = v1;
                            if (v18 != 0)
                            {
                                v14 = v0;
                                v18 = v9;
                                v6 = v9 + v1;
                                v7 = v12 - 1 - v13;
                            }
                        }
                        if (v18 == 0 || v14 >= v14 << 1)
                        {
                            v19->field_0 = 12;
                            v18 = 0;
                            rpl_free();
                            break;
                        }
                    }
                    else
                    {
                        v18 = 0;
                        rpl_free();
                        v10 = v18;
                        return v10;
                    }
                }
            }
            if (v9 == 22 || v9 != 18446744069414584319)
            {
                while (true)
                {
                    v9 = iconv(v15, 0x0, 0x0, ((int)&v6), ((int)&v7));
                    if (v9 == 18446744069414584319)
                    {
                        v12 = __errno_location();
                        if (v12->field_0 == 7)
                        {
                            v13 = v14 * 2;
                            v19 = v6 - v18;
                            if (v14 < v14 << 1)
                            {
                                v0 = v13;
                                v1 = v12;
                                v9 = realloc(v18, v13);
                                v13 = v0;
                                v12 = v1;
                                if (v18 != 0)
                                {
                                    v14 = v0;
                                    v18 = v9;
                                    v6 = v9 + v19;
                                    v7 = v13 - 1 - v19;
                                }
                            }
                            if (v18 == 0 || v14 >= v14 << 1)
                            {
                                v12->field_0 = 12;
                                v18 = 0;
                                rpl_free();
                                v10 = v18;
                                return v10;
                            }
                        }
                        v18 = 0;
                        rpl_free();
                        v10 = v18;
                        return v10;
                    }
                    v11 = v6;
                    v6 += 1;
                    *(v11) = 0;
                    v16 = v6 - v18;
                    if (v14 > v6 - v18)
                    {
                        v10 = v18;
                        return v10;
                        v18 = (realloc(v18, v16) != 0? v6 : r12<8>);
                        v10 = v18;
                        return v10;
                    }
                }
            }
        }
        v10 = v18;
        return v10;
    }
    *(__errno_location() + None) = 12;
    v10 = v18;
    return v10;
}
