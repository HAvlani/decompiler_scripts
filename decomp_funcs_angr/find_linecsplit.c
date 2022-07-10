typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_2 {
    char padding_0[1304];
    unsigned long long field_518;
} struct_2;

extern char have_read_eof;
extern struct_0 head;

int find_line()
{
    struct_2 * v1;  // rax
    struct_1 *|unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long [9] v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long v7;  // rdi

    v5 = head;
    if (head == 0)
    {
        if (have_read_eof != 0)
        {
            return 0;
        }
        v2 = load_buffer.part.0();
        if (((long long)v2) == 0)
        {
            return 0;
        }
        else
        {
            v5 = head;
        }
    }
    if (head != 0 || have_read_eof == 0 && ((long long)v2) != 0)
    {
        v4 = v5[2];
        if (v5[2] > v7)
        {
            return 0;
        }
        while (true)
        {
            if (*(rbx<8> + 32) + v4 <= v7)
            {
                v2 = *(rbx<8> + 64);
                if (*(rbx<8> + 64) == 0)
                {
                    if (have_read_eof == 0)
                    {
                        v2 = load_buffer.part.0();
                        if (((long long)v2) != 0)
                        {
                            v2 = *(rbx<8> + 64);
                            if (*(rbx<8> + 64) == 0)
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                        else
                        {
                            return 0;
                        }
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (*(rbx<8> + 64) != 0 || have_read_eof == 0 && ((long long)v2) != 0 && *(rbx<8> + 64) != 0)
                {
                    v4 = *(rax<8> + 16);
                    v5 = rax<8>;
                }
            }
            else
            {
                v6 = v7 - v4;
                v1 = v5[6];
                if (v7 - v4 > 79)
                {
                    break;
                }
                else
                {
                    v3 = v1 + v6 * 16 + 24;
                    return v3;
                }
            }
        }
        do
        {
            v6 -= 80;
            v1 = v1->field_518;
        }
        while (v6 > 79);
        v3 = v1 + v6 * 16 + 24;
        return v3;
    }
}
