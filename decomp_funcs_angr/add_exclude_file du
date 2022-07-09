typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int add_exclude_file()
{
    unsigned long v0;  // [bp-0x30]
    unsigned int v10;  // r13d
    char v11;  // cc_dep1
    unsigned long long v3;  // rax
    char v4[2];  // rdx
    struct_0 *v5;  // rbx
    unsigned long long v7;  // rbp
    unsigned long v8;  // rdi
    unsigned long long v9;  // r12

    v11 = ((char)v4[0]);
    v0 = v8;
    if (v11 == 45)
    {
        if (v4[1] == 0)
        {
            return (long long)add_exclude_fp();
        }
    }
    if (v4[1] != 0 || v11 != 45)
    {
        v7 = fopen(v4, "re");
        if (v7 != 0)
        {
            v9 = (long long)add_exclude_fp();
            v10 = ((int)v5->field_0);
            if (rpl_fclose() == 0)
            {
                *(__errno_location() + None) = v10;
                v3 = v9;
                return v3;
            }
            v9 = -1;
            v3 = v9;
            return v3;
        }
        v9 = -1;
        v3 = v9;
        return v3;
    }
}
