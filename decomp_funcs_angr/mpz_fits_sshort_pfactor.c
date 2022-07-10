typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_fits_sshort_p()
{
    char v1;  // al
    unsigned long long v2;  // rax
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx
    struct_0 *v5;  // rdi
    unsigned long long v6;  // r8
    unsigned long long v7;  // cc_dep1
    unsigned long long v8;  // cc_dep2

    v6 = 0;
    if (((int)v5->field_4) >= 0)
    {
        if (v5->field_4 > 1)
        {
            return v6;
        }
        v6 = 1;
        if (v5->field_4 == 0)
        {
            return v6;
        }
        else
        {
            v4 = v5->field_8->field_0;
            v2 = 0;
            v1 = ((char)!(v4 <= 32767));
            v7 = v4;
            v8 = 32766;
            v3 = ((long long)(((int)(rax<8> - [D] amd64g_calculate_condition(0x6<64>, 0x8<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))) != 1));
            return v3;
        }
    }
    if (v5->field_4 != -1)
    {
        return v6;
    }
    else
    {
        v4 = v5->field_8->field_0;
        v2 = 0;
        v1 = ((char)!(v4 <= 0x8000));
        v7 = v4;
        v8 = 32767;
        v3 = ((long long)(((int)(rax<8> - [D] amd64g_calculate_condition(0x6<64>, 0x8<64>, cc_dep1<8>, cc_dep2<8>, cc_ndep<8>))) != 1));
        return v3;
    }
}
