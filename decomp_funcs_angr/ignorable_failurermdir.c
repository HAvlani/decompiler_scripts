typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern char ignore_fail_on_non_empty;

int ignorable_failure()
{
    BOT tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned int|unsigned long v10;  // rbp
    unsigned int v11;  // ebp
    unsigned long v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r12
    unsigned long long v2;  // [bp-0x8]
    char [21]|struct_1 *|unsigned long long v4;  // rax
    unsigned long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long v7;  // rbx
    struct_1 *v8;  // rbx
    unsigned long long v9;  // rbx

    if (!(ignore_fail_on_non_empty != 0))
    {
        return 0;
    }
    else if (!(((long long)(((char)(((int)v12) == 17)) | ((char)(((int)v12) == 39)))) == 0))
    {
        return v5;
    }
    else if (!(((int)v12) <= 30))
    {
        return v5;
    }
    else if ((((int)(1 << (((char)v12) & 63))) & 1073815554) == 0)
    {
        return v5;
    }
    else
    {
        v2 = v13;
        v1 = &stack_base+0;
        v0 = v7;
        v11 = openat(0xffffff9c);
        v4 = __errno_location();
        v8 = v4;
        if (v11 >= 0)
        {
            v13 = fdopendir(v11);
            if (v13 != 0)
            {
                v8->field_0 = 0;
                while (true)
                {
                    v4 = readdir();
                    if (v4 != 0)
                    {
                        if (v4[19] == 46)
                        {
                            v4 = ((long long)v4 + ((long long)(v4[20] == 46))[20]);
                            tmp_11 = v4;
                        }
                        v10 = ((long long)v8->field_0);
                        v4 = closedir();
                        v8->field_0 = ((int)v10);
                    }
                    else
                    {
                        v10 = ((long long)v8->field_0);
                        v4 = closedir();
                        v8->field_0 = ((int)v10);
                        if (((int)v10) != 0)
                        {
                            v6 = ((char)(v10 == 0));
                            v9 = v0;
                            v14 = v2;
                            return v6;
                        }
                        v6 = 0;
                        v9 = v0;
                        v14 = v2;
                        return v6;
                    }
                }
                v6 = ((char)(v10 == 0));
                v9 = v0;
                v14 = v2;
                return v6;
            }
            v4 = close(v11);
            v10 = ((long long)v8->field_0);
            v6 = ((char)(v10 == 0));
            v9 = v0;
            v14 = v2;
            return v6;
        }
        v10 = ((int)v4->field_0);
        v6 = ((char)(v10 == 0));
        v9 = v0;
        v14 = v2;
        return v6;
    }
}
