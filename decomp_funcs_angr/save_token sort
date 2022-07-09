typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[8];
    unsigned long long field_48;
    char padding_50[24];
    char field_68;
    char padding_69[31];
    unsigned long long field_88;
    unsigned long long field_90;
    char padding_98[72];
    unsigned long long field_e0;
    unsigned long long field_e8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int save_token()
{
    BOT tmp_19;  // tmp #19
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    struct_1 * v4;  // rdx
    struct_1 * v5;  // rdx
    unsigned long long v6;  // rdx
    struct_0 *v7;  // rbx
    struct_0 *v8;  // rdi

    v7 = v8;
    if (v8->field_30 == v8->field_28)
    {
        v8->field_68 = v8->field_68 | 2;
    }
    v6 = v7->field_38;
    v1 = v8->field_30 + v8->field_48 & !(v7->field_48);
    v3 = v7->field_20;
    v7->field_30 = v8->field_30 + v8->field_48 & !(v7->field_48);
    if (v1 - v3 > v1 - v3)
    {
        v7->field_30 = v8->field_38;
        v1 = v6;
    }
    v7->field_28 = v1;
    v5 = v7->field_88;
    if (v7->field_90 - v7->field_88 <= 7)
    {
        _obstack_newchunk();
        v5 = v7->field_88;
    }
    v5->field_0 = v8->field_28;
    v4 = v7->field_e0;
    tmp_19 = v7->field_e8;
    v7->field_88 = v7->field_88 + 8;
    v2 = tmp_19 - v4;
    if (tmp_19 - v4 > 7)
    {
        v4->field_0 = v8->field_30 - v8->field_28 - 1;
        v7->field_e0 = v7->field_e0 + 8;
        v7->field_0 = v7->field_0 + 1;
        return v2;
    }
    v2 = _obstack_newchunk();
    v4 = v7->field_e0;
    v4->field_0 = v8->field_30 - v8->field_28 - 1;
    v7->field_e0 = v7->field_e0 + 8;
    v7->field_0 = v7->field_0 + 1;
    return v2;
}
