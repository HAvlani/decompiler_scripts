typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 bytes_per_block;
extern struct_0 in_stream;

int read_block()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long|struct_0 * v3;  // rdx
    unsigned long|unsigned int v4;  // rbx
    struct_0 *v5;  // rbp
    unsigned long v6;  // rsi
    unsigned long|void * v7;  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r12

    if (!(v7 != 0))
    {
        __assert_fail(); /* do not return */
    }
    else if (bytes_per_block >= v7)
    {
        v3->field_0 = 0;
        v5 = v3;
        if (in_stream != 0)
        {
            v8 = 0;
            v9 = 1;
            while (true)
            {
                v4 = v7 - v8;
                v7 = v8 + v6;
                v3 = v4;
                v2 = fread_unlocked(v7, 0x1, v3, in_stream);
                v5->field_0 = v5->field_0 + v2;
                if (v3 != v2)
                {
                    __errno_location();
                    v4 = ((int)(check_and_close() & open_next_file()));
                    v9 = ((long long)(((int)v9) & v4));
                    if (in_stream != 0)
                    {
                        v8 = v5->field_0;
                    }
                    else
                    {
                        v1 = v9;
                        return v1;
                    }
                }
                else
                {
                    v1 = v9;
                    return v1;
                }
            }
        }
        else
        {
            v9 = 1;
            v1 = v9;
            return v1;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}
