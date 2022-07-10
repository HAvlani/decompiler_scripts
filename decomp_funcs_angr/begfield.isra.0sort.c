typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[32];
    char field_30;
} struct_0;

extern char blanks;
extern struct_1 tab;

int begfield.isra.0()
{
    BOT tmp_12;  // tmp #12
    unsigned long long v1;  // rax
    unsigned long long v10;  // r8
    unsigned long long v2;  // rcx
    struct_0 *v3;  // rdx
    unsigned int v4;  // esi
    unsigned long v5;  // rsi
    char * v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi

    v1 = v6 + v5 - 1;
    v4 = ((int)tab);
    v2 = v3->field_0;
    if (tab != 128)
    {
        if (v6 + v5 - 1 > v6)
        {
            v10 = v2 - 1;
            if (v2 != 0)
            {
                while (true)
                {
                    if (tab != ((int)*(v6)))
                    {
                        v6 += 1;
                        v7 = v6 + v3->field_8;
                        tmp_12 = !(rax<8> <= v7);
                        return (tmp_12? v7 : rax<8>);
                    }
                    else if (v1 > v6)
                    {
                        v7 = v6 + v3->field_8;
                        tmp_12 = !(rax<8> <= v7);
                        return (tmp_12? v7 : rax<8>);
                        v6 += 1;
                        if (v1 > v6)
                        {
                            v10 -= 1;
                            v7 = v6 + v3->field_8;
                            tmp_12 = !(rax<8> <= v7);
                            return (tmp_12? v7 : rax<8>);
                        }
                    }
                }
            }
        }
        v7 = v6 + v3->field_8;
        tmp_12 = !(rax<8> <= v7);
        return (tmp_12? v7 : rax<8>);
    }
    if (v6 + v5 - 1 <= v6)
    {
        v7 = v6 + v3->field_8;
        tmp_12 = !(rax<8> <= v7);
        return (tmp_12? v7 : rax<8>);
    }
    else if (v3->field_0 != 0)
    {
        while (true)
        {
            v2 = ((long long)*(blanks + ((long long)*(v6))));
            while (true)
            {
                if (((long long)v2) != 0)
                {
                    v6 += 1;
                    v9 = v6 + v3->field_8;
                    tmp_12 = !(rax<8> <= v9);
                    return (tmp_12? v9 : rax<8>);
                }
                else if (v1 > v6)
                {
                    v7 = v6 + v3->field_8;
                    tmp_12 = !(rax<8> <= v7);
                    return (tmp_12? v7 : rax<8>);
                    while (true)
                    {
                        v6 += 1;
                        if (v1 != v6)
                        {
                            v2 = ((long long)*(blanks + ((long long)*(v6))));
                            if (v1 > v6)
                            {
                                v7 = v6 + v3->field_8;
                                tmp_12 = !(rax<8> <= v7);
                                return (tmp_12? v7 : rax<8>);
                                break;
                            }
                        }
                        else
                        {
                            v7 = v6 + v3->field_8;
                            tmp_12 = !(rax<8> <= v7);
                            return (tmp_12? v7 : rax<8>);
                        }
                    }
                }
            }
            if (((long long)v2) != 0)
            {
                v2 = ((long long)*(blanks + ((long long)*(v6))));
            }
        }
    }
    if (v6 + v5 - 1 > v6)
    {
        v7 = v6 + v3->field_8;
        tmp_12 = !(rax<8> <= v7);
        return (tmp_12? v7 : rax<8>);
        while (true)
        {
            if (*(blanks + ((long long)*(rdi<8>))) != 0)
            {
                v6 = rdi<8> + 1;
                v7 = v6 + v3->field_8;
                tmp_12 = !(rax<8> <= v7);
                return (tmp_12? v7 : rax<8>);
            }
        }
        v8 = v6 + v3->field_8;
        tmp_12 = !(rax<8> <= v8);
        return (tmp_12? v8 : rax<8>);
    }
}
