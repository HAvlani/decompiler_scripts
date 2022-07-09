typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int mpz_cmpabs()
{
    struct_1 * v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    struct_1 *v4;  // rsi
    struct_0 *v5;  // rsi
    struct_0 *v6;  // rdi
    struct_1 *v7;  // r8

    v1 = ((long long)((v6->field_4 ^ ((int)(((long long)v6->field_4) >> 31))) - ((int)(((long long)v6->field_4) >> 31))));
    if (((long long)((v5->field_4 ^ ((int)(((long long)v5->field_4) >> 31))) - ((int)(((long long)v5->field_4) >> 31)))) != ((long long)((v6->field_4 ^ ((int)(((long long)v6->field_4) >> 31))) - ((int)(((long long)v6->field_4) >> 31)))))
    {
        return ...;
    }
    v7 = v5->field_8;
    v4 = v6->field_8;
    while (true)
    {
        v1 -= 1;
        if (v1 != 18446744069414584319)
        {
            v3 = *(v4 + v1 * 8);
            v2 = *(v7 + v1 * 8);
            return ((long long)((0 - ((int)(v2 < v3)) & 2) - 1));
        }
        else
        {
            return 0;
        }
    }
}
