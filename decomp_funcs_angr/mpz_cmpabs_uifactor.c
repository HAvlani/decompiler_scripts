typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    struct struct_1 *field_8;
} struct_0;

int mpz_cmpabs_ui()
{
    unsigned long long v1;  // al
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long v4;  // rdx
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi

    v1 = ((long long)v6->field_4);
    if ((((int)(((long long)v6->field_4) >> 31)) ^ v6->field_4) - ((int)(((long long)v6->field_4) >> 31)) > 1)
    {
        return 1;
    }
    v3 = 0;
    if (((int)v6->field_4) != 0)
    {
        v3 = v6->field_8->field_0;
        v1 = 0;
        v1 = ((char)(v5 < v6->field_8->field_0));
        v4 = ((long long)!(rsi<8> <= rdx<8>));
        v2 = ((long long)(v1 - v4));
        return v2;
    }
    else
    {
        v4 = ((long long)!(rsi<8> <= rdx<8>));
        v2 = ((long long)(v1 - v4));
        return v2;
    }
}
