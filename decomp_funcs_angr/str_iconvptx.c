typedef struct struct_0 {
    char field_0;
} struct_0;

int str_iconv()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned int v3;  // edx
    unsigned int v4;  // esi
    struct_0 *v5;  // rdi
    unsigned long long v6;  // r12
    unsigned int v7;  // r13d

    if (v5->field_0 != 0)
    {
        v2 = c_strcasecmp();
        if (v2 != 0)
        {
            v2 = iconv_open(v3, v4);
            v7 = ((int)v2);
            if (v2 != 18446744069414584319)
            {
                v6 = (long long)str_cd_iconv();
                if (v6 != 0)
                {
                    v2 = iconv_close(v7);
                    if (v2 >= 0)
                    {
                        v1 = v6;
                        return v1;
                    }
                    v6 = 0;
                    rpl_free();
                    v1 = v6;
                    return v1;
                }
                iconv_close(v7);
                *(__errno_location() + None) = ((int)v5->field_0);
                v1 = v6;
                return v1;
            }
            v6 = 0;
            v1 = v6;
            return v1;
        }
    }
    if (v2 == 0 || v5->field_0 == 0)
    {
        v6 = strdup(v5);
        if (v6 != 0)
        {
            v1 = v6;
            return v1;
        }
        *(__errno_location() + None) = 12;
        v1 = v6;
        return v1;
    }
}