typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_cmpabs_ui()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rdx
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi

    v2 = ((long long)v6->field_4);
    if ((((int)(((long long)v6->field_4) >> 31)) ^ v6->field_4) - ((int)(((long long)v6->field_4) >> 31)) > 1)
    {
        return 1;
    }
    v4 = 0;
    if (((int)v6->field_4) != 0)
    {
        v4 = v6->field_8->field_0;
        v2 = 0;
        v2 = ((char)(v5 < v6->field_8->field_0));
        v3 = ((long long)!(rsi<8> <= rdx<8>));
        v1 = ((long long)(v2 - v3));
        return v1;
    }
    else
    {
        v3 = ((long long)!(rsi<8> <= rdx<8>));
        v1 = ((long long)(v2 - v3));
        return v1;
    }
}
