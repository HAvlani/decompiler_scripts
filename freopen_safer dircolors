typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int freopen_safer()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long long|char v10;  // r13b
    unsigned long long|unsigned int v11;  // r14
    unsigned long|unsigned long long v12;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    struct_0 *v5;  // rbx
    unsigned long long|char v6;  // rbp
    unsigned int v7;  // esi
    unsigned long v8;  // rdi
    unsigned long long v9;  // r12

    v0 = v8;
    v6 = fileno(v4);
    v5 = __errno_location();
    if (!(v6 != 1))
    {
        v2 = dup2(0x0, 0x0);
        if (v2 != 0)
        {
            v6 = 0;
            v10 = 0;
            v12 = (long long)protect_fd();
            if (((long long)v12) == 0)
            {
                v11 = ((long long)v5->field_0);
                v9 = 0;
                /* goto 4210000; */
            }
        }
    }
    else if (v6 != 2)
    {
        if (v6 != 0)
        {
            v6 = ((char)(dup2(0x2, 0x2) != 2));
        }
    }
    if (v6 == 2)
    {
        v6 = 0;
    }
    if (v6 == 0 || v6 == 1 && v2 == 0)
    {
        v6 = 0;
        v10 = 0;
        v12 = 0;
    }
    if (v6 == 2 || v6 != 1 && v6 != 0)
    {
        v10 = ((char)(dup2(0x1, 0x1) != 1));
        v2 = dup2(0x0, 0x0);
    }
    if (v6 == 2 || v6 != 1)
    {
        if (v6 == 2 || v6 != 0)
        {
            if (v2 == 0)
            {
                v12 = 0;
            }
            else
            {
                v12 = (long long)protect_fd();
                if (((long long)v12) == 0)
                {
                    v12 = 1;
                    v9 = 0;
                    /* goto 4209823; */
                }
            }
            if (v2 == 0 || ((long long)v12) != 0)
            {
                if (((long long)v10) != 0)
                {
                    v10 = (long long)protect_fd();
                    if (((long long)v10) == 0)
                    {
                        v11 = ((long long)v5->field_0);
                        v9 = 0;
                        if (((long long)v6) != 0)
                        {
                            close(0x2);
                            /* goto 4210056; */
                        }
                    }
                }
                if (((long long)v10) == 0 || ((long long)v10) != 0)
                {
                    if (((long long)v6) != 0)
                    {
                        v6 = (long long)protect_fd();
                        if (((long long)v6) == 0)
                        {
                            v11 = ((long long)v5->field_0);
                            v9 = 0;
                            /* goto 4210086; */
                        }
                    }
                }
            }
        }
    }
    if (...)
    {
        v9 = freopen(((int)v8), v7, v4);
    }
    if (((long long)v6) != 0 || ((long long)v12) != 0 || ((long long)v10) != 0)
    {
        v11 = ((int)v5->field_0);
    }
    if (...)
    {
        close(0x2);
    }
    if (...)
    {
        close(0x1);
    }
    if (...)
    {
        if (((long long)v12) == 0)
        {
            if (v9 != 0)
            {
                v3 = v9;
                return v3;
            }
            v5->field_0 = v11;
            v3 = v9;
            return v3;
        }
    }
    if (...)
    {
        close(0x0);
        if (v9 != 0)
        {
            v3 = v9;
            return v3;
        }
        v5->field_0 = v11;
        v3 = v9;
        return v3;
    }
}
