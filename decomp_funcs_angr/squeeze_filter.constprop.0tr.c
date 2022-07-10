extern unsigned int g_409082;
extern <missing-type> g_40e3df;
extern char in_squeeze_set;
extern unsigned long long io_buf;
extern struct_1 stdout;

int squeeze_filter.constprop.0()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned long long|char * v10;  // r12
    unsigned long|unsigned long long|unsigned int v11;  // r13
    unsigned long|unsigned long long v12;  // r15
    unsigned long long v13;  // cc_dep1
    unsigned long long|char * v3;  // rax
    unsigned long long|char * v4;  // rcx
    unsigned long|unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi

    v11 = 2147483647;
    v10 = v9;
    v7 = 0;
    v6 = 0;
    while (true)
    {
        if (v11 == 2147483647 && v12 < v6)
        {
            v12 = v7;
        }
        while (true)
        {
            break;
            v7 = v12;
            while (true)
            {
                v4 = &in_squeeze_set;
                v3 = ((long long)*(v7 + 4252640));
                if (*(in_squeeze_set + ((long long)*(v7 + 4252640))) != 0)
                {
                    v12 = v7;
                }
                v3 = fwrite_unlocked(&io_buf, 0x1, 0x0, stdout);
                if (v0 != v3 || v3 != 0)
                {
                    v10 = dcgettext(0x0, &g_409082, 0x5);
                    error(0x1, *(__errno_location()), v10);
                }
                if (*(in_squeeze_set + ((long long)*(v7 + 4252640))) == 0 || v0 != v3 || v3 != 0)
                {
                    v5 = v7 + 2;
                    v13 = v7 + 2;
                    if (((char)(v13 == 0)) && v7 + 2 >= 0)
                    {
                        v7 += 1;
                        v4 = ((long long)*(v7 + 4252640));
                        v3 = ((long long)*(v7 + 4252640));
                    }
                    if (v7 + 2 >= 0 && (*(v4 + 0x40e2e0) == 0 || v7 >= 0 || !(((char)(v13 == 0)))))
                    {
                        v11 = 2147483647;
                        break;
                        if (0 > v7)
                        {
                            break;
                        }
                    }
                }
                if (...)
                {
                    v11 = ((long long)v3);
                    v4 = v7 - 0;
                    v5 = v7 - 0 + 1;
                    if (v7 != 0)
                    {
                        v5 = (*(v7 + 4252639) == v3? v4 : rdx<8>);
                    }
                    v7 += 1;
                    if (v5 == 0)
                    {
                        break;
                    }
                    v0 = v5;
                    v3 = fwrite_unlocked(&io_buf, 0x1, v5, stdout);
                    if (v0 == v3)
                    {
                        break;
                    }
                }
                if (False)
                {
                    v12 = v7;
                    /* goto 4213121; */
                    v7 = v5;
                }
                if (v3 == 0)
                {
                    v11 = 2147483647;
                    break;
                }
            }
            if (v3 == 0 || 0 <= v7 && *(v4 + 0x40e2e0) == 0 || 0 <= v7 && v7 >= 0 || 0 <= v7 && !(((char)(v13 == 0))))
            {
                v8 = 0x2000;
                v9 = &io_buf;
                v6 = r12<8>();
            }
        }
        if (False)
        {
            v8 = 0x2000;
            v9 = &io_buf;
            v6 = r12<8>();
        }
        v8 = 0x2000;
        v9 = &io_buf;
        v6 = r12<8>();
        return v1;
        if (v11 != 2147483647)
        {
            v7 = 0;
        }
        else
        {
            v12 = 0;
            /* goto 4212922; */
        }
        if (v11 == ((int)*(io_buf + rbp<8>)) || reg_120<4> == ((int)*(io_buf + rbp<8>)))
        {
            v7 = rbp<8> + 1;
        }
        if (reg_120<4> != ((int)*(io_buf + rbp<8>)) || ((v11 == ((int)*(io_buf + rbp<8>)) || reg_120<4> == ((int)*(io_buf + rbp<8>))) && rbx<8> != v7 || v12 < v6 && v11 != 2147483647) && v11 != ((int)*(io_buf + rbp<8>)))
        {
            v11 = 2147483647;
        }
    }
}
