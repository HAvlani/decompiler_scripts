extern unsigned int g_407cc2;
extern unsigned int g_407cec;
extern unsigned int g_407f40;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407cc2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_407cec, 0x5));
    dcgettext(0x0, &g_407f40, 0x5);
}
