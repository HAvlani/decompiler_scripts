extern struct_0 output_position;
extern struct_0 spaces_not_printed;
extern unsigned long long stdout[7];
extern char tabify_output;

int pad_across_to()
{
    unsigned long v1;  // rax
    char * v2;  // rax
    unsigned long long|unsigned int v3;  // rbx
    unsigned long v4;  // rdi
    unsigned long v5;  // rdi

    if (tabify_output == 0)
    {
        v3 = ((long long)(((int)output_position) + 1));
        if (((int)v4) >= ((int)(output_position + 1)))
        {
            do
            {
                v2 = *(stdout + 40);
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v2) = 32;
                }
                else
                {
                    v2 = __overflow();
                }
                v3 = ((int)v3) + 1;
            }
            while (v3 != ((int)(v4 + 1)));
            output_position = ((int)v5);
            return v2;
        }
        output_position = ((int)v5);
        return v2;
    }
    spaces_not_printed = ((int)(v5 - ((long long)output_position)));
    return v1;
}
