typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int gcd2_odd()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_37;  // tmp #37
    BOT tmp_2;  // tmp #2
    BOT tmp_24;  // tmp #24
    BOT tmp_28;  // tmp #28
    unsigned long v0;  // [bp-0x8]
    unsigned long long v10;  // r8
    char v11;  // r8b
    struct_0 *v12;  // r9
    unsigned long|unsigned long long v13;  // r10
    unsigned long long v2;  // al
    unsigned long v3;  // rax
    unsigned long|unsigned long long v4;  // rcx
    unsigned long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rsi
    unsigned long v9;  // rdi

    if (((long long)(v11 & 1)) != 0)
    {
        v13 = v8;
        v12 = v9;
        v7 = v6;
        v2 = v10;
        if ((v6 | v13) != 0)
        {
            if (((long long)(v6 & 1)) == 0)
            {
                do
                {
                    tmp_3 = v7 % 2;
                    tmp_37 = v13;
                    v13 = v13 % 2;
                    v7 = tmp_37 * 0x8000000000000000 | v7 % 2;
                }
                while ((((char)((int)tmp_3)) & 1) == 0);
            }
            if ((v4 | v13) != 0)
            {
                while (true)
                {
                    if (r10<8> <= v4)
                    {
                        v2 = ((char)(r10<8> == v4));
                        if (((long long)v2) == 0 || rsi<8> <= v2)
                        {
                            if (r10<8> >= rcx<8>)
                            {
                                if (rsi<8> >= v2)
                                {
                                    v12->field_0 = r10<8>;
                                    return v7;
                                }
                                else if (((long long)v2) == 0)
                                {
                                    v12->field_0 = r10<8>;
                                    return v7;
                                }
                            }
                            if (r10<8> < rcx<8> || rsi<8> < v2 && ((long long)v2) != 0)
                            {
                                tmp_2 = v2;
                                v2 -= rsi<8>;
                                v4 = v4 - r10<8> - ((long long)(tmp_2 < rsi<8>));
                                do
                                {
                                    tmp_28 = v4;
                                    v4 = v4 % 2;
                                    v2 = v2 % 2;
                                    v2 = tmp_28 * 0x8000000000000000 | v2 % 2;
                                    tmp_24 = v2;
                                }
                                while (((long long)(tmp_24 & 1)) == 0);
                                if ((v13 | v4) == 0)
                                {
                                    break;
                                }
                                v12->field_0 = 0;
                            }
                        }
                    }
                    if (r10<8> > v4 || ((long long)v2) != 0 && rsi<8> > v2)
                    {
                        tmp_2 = rsi<8>;
                        v7 = rsi<8> - v2;
                        v13 = r10<8> - rcx<8> - ((long long)(tmp_2 < v2));
                        do
                        {
                            tmp_3 = v7 % 2;
                            tmp_37 = v13;
                            v13 = v13 % 2;
                            v7 = tmp_37 * 0x8000000000000000 | v7 % 2;
                        }
                        while ((((char)((int)tmp_3)) & 1) == 0);
                        break;
                    }
                }
                v12->field_0 = 0;
            }
            else
            {
                v12->field_0 = 0;
            }
        }
        else
        {
            v12->field_0 = v5;
            return v10;
        }
    }
    else
    {
        v0 = v3;
        __assert_fail(); /* do not return */
    }
}
