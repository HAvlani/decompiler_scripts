extern unsigned int g_4224ca;
extern unsigned int g_4224f4;
extern unsigned int g_422748;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_4224ca, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_4224f4, 0x5));
    dcgettext(0x0, &g_422748, 0x5);
}
