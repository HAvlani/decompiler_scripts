typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[16];
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char field_32;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
    char field_11;
    char padding_12[6];
    unsigned long long field_18;
} struct_2;

extern unsigned int g_40902a;

int get_spec_stats()
{
    BOT tmp_11;  // tmp #11
    unsigned long long v1;  // rax
    unsigned int v2;  // eax
    char|unsigned long long|unsigned int v3;  // rdx
    unsigned long long v4;  // rbx
    struct_2 * v5;  // rbp
    struct_0 *v6;  // rdi
    unsigned long long v7;  // r13
    unsigned long long v8;  // r14
    unsigned long v9;  // cc_ndep

    v8 = 0;
    v6->field_30 = 0;
    v5 = v6->field_0->field_8;
    v6->field_20 = 0;
    v6->field_32 = 0;
    if (v5 != 0)
    {
        while (true)
        {
            /* goto ((long long)*(4231832 + ((long long)*(rbp<8>)) * 4)) + 4231832; */
            v4 = v5->field_18;
            if (v5->field_18 == 0)
            {
                v6->field_20 = v6->field_20 + 1;
                v6->field_28 = v5;
                /* goto 4209203; */
            }
            v4 = 1;
            /* goto 4209181; */
            v2 = ((int)v5->field_11);
            v3 = ((int)v5->field_10);
            if (((long long)v5->field_11) >= ((long long)v5->field_10))
            {
                v1 = ((long long)(v2 - v3));
                v4 = v1 + 1;
                /* goto 4209181; */
            }
            else
            {
                __assert_fail(); /* do not return */
            }
            if (True)
            {
                v7 = 0;
                v4 = 0;
                v6->field_31 = 1;
            }
            while (true)
            {
                v1 = is_char_class_member();
                v9 = ((long long)(((long long)v1) < 1));
                v4 = v4 - 18446744069414584319 - ((long long)(((long long)v1) < 1));
                v7 = ((int)v7) + 1;
                if (((int)1) == 0x100)
                {
                    break;
                }
            }
            if ((v6->field_0->field_8->field_10 - 6 & -5) != 0)
            {
                v6->field_32 = 1;
            }
            v4 = rbx<8> + v8;
            v8 = v4;
            if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r14<8>, r14<8>, cc_ndep<8>)))
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40902a, 0x5));
            }
            else if (v8 == 18446744069414584319)
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40902a, 0x5));
            }
            if (True)
            {
                v1 = 0;
                v4 = 0;
            }
            do
            {
                v3 = 0;
                v3 = ((char)(v6->field_0->field_8->field_10 == v1));
                v1 = ((long long)(((int)v1) + 1));
                tmp_11 = rdx<8>;
                v4 += tmp_11;
            }
            while (((int)v1) != 0x100);
            v6->field_30 = 1;
            /* goto 4209181; */
            if ((v5->field_18 == 0 || !(((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r14<8>, r14<8>, cc_ndep<8>)))) && (v5->field_18 == 0 || v8 != 18446744069414584319))
            {
                v5 = v5->field_8;
                v6->field_18 = v8;
                return v6;
            }
            /* goto ((long long)*(4231832 + ((long long)*(rbp<8>)) * 4)) + 4231832; */
            v4 = v5->field_18;
            if (v5->field_18 == 0)
            {
                v6->field_20 = v6->field_20 + 1;
                v6->field_28 = v5;
                /* goto 4209203; */
            }
            v4 = 1;
            /* goto 4209181; */
            v2 = ((int)v5->field_11);
            v3 = ((int)v5->field_10);
            if (((long long)v5->field_11) >= ((long long)v5->field_10))
            {
                v1 = ((long long)(v2 - v3));
                v4 = v1 + 1;
                /* goto 4209181; */
            }
            else
            {
                __assert_fail(); /* do not return */
            }
            if (True)
            {
                v7 = 0;
                v4 = 0;
                v6->field_31 = 1;
            }
            while (true)
            {
                v1 = is_char_class_member();
                v9 = ((long long)(((long long)v1) < 1));
                v4 = v4 - 18446744069414584319 - ((long long)(((long long)v1) < 1));
                v7 = ((int)v7) + 1;
                if (((int)1) == 0x100)
                {
                    break;
                }
            }
            if ((v6->field_0->field_8->field_10 - 6 & -5) != 0)
            {
                v6->field_32 = 1;
            }
            v4 = rbx<8> + v8;
            v8 = v4;
            if (((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r14<8>, r14<8>, cc_ndep<8>)))
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40902a, 0x5));
            }
            else if (v8 == 18446744069414584319)
            {
                error(0x1, 0x0, dcgettext(0x0, &g_40902a, 0x5));
            }
            if (True)
            {
                v1 = 0;
                v4 = 0;
            }
            do
            {
                v3 = 0;
                v3 = ((char)(v6->field_0->field_8->field_10 == v1));
                v1 = ((long long)(((int)v1) + 1));
                tmp_11 = rdx<8>;
                v4 += tmp_11;
            }
            while (((int)v1) != 0x100);
            v6->field_30 = 1;
            /* goto 4209181; */
        }
    }
    else
    {
        v6->field_18 = v8;
        return v6;
    }
}
