extern unsigned int g_4128c2;
extern unsigned int g_4128ec;
extern unsigned int g_412b40;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_4128c2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_4128ec, 0x5));
    dcgettext(0x0, &g_412b40, 0x5);
}
