extern unsigned int g_407bc2;
extern unsigned int g_407bec;
extern unsigned int g_407e40;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_407bc2, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_407bec, 0x5));
    dcgettext(0x0, &g_407e40, 0x5);
}