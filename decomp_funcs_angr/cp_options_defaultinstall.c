typedef struct struct_0 {
    char padding_0[26];
    char field_1a;
    char field_1b;
    char padding_1c[36];
    unsigned int field_40;
} struct_0;

int cp_options_default()
{
    unsigned long long v1;  // rax
    char v2;  // al
    unsigned long long v3;  // rcx
    struct_0 *v4;  // rbx
    unsigned long long [10] v5;  // rdi
    unsigned long v6;  // rdi
    unsigned long v7;  // d

    v4 = v6;
    *(v6 + 8 + 8) = 0;
    *(v6 + 8 + 72) = 0;
    v5 = v6 + 8 & 18446744069414584312;
    for (v3 = ((long long)(((int)(v4 - v5)) + 88)) >> 3; v3 != 0; v5 += v7 * 8)
    {
        v3 -= 1;
        v5[0] = 0;
    }
    v1 = geteuid();
    v4->field_40 = -1;
    v2 = ((char)(((int)v1) == 0));
    v4->field_1b = ((char)(((int)v1) == 0));
    v4->field_1a = ((char)(((int)v1) == 0));
    return rax<8>;
}
