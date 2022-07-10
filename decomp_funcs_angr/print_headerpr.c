typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_1 chars_per_margin;
extern struct_0 date_text;
extern struct_0 file_text;
extern unsigned int g_40d037;
extern unsigned int g_40d04c;
extern <missing-type> g_40d085;
extern struct_1 header_width_available;
extern unsigned int output_position;
extern struct_0 page_number;
extern char print_a_header;

int print_header()
{
    unsigned long v0;  // [bp-0x168]
    unsigned long v1;  // [bp-0x160]
    unsigned long long v12;  // rbx
    unsigned int v13;  // r9d
    struct_0 *v14;  // fs
    unsigned long v2;  // [bp-0x158]
    unsigned long v3;  // [bp-0x150]
    unsigned long v4;  // [bp-0x148]
    char v5;  // [bp-0x138]
    char v6;  // [bp-0x130]
    char v7;  // [bp-0x128]
    unsigned long v8;  // [bp-0x20]

    v8 = *(v14 + 0x28);
    output_position = 0;
    pad_across_to();
    print_white_space();
    if (page_number != 0)
    {
        __sprintf_chk(((int)&v5), 0x1, 0x114, dcgettext(0x0, &g_40d04c, 0x5), ((int)page_number), v13, v5, v6, v7);
        v12 = ((long long)header_width_available);
        v4 = &v5;
        v3 = " ";
        v2 = ((long long)((((int)(v12 - (long long)gnu_mbswidth())) < 0? 0 : ((int)(v12 - (long long)gnu_mbswidth()))) - ((int)(((long long)(((int)(v12 - (long long)gnu_mbswidth())) < 0? 0 : ((int)(v12 - (long long)gnu_mbswidth())))) >> 1))));
        v1 = file_text;
        v0 = " ";
        __printf_chk(0x1, "\n\n%*s%s%*s%s%*s%s\n\n\n", chars_per_margin, &g_40d085, ((int)date_text));
        print_a_header = 0;
        output_position = 0;
        if ((v8 ^ *(v14 + 0x28)) == 0)
        {
            return v8 ^ *(v14 + 0x28);
        }
        __stack_chk_fail(); /* do not return */
    }
    error(0x1, 0x0, dcgettext(0x0, &g_40d037, 0x5));
    __stack_chk_fail(); /* do not return */
}
