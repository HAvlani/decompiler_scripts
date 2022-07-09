typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int opendir_safer()
{
    unsigned long long v1;  // rax
    unsigned int|unsigned long v10;  // r14
    unsigned long|unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    struct_0 *v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long long v7;  // r12
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    v8 = opendir();
    if (v2 != 0)
    {
        v2 = dirfd(((int)v2));
        if (v2 > 2)
        {
            v2 = v8;
            return v3;
        }
        v6 = rpl_fcntl();
        v5 = __errno_location();
        if (v6 < 0)
        {
            v10 = ((int)v5->field_0);
            v9 = 0;
            v7 = v9;
            closedir();
            v5->field_0 = v10;
            v1 = v7;
            return v1;
        }
        else
        {
            v10 = ((long long)v5->field_0);
            v9 = fdopendir(v6);
            if (v9 != 0)
            {
                v7 = v9;
                closedir();
                v5->field_0 = v10;
                v1 = v7;
                return v1;
            }
            else
            {
                close(v6);
                v7 = v9;
                closedir();
                v5->field_0 = v10;
                v1 = v7;
                return v1;
            }
        }
    }
    v2 = v8;
    return v3;
}
