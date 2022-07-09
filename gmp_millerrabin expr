typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_2 *field_8;
} struct_1;

int gmp_millerrabin()
{
    struct_0 *v2;  // rdx
    struct_1 *v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned long v5;  // r8

    if (v5 != 0)
    {
        v3 = v2;
        v4 = v5;
        mpz_powm();
        if (v2->field_4 > 0)
        {
            if (v2->field_4 <= 1)
            {
                if (((char)!(v3->field_8->field_0 <= 1)) == ((char)(v3->field_8->field_0 == 0)))
                {
                    return 1;
                }
            }
        }
        if (v2->field_4 <= 0 || v2->field_4 > 1 || ((char)!(v3->field_8->field_0 <= 1)) != ((char)(v3->field_8->field_0 == 0)))
        {
            while (true)
            {
                if (mpz_cmp() != 0)
                {
                    v4 -= 1;
                    if (v4 != 1)
                    {
                        mpz_powm_ui();
                    }
                    else
                    {
                        return 0;
                    }
                }
                else
                {
                    break;
                }
            }
            return 1;
        }
    }
    __assert_fail(); /* do not return */
}
