typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern unsigned int g_409030;
extern unsigned int g_409b35;
extern unsigned int g_409b39;
extern struct_0 *outlist_end;

int add_field_list()
{
    unsigned long long v1;  // rax
    unsigned long long v10;  // r12
    unsigned long long v11;  // r12
    char *v2;  // rax
    struct_1 *v3;  // rdx
    unsigned int v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r12
    unsigned long long v9;  // r12

    v6 = v7;
    while (true)
    {
        v9 = 0;
        v2 = strpbrk(((int)v6), &g_409b35);
        if (v2 != 0)
        {
            *(v2) = 0;
            v9 = v2 + 1;
        }
        v1 = ((long long)*(v6));
        if (*(v6) == 48)
        {
            if (*(v6 + 1) == 0)
            {
                v5 = 0;
                v4 = 0;
            }
            else
            {
                v10 = (long long)quote();
                error(0x1, 0x0, dcgettext(0x0, &g_409b39, 0x5));
            }
        }
        else
        {
            if ((v1 - 49 & 255) > 1)
            {
                v11 = (long long)quote();
                error(0x1, 0x0, dcgettext(0x0, &g_409030, 0x5));
            }
            else if (*(v6 + 1) == 46)
            {
                ((unsigned int)v4) = v1 - 48;
                v5 = (long long)string_to_join_field();
                if (((int)((unsigned int)v4)) > 2)
                {
                    __assert_fail(); /* do not return */
                }
                else if (((int)((unsigned int)v4)) == 0)
                {
                    if (v5 != 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            else
            {
                v8 = (long long)quote();
                error(0x1, 0x0, dcgettext(0x0, &g_409b39, 0x5));
            }
        }
        if ((((int)((unsigned int)v4)) <= 2 || *(v6) == 48) && (*(v6 + 1) == 46 || *(v6) == 48) && (*(v6) == 48 || (v1 - 49 & 255) <= 1) && (*(v6 + 1) == 0 || *(v6) != 48) && (v5 == 0 || *(v6) == 48 || ((int)((unsigned int)v4)) != 0))
        {
            *(outlist_end) = v4;
            *(outlist_end + 8) = v5;
            *(outlist_end + 16) = 0;
            outlist_end = (long long)xmalloc();
            v3->field_10 = outlist_end;
            if (v9 != 0)
            {
                v6 = v9;
            }
            else
            {
                return outlist_end;
            }
        }
    }
}
