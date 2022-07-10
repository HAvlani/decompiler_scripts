typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

int null()
{
    BOT tmp_6;  // tmp #6
    struct_2 * v1;  // rax
    unsigned long long v2;  // rdx
    struct_0 *v3;  // rdi
    char|unsigned long|unsigned long long v4;  // r8

    if (v3->field_0 == 0)
    {
        v4 = ((char)(mpz_sgn() == 0));
        return v4;
    }
    else if (v3->field_0 == 1)
    {
        v4 = 1;
        if (((long long)v3->field_8->field_0) == 0)
        {
            return v4;
        }
        v1 = v3->field_8 + ((long long)(v3->field_8->field_0 == 45));
        v2 = ((long long)*(v3->field_8 + ((long long)(v3->field_8->field_0 == 45))));
        while (true)
        {
            if (v2 == 48)
            {
                v2 = ((long long)v1->field_1);
                v1 += 1;
                tmp_6 = v2;
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
}
