typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

extern unsigned int g_40a088;
extern char posixly_correct;

int vstrtoimax()
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v10;  // r12
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    struct_1 * v7;  // rbx
    char v8[3];  // rbp
    char [3]|char * v9;  // rdi

    v8 = v9;
    if (v9[0] != 34)
    {
        if (v9[0] != 39)
        {
            *(__errno_location() + None) = 0;
            v10 = __strtol_internal(v9, ((int)&v0), 0x0, 0x0);
            verify_numeric();
            v5 = v10;
            return v5;
        }
    }
    if (v9[0] == 34 || v9[0] == 39)
    {
        v10 = ((long long)v8[1]);
        if (((long long)v8[1]) == 0)
        {
            *(__errno_location() + None) = 0;
            v10 = __strtol_internal(v9, ((int)&v0), 0x0, 0x0);
            verify_numeric();
            v5 = v10;
            return v5;
        }
        v7 = v8 + 1;
        v4 = __ctype_get_mb_cur_max();
        if (!(v4 > 1))
        {
            v4 = ((long long)v8[2]);
        }
        else if (v8[2] == 0)
        {
            v5 = v10;
            return v5;
        }
        else
        {
            v1 = 0;
            v9 += 1;
            strlen(v9);
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
                v10 = ((long long)v0);
                v7 = v8 + rpl_mbrtowc();
            }
            v4 = ((long long)v7->field_1);
        }
        if (v4 <= 1 || v8[2] != 0)
        {
            if (((long long)v4) == 0)
            {
                v5 = v10;
                return v5;
            }
            else if (posixly_correct != 0)
            {
                v5 = v10;
                return v5;
            }
            else
            {
                error(0x0, 0x0, dcgettext(0x0, &g_40a088, 0x5));
                v5 = v10;
                return v5;
            }
        }
    }
}
