typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    char field_0;
} struct_0;

int build_upper_buffer()
{
    BOT tmp_22;  // tmp #22
    BOT tmp_7;  // tmp #7
    BOT tmp_24;  // tmp #24
    BOT tmp_11;  // tmp #11
    struct_1 *v1;  // rax
    unsigned long v2;  // rax
    unsigned long long v3;  // rdx
    struct_0 * v4;  // rdx
    char * v5;  // rbx
    unsigned long long v6[16];  // rbp
    unsigned long long v7[16];  // rdi
    unsigned long v8;  // r12

    tmp_22 = v7[11];
    tmp_7 = v7[8];
    v6 = v7;
    v8 = (tmp_7 <= tmp_22? v7[8] : tmp_22);
    v5 = v7[6];
    if ((tmp_7 <= tmp_22? v7[8] : tmp_22) > v7[6])
    {
        v1 = __ctype_toupper_loc();
        do
        {
            v4 = ((long long)*(v6[0] + v5 + v6[5]));
            if (v6[15] != 0)
            {
                v4 = ((long long)*(v7[15] + v4));
            }
            v3 = ((long long)*(v1->field_0 + v4 * 4));
            tmp_24 = v3;
            *(v6[1] + v5) = tmp_24;
            v5 += 1;
        }
        while (v8 != v5);
        v6[6] = (tmp_7 <= tmp_22? v7[8] : tmp_22);
        v6[7] = v8;
        return v1;
    }
    tmp_11 = v7[6];
    v6[6] = v7[6];
    v6[7] = tmp_11;
    return v2;
}
