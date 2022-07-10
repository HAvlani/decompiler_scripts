extern unsigned int g_419b2a;
extern unsigned int g_419b54;
extern unsigned int g_419da8;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_419b2a, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_419b54, 0x5));
    dcgettext(0x0, &g_419da8, 0x5);
}
