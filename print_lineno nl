extern unsigned int g_416004;
extern struct_0 line_no;
extern char line_no_overflow;
extern struct_0 lineno_format;
extern struct_0 page_incr;

int print_lineno()
{
    unsigned long long v2;  // cc_dep2

    if (line_no_overflow == 0)
    {
        __printf_chk(0x1, lineno_format);
        v2 = line_no;
        line_no = page_incr + line_no;
        if (((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, Load(addr=0x41d028<64>, size=8, endness=Iend_LE), cc_dep2<8>, cc_ndep<8>)))
        {
            line_no_overflow = 1;
            return page_incr + line_no;
        }
        return page_incr + line_no;
    }
    error(0x1, 0x0, dcgettext(0x0, &g_416004, 0x5));
}
