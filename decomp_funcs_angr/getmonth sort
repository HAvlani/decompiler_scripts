typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char blanks;
extern char fold_toupper;
extern struct struct_0 *monthtab[13];

int getmonth()
{
    BOT tmp_9;  // tmp #9
    char *|unsigned long long v1;  // rax
    unsigned long long v10;  // r11
    unsigned long long v11;  // cc_dep1
    unsigned long long v12;  // cc_dep2
    unsigned long long v2;  // rax
    char [2] v3;  // rcx
    char [2] v4;  // rdx
    struct_1 *v5;  // rbx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rsi
    char [2] v8;  // rdi
    unsigned long long v9;  // r10

    v1 = ((long long)v8[0]);
    v5 = v7;
    if (*(v1 + 0x41d760) != 0)
    {
        do
        {
            v1 = ((long long)v8[1]);
            v8 += 1;
        }
        while (*(v1 + 0x41d760) != 0);
    }
    v10 = 12;
    v6 = 0;
    while (true)
    {
        v3 = v8;
        v9 = v6 + v10 >> 1;
        v4 = monthtab[(v6 + v10 >> 1) * 2];
        v1 = ((long long)monthtab[(v6 + v10 >> 1) * 2]->field_0);
        if (((long long)monthtab[(v6 + v10 >> 1) * 2]->field_0) == 0)
        {
        }
        else
        {
            while (true)
            {
                v11 = ((long long)*(fold_toupper + ((long long)v3[0])));
                v12 = ((long long)v1);
                if (((long long)*(fold_toupper + ((long long)v3[0]))) < ((long long)v1))
                {
                    v10 = 12 >> 1;
                }
                else if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>)))
                {
                    v1 = ((long long)v4[1]);
                    v4 += 1;
                    v3 += 1;
                    tmp_9 = v1;
                }
                else
                {
                    v6 = (12 >> 1) + 1;
                }
                if (((long long)*(fold_toupper + ((long long)v3[0]))) < ((long long)v1) || !(((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))))
                {
                    v2 = 0;
                    return v2;
                }
            }
            if (((long long)*(fold_toupper + ((long long)v3[0]))) < ((long long)v1) || !(((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))))
            {
                v3 = v8;
                v9 = v6 + v10 >> 1;
                v4 = monthtab[(v6 + v10 >> 1) * 2];
                v1 = ((long long)monthtab[(v6 + v10 >> 1) * 2]->field_0);
            }
        }
        if (v5 != 0)
        {
            v5->field_0 = v3;
            v2 = ((long long)*(&monthtab + v9 * 16 + 8));
            break;
        }
        else
        {
            v2 = ((long long)*(&monthtab + v9 * 16 + 8));
            return v2;
        }
    }
    return v2;
}
