extern unsigned int g_408372;
extern unsigned int g_40839c;
extern unsigned int g_4085f0;
extern struct_0 stdout;

int emit_bug_reporting_address()
{
    fputc_unlocked(0xa, stdout);
    __printf_chk(0x1, dcgettext(0x0, &g_408372, 0x5));
    __printf_chk(0x1, dcgettext(0x0, &g_40839c, 0x5));
    dcgettext(0x0, &g_4085f0, 0x5);
}