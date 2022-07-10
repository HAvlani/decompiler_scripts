typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int opendir_safer()
{
    unsigned long|unsigned long long v1;  // rax
    unsigned long|unsigned int v10;  // r14d
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct_0 *v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long long v7;  // r12
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    v8 = opendir();
    if (v1 != 0)
    {
        v1 = dirfd();
        if (v1 > 2)
        {
            v1 = v8;
            return v4;
        }
        v6 = rpl_fcntl();
        v5 = __errno_location();
        if (v6 < 0)
        {
            v10 = ((long long)v5->field_0);
            v9 = 0;
            v7 = v9;
            closedir();
            v5->field_0 = v10;
            v3 = v7;
            return v3;
        }
        else
        {
            v10 = ((int)v5->field_0);
            v9 = fdopendir();
            if (v9 != 0)
            {
                v7 = v9;
                closedir();
                v5->field_0 = v10;
                v3 = v7;
                return v3;
            }
            else
            {
                close(v6);
                v7 = v9;
                closedir();
                v5->field_0 = v10;
                v3 = v7;
                return v3;
            }
        }
    }
    v1 = v8;
    return v4;
}