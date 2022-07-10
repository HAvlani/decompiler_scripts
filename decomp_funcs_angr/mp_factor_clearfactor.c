typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int mp_factor_clear()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long|unsigned long long v4;  // rbx
    struct_0 *|unsigned long long v6;  // rdi

    v0 = v4;
    if (v6->field_10 != 0)
    {
        v4 = 0;
        while (true)
        {
            mpz_clear();
            v6 = v4 + 1;
            v4 += 1;
            if (v6 >= v6->field_10)
            {
                break;
            }
        }
        rpl_free();
    }
    else
    {
        rpl_free();
    }
}
