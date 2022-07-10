typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_fits_slong_p()
{
    struct_0 *v1;  // rdi
    unsigned long long v2;  // r8

    v2 = 0;
    if (((int)v1->field_4) >= 0)
    {
        if (v1->field_4 > 1)
        {
            return v2;
        }
        v2 = 1;
        if (v1->field_4 == 0)
        {
            return v2;
        }
        else
        {
            return ((long long)(((int)((v1->field_8->field_0 >> 63) - ((long long)(v1->field_8->field_0 <= 9223372036854775806)))) != 1));
        }
    }
    if (v1->field_4 != -1)
    {
        return v2;
    }
    else
    {
        v2 = 0;
        v2 = ((char)(((int)(((long long)!(v1->field_8->field_0 <= 0x8000000000000000)) - (!(v1->field_8->field_0) >> 63))) != 1));
        return v2;
    }
}
