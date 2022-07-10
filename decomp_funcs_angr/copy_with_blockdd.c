extern unsigned long long col;
extern struct_0 conversion_blocksize;
extern char newline_character;
extern struct_0 obuf;
extern struct_0 oc;
extern struct_0 output_blocksize;
extern struct_0 r_truncate;
extern char space_character;

int copy_with_block()
{
    unsigned long|unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rbx
    char * v4;  // rbp
    unsigned long v5;  // rsi
    unsigned long long v6;  // rdi

    if (v5 != 0)
    {
        v4 = v6;
        while (true)
        {
            v1 = ((long long)*(v4));
            v3 = col;
            if (*(v4) != newline_character)
            {
                if (col == conversion_blocksize)
                {
                    r_truncate = r_truncate + 1;
                }
                else if (((char)(col < conversion_blocksize)))
                {
                    v2 = oc + 1;
                    *(obuf + oc) = v1;
                    oc = oc + 1;
                    if (v2 >= output_blocksize)
                    {
                        v1 = write_output();
                        v3 = col;
                    }
                }
                v3 = rbx<8> + 1;
                v4 += 1;
                col = v3;
                return v1;
            }
            if (col < conversion_blocksize)
            {
                do
                {
                    v1 = oc + 1;
                    *(obuf + oc) = space_character;
                    oc = oc + 1;
                    if (v1 >= output_blocksize)
                    {
                        v1 = write_output();
                    }
                    v3 += 1;
                }
                while (conversion_blocksize > v3);
            }
            col = 0;
            v4 += 1;
            return v1;
        }
    }
    return v1;
}
