typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 __re_error_msgid_idx;

int rpl_regerror()
{
    unsigned long long v2;  // rcx
    unsigned long v3;  // rdx
    unsigned long long v4;  // rbx
    void *v5;  // rbp
    struct_0 *v6;  // rdi
    unsigned long v7;  // r12
    void *v8;  // r13

    v8 = v3;
    v4 = v2;
    v5 = dcgettext(0x0, ((int)("Success" + *(__re_error_msgid_idx + v6 * 8))), 0x5);
    v7 = strlen(v5) + 1;
    if (v2 != 0)
    {
        v3 = v7;
        if (v7 <= v2)
        {
            memcpy(v8, v5, v3);
            return v3;
        }
        *(v8 + v4 + 1) = 0;
        v3 = v4 - 1;
        memcpy(v8, v5, v3);
        return v3;
    }
    return v3;
}
