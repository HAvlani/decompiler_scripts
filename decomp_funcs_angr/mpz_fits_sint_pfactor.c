typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_fits_sint_p()
{
    unsigned long long v1;  // rcx
    struct_0 *v2;  // rdi
    unsigned long long v3;  // r8b

    v3 = 0;
    if (((int)v2->field_4) >= 0)
    {
        if (v2->field_4 > 1)
        {
            return v3;
        }
        v3 = 1;
        if (v2->field_4 == 0)
        {
            return v3;
        }
        else
        {
            return ((long long)(((int)(!(v2->field_8->field_0 <= 2147483647) - (v2->field_8->field_0 <= 2147483646))) != 1));
        }
    }
    if (v2->field_4 != -1)
    {
        return v3;
    }
    else
    {
        v1 = v2->field_8->field_0;
        v3 = 0;
        v3 = ((char)(((int)(!(v1 <= 0x80000000) - (v1 < 0x80000000))) != 1));
        return v3;
    }
}
