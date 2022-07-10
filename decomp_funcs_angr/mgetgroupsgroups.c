typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mgetgroups()
{
    unsigned int v0;  // [bp-0x44]
    unsigned int v10;  // r13d
    unsigned int|struct_1 *|unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // ecx
    struct_1 *|struct_0 * v5;  // rdx
    unsigned int|unsigned int [2]|unsigned long|unsigned long long v6;  // rbp
    unsigned int|unsigned long long v7;  // esi
    unsigned int|unsigned long|unsigned long long v8;  // rdi
    unsigned int v9;  // r12d

    v9 = v7;
    if (v8 != 0)
    {
        v0 = 10;
        v6 = (long long)realloc_groupbuf();
        if (v6 != 0)
        {
            while (true)
            {
                v10 = ((int)v0);
                v3 = getgrouplist(((int)v8), v9, v6, ((int)&v0));
                if (v3 >= 0)
                {
                    v2 = realloc_groupbuf();
                    v5->field_0 = v2;
                    return rax<8>;
                }
                v7 = ((int)v0);
                if (v0 == v10)
                {
                    v7 = ((int)v7) * 2;
                    v0 = v7;
                }
                v2 = realloc_groupbuf();
                v6 = ((int)v2);
            }
        }
        else
        {
            return rax<8>;
        }
    }
    else
    {
        v0 = getgroups(0x0, 0x0);
        if (v0 >= 0)
        {
            if (v0 != 0)
            {
                if (((long long)(v7 != -1)) == 0)
                {
                    v6 = (long long)realloc_groupbuf();
                    if (v6 == 0)
                    {
                        return rax<8>;
                    }
                    v8 = ((long long)v0);
                    /* goto 4219007; */
                }
            }
            if (v0 == 0 || ((long long)(v7 != -1)) != 0)
            {
                v0 += 1;
                v6 = (long long)realloc_groupbuf();
                if (v6 == 0)
                {
                    return rax<8>;
                }
                v8 = ((long long)v0);
                if (v7 != -1)
                {
                    v2 = getgroups(v0 - 1, ((int)v6) + 4);
                    if (v2 >= 0)
                    {
                        v6[0] = v7;
                        v2 = ((long long)v2) + 1;
                        /* goto 4218846; */
                    }
                }
            }
            if (v7 == -1 || ((long long)(v7 != -1)) == 0)
            {
                if (v7 == -1 || v0 != 0)
                {
                    if (((long long)(v7 != -1)) == 0 || v6 != 0)
                    {
                        if (v6 != 0 || v0 != 0)
                        {
                            if (v0 == 0 || ((long long)(v7 != -1)) != 0 || v6 != 0)
                            {
                                v8 = ((long long)(v8 - ((long long)(v7 != -1))));
                                v2 = getgroups(v8, ((int)v6));
                                if (((int)v2) < 0)
                                {
                                    /* goto 4218625; */
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            v2 = __errno_location();
            if (v2->field_0 != 38)
            {
                return rax<8>;
            }
            v2 = malloc(0x4);
            if (v2 == 0)
            {
                return rax<8>;
            }
            else
            {
                v5->field_0 = v2;
                v2->field_0 = v7;
                return rax<8>;
            }
        }
    }
    if (v8 == 0 && v7 != -1 && v2 >= 0 && v6 != 0 && v0 >= 0 && (v0 == 0 || ((long long)(v7 != -1)) != 0) || v8 == 0 && ((int)v2) >= 0 && v0 >= 0 && (v7 == -1 || ((long long)(v7 != -1)) == 0) && (v7 == -1 || v0 != 0) && (((long long)(v7 != -1)) == 0 || v6 != 0) && (v6 != 0 || v0 != 0) && (v0 == 0 || ((long long)(v7 != -1)) != 0 || v6 != 0))
    {
        v5->field_0 = v6;
        if (((int)v2) <= 1)
        {
            return rax<8>;
        }
        v8 = ((int)v6[0]);
        v7 = v6 + v2 * 4;
        v5 = v6 + 4;
        if (v6 + (v2 << 2) <= v6 + 4)
        {
            return rax<8>;
        }
        else
        {
            do
            {
                v4 = ((int)v5->field_0);
                if (v4 != *(rbp<8>) && v5->field_0 != v8)
                {
                    *(rbp<8> + 4) = v4;
                    v6 = rbp<8> + 4;
                    /* goto 4218900; */
                }
                if (v4 == *(rbp<8>) || v5->field_0 == v8)
                {
                    v2 = ((int)reg_16<4>) - 1;
                }
                v5 += 4;
            }
            while (v7 > v5);
            return rax<8>;
        }
    }
    if (...)
    {
        rpl_free();
        return rax<8>;
    }
}
