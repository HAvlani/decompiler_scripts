typedef struct struct_0 {
    char padding_0[56];
    char field_38;
} struct_0;

int rpl_re_set_registers()
{
    BOT tmp_19;  // tmp #19
    unsigned long v1;  // rax
    unsigned long v2;  // rcx
    unsigned long v3;  // rdx
    unsigned long long v4[3];  // rsi
    unsigned long long v5[3];  // rsi
    struct_0 *v6;  // rdi
    struct_0 *v7;  // rdi
    unsigned long v8;  // r8

    if (v3 != 0)
    {
        tmp_19 = ((int)v7->field_38);
        v7->field_38 = ((char)(((int)v7->field_38) & -7 | 2));
        v4[0] = v3;
        v4[1] = v2;
        v4[2] = v8;
        return ((long long)(tmp_19 & -7 | 2));
    }
    v6->field_38 = v6->field_38 & 249;
    v5[0] = 0;
    v5[2] = 0;
    v5[1] = 0;
    return v1;
}
